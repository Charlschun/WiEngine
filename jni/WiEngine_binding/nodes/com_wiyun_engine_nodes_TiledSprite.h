/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_TiledSprite */

#ifndef _Included_com_wiyun_engine_nodes_TiledSprite
#define _Included_com_wiyun_engine_nodes_TiledSprite
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    nativeInit
 * Signature: (Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_nativeInit
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    isTileVertical
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TiledSprite_isTileVertical
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    isTileHorizontal
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TiledSprite_isTileHorizontal
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setTileDirection
 * Signature: (ZZ)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setTileDirection
  (JNIEnv *, jobject, jboolean, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setTextureRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    isFlinging
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TiledSprite_isFlinging
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setMaxOffsetX
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setMaxOffsetX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    getMaxOffsetX
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_TiledSprite_getMaxOffsetX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setMinOffsetX
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setMinOffsetX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    getMinOffsetX
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_TiledSprite_getMinOffsetX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setMaxOffsetY
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setMaxOffsetY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    getMaxOffsetY
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_TiledSprite_getMaxOffsetY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setMinOffsetY
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setMinOffsetY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    getMinOffsetY
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_TiledSprite_getMinOffsetY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setOffsetX
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setOffsetX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setOffsetY
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setOffsetY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    offsetBy
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_offsetBy
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    stopFling
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_stopFling
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    fling
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_fling
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setStretch
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setStretch
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    isStretch
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TiledSprite_isStretch
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    setSpacing
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TiledSprite_setSpacing
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    getSpacingX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_TiledSprite_getSpacingX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TiledSprite
 * Method:    getSpacingY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_TiledSprite_getSpacingY
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif