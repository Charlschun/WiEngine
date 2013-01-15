/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_controllers_Controller */

#ifndef _Included_com_wiyun_engine_box2d_controllers_Controller
#define _Included_com_wiyun_engine_box2d_controllers_Controller
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_box2d_controllers_Controller
 * Method:    addBody
 * Signature: (Lcom/wiyun/engine/box2d/dynamics/Body;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_Controller_addBody
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_Controller
 * Method:    removeBody
 * Signature: (Lcom/wiyun/engine/box2d/dynamics/Body;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_Controller_removeBody
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_Controller
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_Controller_clear
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_Controller
 * Method:    getNext
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_controllers_Controller_getNext
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_Controller
 * Method:    getWorld
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_controllers_Controller_getWorld
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_Controller
 * Method:    getBodyList
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_controllers_Controller_getBodyList
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif