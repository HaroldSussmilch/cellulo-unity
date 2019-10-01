# Cellulo in Unity 3D

Demo https://youtu.be/XnN9yhErv5g

Project in Unity with all required assets
{F8970681}

Running app on Android with 2 connected robots
{F8970680}

Tested with Qt 5.11.1, android-ndk-r16b, android-sdk_r22.3-linux, API 27 tablet, Unity for Linux 2018.2.0f2 Personal, Cellulo-QML efdb94f

## Installation (common)

1. Need Qt and access to `cellulo-qml-plugin` on c4science through ssh
2. `git submodule init; git submodule update`. Build and install `cellulo-qml-plugin` for your architecture. On Linux, make it available for loading
3. Using qt, build the project `cellulo-unity.pro` for your architecture
4. Add the resulting file `libcellulo-unity.so` as a Unity asset to your project
5. Use the C# class `EscapeTheGhost/Assets/Cellulo.cs` in your project to wrap the C calls to Cellulo

## Usage

1. Need Robot pool daemon running. In C#:
2. After connection to the pool with `Cellulo.initialize()`, test if have enough robots with `Cellulo.robotsRemaining()`.
3. If the quantity is enough for you, create Cellulo objects with `new Cellulo()`
4. If the constructor did not show errors, the robot is ready to use!

## Additional steps for Android

First of all, the library `libcelluloplugin.so` must be bundled with the app.

On Android, apart from building the library `libcellulo-unity.so` and including it as an asset to Unity, also need to supply the following libraries:
```
libgnustl_shared.so
libqandroidbearer.so
libQt5AndroidExtras.so
libQt5Bluetooth.so
libQt5Concurrent.so
libQt5Core.so
libQt5Gui.so
libQt5Multimedia.so
libQt5Network.so
libQt5Qml.so
libQt5Quick.so
libqtforandroid.so
```

These are taken from Qt and Android NDK.

Check `logcat` on your device and use `/path_to/android_ndk/find_it/arm-linux-androideabi-readelf -d yourfile.so` to get dependencies of libs, if new versions are different.

Also the following jar files are required (copied from Qt installation):
```
QtAndroidBearer.jar
QtAndroidBluetooth.jar
QtAndroidExtras.jar
QtAndroidGamepad.jar
QtAndroid.jar
QtAndroidWebView.jar
QtMultimedia.jar
QtNfc.jar
QtPositioning.jar
QtSensors.jar
QtTextToSpeech.jar
```

Moreover, Qt libraries need to be loaded from Java using `System.load`, which calls C function `JNI_OnLoad`.
Unity does that to `libcellulo-unity.so` because it's referenced in `Cellulo.cs` file.
However, it does not do that for Qt libs because they are simply dependencies of `libcellulo-unity` and are loaded using regular `dlopen`.
Qt libs crash if that method has not been called because they need the pointer to Java VM.
To fix the issue, methods are called manually in `CelluloUnity_Cellulo.cpp`.
To obtain list of libs which require manual call, run `/path_to/android_ndk/find_it/arm-linux-androideabi-gcc-nm -D your_so_file|grep OnLoad`.
If it is nonempty, it needs to be called.

The exception is `libqtforandroid.so` which also enables Bluetooth.
Calling it results in a crash and it is not clear at this moment how to enable it.
Therefore, the Robot Pool is used which does not require Bluetooth.

## C++ example

Example of usage in C++ is at `cpp-test`

## Example

MsPacman-like example

The project EscapeTheGhost is a simple demo with two Cellulos where one of them is a ghost and is dangerous when is red.
The other Cellulo is the player and it must be moved to the goal while avoiding the ghost and other obstacles.
When the robot hits the obstacle, it vibrates and returns to start of the level (level failed).

2D GUI interface shows some info.

## Task

T2160
