#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_lxy_path_MainActivity_getString(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "test");
}
