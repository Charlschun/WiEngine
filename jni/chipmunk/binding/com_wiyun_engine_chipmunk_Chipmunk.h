/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_chipmunk_Chipmunk */

#ifndef _Included_com_wiyun_engine_chipmunk_Chipmunk
#define _Included_com_wiyun_engine_chipmunk_Chipmunk
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_chipmunk_Chipmunk_INVALID_TAG
#define com_wiyun_engine_chipmunk_Chipmunk_INVALID_TAG -1L
#undef com_wiyun_engine_chipmunk_Chipmunk_GRABABLE_MASK_BIT
#define com_wiyun_engine_chipmunk_Chipmunk_GRABABLE_MASK_BIT -2147483648L
#undef com_wiyun_engine_chipmunk_Chipmunk_NOT_GRABABLE_MASK
#define com_wiyun_engine_chipmunk_Chipmunk_NOT_GRABABLE_MASK 2147483647L
#undef com_wiyun_engine_chipmunk_Chipmunk_CP_ALL_LAYERS
#define com_wiyun_engine_chipmunk_Chipmunk_CP_ALL_LAYERS -1L
#undef com_wiyun_engine_chipmunk_Chipmunk_CP_NO_GROUP
#define com_wiyun_engine_chipmunk_Chipmunk_CP_NO_GROUP 0L
/*
 * Class:     com_wiyun_engine_chipmunk_Chipmunk
 * Method:    nativeGetSpace
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_chipmunk_Chipmunk_nativeGetSpace
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Chipmunk
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Chipmunk_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Chipmunk
 * Method:    setDebugDraw
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Chipmunk_setDebugDraw
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_chipmunk_Chipmunk
 * Method:    applyDampedSpring
 * Signature: (Lcom/wiyun/engine/chipmunk/Body;Lcom/wiyun/engine/chipmunk/Body;Lcom/wiyun/engine/types/WYPoint;Lcom/wiyun/engine/types/WYPoint;FFFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Chipmunk_applyDampedSpring
  (JNIEnv *, jclass, jobject, jobject, jobject, jobject, jfloat, jfloat, jfloat, jfloat);

#ifdef __cplusplus
}
#endif
#endif
