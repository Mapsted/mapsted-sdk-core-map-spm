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
#import "NTBitmap.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTBillboardStyleBuilder.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTMarkerStyle.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A builder class for MarkerStyle.
 */
__attribute__ ((visibility("default"))) @interface NTMarkerStyleBuilder : NTBillboardStyleBuilder
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
+(NTMarkerStyleBuilder*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a MarkerStyleBuilder object with all parameters set to defaults.
 */
-(id)init;
/**
 * Returns the horizontal anchor point of the marker.
 * @return The horizontal anchor point of the marker.
 */
-(float)getAnchorPointX;
/**
 * Sets the horizontal anchor point of the marker.
 * @param anchorPointX The new horizontal anchor point for the marker. -1 means the left side,
 * 0 the center and 1 the right side of the marker. The default is 0.
 */
-(void)setAnchorPointX: (float)anchorPointX;
/**
 * Returns the vertical anchor point of the marker.
 * @return The vertical anchor point of the marker.
 */
-(float)getAnchorPointY;
/**
 * Sets the vertical anchor point of the marker.
 * @param anchorPointY The vertical anchor point for the marker. -1 means the bottom,
 * 0 the center and 1 the top of the marker. The default is -1.
 */
-(void)setAnchorPointY: (float)anchorPointY;
/**
 * Sets the anchor point for the marker. Values will be clamped to [-1, 1] range.
 * @param anchorPointX The new horizontal anchor point for the marker. -1 means the left side,
 * 0 the center and 1 the right side of the marker. The default is 0.
 * @param anchorPointY The vertical anchor point for the marker. -1 means the bottom,
 * 0 the center and 1 the top of the marker. The default is -1.
 */
-(void)setAnchorPointX: (float)anchorPointX anchorPointY: (float)anchorPointY;
/**
 * Returns the bitmap of the marker.
 * @return The bitmap of the marker.
 */
-(NTBitmap*)getBitmap;
/**
 * Sets the bitmap that will be used for drawing the marker. The default is "default_marker.png".
 * @param bitmap The new bitmap for the marker.
 */
-(void)setBitmap: (NTBitmap*)bitmap;
/**
 * Returns the orientation mode of the marker.
 * @return The orientation mode of the marker.
 */
-(enum NTBillboardOrientation)getOrientationMode;
/**
 * Sets the orientation mode for the marker. The default is BillboardOrientation::FACE_CAMERA_BILLBOARD.
 * @param orientationMode The new orientation mode for the marker.
 */
-(void)setOrientationMode: (enum NTBillboardOrientation)orientationMode;
/**
 * Returns the scaling mode of the marker.
 * @return The scaling mode of the marker.
 */
-(enum NTBillboardScaling)getScalingMode;
/**
 * Sets the scaling mode for the marker. The default is BillboardScaling::CONST_SCREEN_SIZE.
 * @param scalingMode The new scaling mode for the marker.
 */
-(void)setScalingMode: (enum NTBillboardScaling)scalingMode;
/**
 * Returns the size of the marker used for click detection.
 * @return The size of the marker used for click detection.
 */
-(float)getClickSize;
/**
 * Sets the size for the marker that will be used for click detection.
 * Units are screen density independent pixels (DP or DIP). If set to -1 the click size will be
 * calculated automatically. The default is -1.
 * @param size The new point size in dp.
 */
-(void)setClickSize: (float)size;
/**
 * Returns the size of the marker.
 * @return The size of the marker, units depend on the scaling mode.
 */
-(float)getSize;
/**
 * Sets the size for the marker. The units depend on the scaling mode, if it's set to BillboardScaling::WORLD_SIZE,
 * the size is in meters near the equator, the size will not be stretched near the poles. If it's set to
 * BillboardScaling::SCREEN_SIZE or BillboardScaling::CONST_SCREEN_SIZE then the size is in screen density
 * independent pixels (dp or dip) or normal pixels, depending whether setScaleWithDPI was set to true or false
 * respectively. If set to -1, unpadded bitmap width will be used instead. The default is -1.
 * @param size The new marker size.
 */
-(void)setSize: (float)size;
/**
 * Builds a new instance of the MarkerStyle object using previously set parameters.
 * @return A new MarkerStyle object.
 */
-(NTMarkerStyle*)buildStyle;
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

