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
#import "NTMapVec.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A double precision map position defined using three coordinates. X and y coordinates denote positions on the map,
 * while z coordinate is height from the ground plane. Actual units for x, y and z depend on map projection.
 * For example, in EPSG:4326 x is used for latitude, y for longitude and z for height in meters.
 */
__attribute__ ((visibility("default"))) @interface NTMapPos : NSObject
{
  /** @internal:nodoc: */
  void *swigCPtr;
  /** @internal:nodoc: */
  BOOL swigCMemOwn;
}
/** @internal:nodoc: */
-(void*)getCptr;
/** @internal:nodoc: */
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**  
 * Checks if this object is equal to the specified object.
 * @param object The reference object.
 * @return True when objects are equal, false otherwise.
 */
-(BOOL)isEqual:(id)object;

/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(NSUInteger)hash;

/**
 * Constructs a MapPos object. All coordinates will be 0.
 */
-(id)init;
/**
 * Constructs a MapPos object from 2 coordinates. The z coordinate will be 0.
 * @param x The x coordinate.
 * @param y The y coordinate.
 */
-(id)initWithX: (double)x y: (double)y;
/**
 * Constructs a MapPos object from 3 coordinates.
 * @param x The x coordinate.
 * @param y The y coordinate.
 * @param z The z coordinate.
 */
-(id)initWithX: (double)x y: (double)y z: (double)z;
/**
 * Returns the x coordinate of this map position.
 * @return The x coordinate of this map position.
 */
-(double)getX;
/**
 * Returns the y coordinate of this map position.
 * @return The y coordinate of this map position.
 */
-(double)getY;
/**
 * Returns the z coordinate of this map position.
 * @return The z coordinate of this map position.
 */
-(double)getZ;
/**
 * Creates a new map position by adding a map vector to this map position.
 * @param v The map vector to be added.
 * @return The new map position.
 */
-(NTMapPos*)add: (NTMapVec*)v;
/**
 * Creates a new map position by subtracting a map vector from this map position.
 * @param v The map vector to be subtracted.
 * @return The new map position.
 */
-(NTMapPos*)subVec: (NTMapVec*)v;
/**
 * Creates a new map vector by subtracting a map position from this map position.
 * @param p The map position to be subtracted.
 * @return The new map vector.
 */
-(NTMapVec*)subPos: (NTMapPos*)p;
/**
 * Checks for equality between this and another map position.
 * @param p The other map position.
 * @return True if equal.
 */
-(BOOL)isEqualInternal: (NTMapPos*)p;
/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(int)hashInternal;
/**
 * Creates a string representation of this map position, useful for logging.
 * @return The string representation of this map position.
 */
-(NSString*)description;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
#import "NTMapVec.h"
#ifdef __cplusplus
extern "C" {
#endif

__attribute__ ((visibility("default"))) @interface NTMapPosVector : NSObject
{
	/** @internal:nodoc: */
	void *swigCPtr;
	/** @internal:nodoc: */
	BOOL swigCMemOwn;
}
/** @internal:nodoc: */
-(void*)getCptr;
/** @internal:nodoc: */
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)init;
-(unsigned int)size;
-(unsigned int)capacity;
-(void)reserve: (unsigned int)n;
-(BOOL)isEmpty;
-(void)clear;
-(void)add: (NTMapPos*)x;
-(NTMapPos*)get: (int)i;
-(void)set: (int)i val: (NTMapPos*)val;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
#import "NTMapVec.h"
#ifdef __cplusplus
extern "C" {
#endif

__attribute__ ((visibility("default"))) @interface NTMapPosVectorVector : NSObject
{
	/** @internal:nodoc: */
	void *swigCPtr;
	/** @internal:nodoc: */
	BOOL swigCMemOwn;
}
/** @internal:nodoc: */
-(void*)getCptr;
/** @internal:nodoc: */
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)init;
-(unsigned int)size;
-(unsigned int)capacity;
-(void)reserve: (unsigned int)n;
-(BOOL)isEmpty;
-(void)clear;
-(void)add: (NTMapPosVector*)x;
-(NTMapPosVector*)get: (int)i;
-(void)set: (int)i val: (NTMapPosVector*)val;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

