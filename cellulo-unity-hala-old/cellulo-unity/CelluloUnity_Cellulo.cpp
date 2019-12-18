#ifdef __ANDROID__

#include "CelluloUnity_Cellulo.h"
#include <dlfcn.h>
#include <QDebug>

jint load(JavaVM *vm, void *reserved, const char* so_file) {
    jint (*that_jni_onload)(JavaVM *vm, void *reserved);
    char *error;


    void* handle = dlopen(so_file, RTLD_LAZY);
    if (!handle) {
        qDebug() << dlerror();
        exit(EXIT_FAILURE);
    }

    *(void **) (&that_jni_onload) = dlsym(handle, "JNI_OnLoad");

    if ((error = dlerror()) != NULL)  {
        qDebug() << error;
        exit(EXIT_FAILURE);
    }

    return (*that_jni_onload)(vm, reserved);
}

jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
    qDebug() << "Begin JNI_Onload()";
    jint res = load(vm, reserved, "libQt5Core.so");
    load(vm, reserved, "libQt5AndroidExtras.so");
    load(vm, reserved, "libQt5Bluetooth.so");
    //load(vm, reserved, "libqtforandroid.so"); enables bluetooth. Does not work. See https://c4science.ch/T2160
    qDebug() << "End JNI_Onload()";
    return res;
}

#endif
