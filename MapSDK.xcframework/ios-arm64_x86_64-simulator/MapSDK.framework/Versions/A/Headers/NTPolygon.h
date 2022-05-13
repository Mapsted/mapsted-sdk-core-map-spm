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
#import "NTPolygonGeometry.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTPolygonStyle.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVectorElement.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTMapPosVector;
@class NTMapPosVectorVector;

/**
 * A geometric polygon that can be displayed on the map.
 * Polygons can be concave and have multiple overlapping holes.
 */
__attribute__ ((visibility("default"))) @interface NTPolygon : NTVectorElement
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
+(NTPolygon*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a Polygon object from a geometry object and a style.
 * @param geometry The geometry object that defines the location and holes of this polygon.
 * @param style The style that defines what this polygon looks like.
 */
-(id)initWithGeometry: (NTPolygonGeometry*)geometry style: (NTPolygonStyle*)style;
/**
 * Constructs a Polygon object from a vector of map positions and a style.
 * @param poses The vector of map positions that defines the location of this polygon.
 * @param style The style that defines what this polygon looks like.
 */
-(id)initWithPoses: (NTMapPosVector*)poses style: (NTPolygonStyle*)style;
/**
 * Constructs a Polygon object from a vector of map positions, a vector of holes and a style.
 * @param poses The vector of map positions that defines the location of this polygon.
 * @param holes The vector of holes that defines the locations of holes of this polygon.
 * @param style The style that defines what this polygon looks like.
 */
-(id)initWithPoses: (NTMapPosVector*)poses holes: (NTMapPosVectorVector*)holes style: (NTPolygonStyle*)style;
-(NTPolygonGeometry*)getGeometry;
/**
 * Sets the location for this polygon.
 * @param geometry The new geometry object that defines the location and holes of this polygon.
 */
-(void)setGeometry: (NTPolygonGeometry*)geometry;
/**
 * Returns the vertices that define this polygon.
 * @return The vector of map positions that define this polygon.
 */
-(NTMapPosVector*)getPoses;
/**
 * Sets the vertices that define this polygon.
 * Note: holes are not affected by this call.
 * @param poses The new vector of map positions that define this polygon.
 */
-(void)setPoses: (NTMapPosVector*)poses;
/**
 * Returns the holes of the polygon.
 * @return The list of holes of the polygon.
 */
-(NTMapPosVectorVector*)getHoles;
/**
 * Sets the holes of the polygon.
 * @param holes The list of holes of the polygon.
 */
-(void)setHoles: (NTMapPosVectorVector*)holes;
/**
 * Returns the style of this polygon.
 * @return The style that defines what this polygon looks like.
 */
-(NTPolygonStyle*)getStyle;
/**
 * Sets the style for this polygon.
 * @param style The new style that defines what this polygon looks like.
 */
-(void)setStyle: (NTPolygonStyle*)style;
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

