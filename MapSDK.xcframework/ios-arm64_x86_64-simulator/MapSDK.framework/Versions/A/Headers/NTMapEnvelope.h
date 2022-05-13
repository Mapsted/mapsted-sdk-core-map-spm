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
#import "NTMapBounds.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTMapPosVector;

/**
 * A bounding area on the map. Can be defined by a map bounds object or by a convex bounding polygon.
 * This class is intended for conservative object area estimation and fast intersection testing.
 */
__attribute__ ((visibility("default"))) @interface NTMapEnvelope : NSObject
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
 * Constructs an empty MapEnvelope object. Nothing is contained within
 * this envelope.
 */
-(id)init;
/**
 * Constructs a MapEnvelope object using map bounds.
 * @param bounds The bounds for the envelope.
 */
-(id)initWithBounds: (NTMapBounds*)bounds;
/**
 * Constructs a MapEnvelope object from a convex bounding polygon.
 * @param convexHull The list of convex hull points.
 */
-(id)initWithConvexHull: (NTMapPosVector*)convexHull;
/**
 * Returns the map bounds of this map envelope.
 * @return The map bounds of this map envelope.
 */
-(NTMapBounds*)getBounds;
/**
 * Returns the convex hull of this map envelope.
 * @return The convex hull of this map envelope.
 */
-(NTMapPosVector*)getConvexHull;
/**
 * Tests whether this map envelope contains another map envelope.
 * @param envelope The other map envelope.
 * @return True if this map envelope contains the other map envelope.
 */
-(BOOL)contains: (NTMapEnvelope*)envelope;
/**
 * Tests whether this map envelope intersects with another map envelope.
 * @param envelope The other map envelope.
 * @return True if this map envelope intersects the other map envelope.
 */
-(BOOL)intersects: (NTMapEnvelope*)envelope;
/**
 * Checks for equality between this and another envelope.
 * @param envelope The other map envelope object.
 * @return True if equal.
 */
-(BOOL)isEqualInternal: (NTMapEnvelope*)envelope;
/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(int)hashInternal;
/**
 * Creates a string representation of this map envelope, useful for logging.
 * @return The string representation of this map envelope.
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

