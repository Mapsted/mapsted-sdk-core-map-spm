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
#import "NTMapPos.h"
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
#import "NTGeometry.h"
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
#ifdef __cplusplus
}
#endif
#import "NTBillboard.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A billboard element with a static bitmap that can be displayed on the map.
 */
__attribute__ ((visibility("default"))) @interface NTMarker : NTBillboard
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
+(NTMarker*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a Marker object with the specified style and attaches it to a billboard element.
 * @param baseBillboard The billboard this billboard will be attached to.
 * @param style The style that defines what this marker looks like.
 */
-(id)initWithBaseBillboard: (NTBillboard*)baseBillboard style: (NTMarkerStyle*)style;
/**
 * Constructs a Marker object from a geometry object and a style.
 * @param geometry The geometry object that defines the location of this marker.
 * @param style The style that defines what this marker looks like.
 */
-(id)initWithGeometry: (NTGeometry*)geometry style: (NTMarkerStyle*)style;
/**
 * Constructs a Marker object from a map position and a style.
 * @param pos The map position that defines the location of this marker.
 * @param style The style that defines what this marker looks like.
 */
-(id)initWithPos: (NTMapPos*)pos style: (NTMarkerStyle*)style;
/**
 * Returns the style of this marker.
 * @return The style that defines what this marker looks like.
 */
-(NTMarkerStyle*)getStyle;
/**
 * Sets the style for this marker.
 * @param style The new style that defines what this marker looks like.
 */
-(void)setStyle: (NTMarkerStyle*)style;
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

