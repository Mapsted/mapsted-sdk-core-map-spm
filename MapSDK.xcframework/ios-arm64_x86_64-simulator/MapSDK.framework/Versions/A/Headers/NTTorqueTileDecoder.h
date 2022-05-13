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
#import "NTBinaryData.h"
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
#import "NTCartoCSSStyleSet.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVectorTileDecoder.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A decoder for Torque layer that accepts json-based Torque tiles.
 */
__attribute__ ((visibility("default"))) @interface NTTorqueTileDecoder : NTVectorTileDecoder
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
+(NTTorqueTileDecoder*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new TorqueTileDecoder given style.
 * @param styleSet The style set used by decoder.
 * @throws NSException If the decoder could not be created or there are issues with the style set.
 */
-(id)initWithStyleSet: (NTCartoCSSStyleSet*)styleSet;
/**
 * Returns the frame count defined in the Torque style.
 * @return The frame count in the animation.
 */
-(int)getFrameCount;
/**
 * Returns the tile resolution, in pixels.
 * @return The tile resolution in pixels.
 */
-(int)getResolution;
/**
 * Returns the animation duration, in seconds.
 * @return The animation duration, in seconds.
 */
-(float)getAnimationDuration;
/**
 * Returns the current style set used by the decoder.
 * @return The current style set.
 */
-(NTCartoCSSStyleSet*)getStyleSet;
/**
 * Sets the current style set used by the decoder.
 * @param styleSet The new style set to use.
 * @throws NSException If the decoder could not be updated or there are issues with the style set.
 */
-(void)setStyleSet: (NTCartoCSSStyleSet*)styleSet;
-(void)addFallbackFont: (NTBinaryData*)fontData;
-(int)getMinZoom;
-(int)getMaxZoom;
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
