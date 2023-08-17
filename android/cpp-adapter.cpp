#include <jni.h>
#include "react-native-gnunet.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_gnunet_GnunetModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return gnunet::multiply(a, b);
}
