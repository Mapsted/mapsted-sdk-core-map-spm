/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
#import "NTColor.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTBitmap.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTLayer.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A solid layer that displays predefined color or bitmap.
 * @deprecated 
 */
__attribute__ ((visibility("default"))) @interface NTSolidLayer : NTLayer
/** @internal:nodoc: */
-(void*)getCptr;
/** @internal:nodoc: */
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 * @param cPtr The native pointer of the instance.
 * @param cMemoryOwn The ownership flag.
 * @return The new instance.
 */
/** @internal:nodoc: */
+(NTSolidLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a SolidLayer object from a color.
 * @param color The color for the layer.
 */
-(id)initWithColor: (NTColor*)color;
/**
 * Constructs a SolidLayer object from a bitmap.
 * @param bitmap The bitmap for the layer.
 */
-(id)initWithBitmap: (NTBitmap*)bitmap;
/**
 * Returns the color of this layer.
 * @return The color of this layer..
 */
-(NTColor*)getColor;
/**
 * Sets the color of this layer.
 * @param color The new color for the layer. Note: if bitmap is defined, the color is multiplied with the bitmap.
 */
-(void)setColor: (NTColor*)color;
/**
 * Returns the bitmap of this layer.
 * @return The bitmap of this layer. Can be null.
 */
-(NTBitmap*)getBitmap;
/**
 * Sets the bitmap of this layer.
 * @param bitmap The new bitmap for the layer. Can be null, in that case the layer color is used.
 */
-(void)setBitmap: (NTBitmap*)bitmap;
/**
 * Returns the bitmap scaling factor.
 * @return The bitmap scaling factor.
 */
-(float)getBitmapScale;
/**
 * Sets the bitmap scaling factor.
 * @param scale The new bitmap scaling factor. Default is 1, which corresponds to 1:1 mapping between bitmap pixels and screen pixels.
 */
-(void)setBitmapScale: (float)scale;
-(BOOL)isUpdateInProgress;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.
 * @return The class name of this object.
 */
/** @internal:nodoc: */
-(NSString*)swigGetClassName;
/**
 * Returns the pointer to the connected director object. This is used internally by the SDK.
 * @return The pointer to the connected director object or null if director is not connected.
 */
/** @internal:nodoc: */
-(void *)swigGetDirectorObject;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

