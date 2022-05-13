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

/**
 * Route matching point type.
 */
typedef NS_ENUM(NSInteger, NTRouteMatchingPointType) {
/**
 * The point was unmatched.
 */
  NT_ROUTE_MATCHING_POINT_UNMATCHED,
/**
 * The point was interpolated.
 */
  NT_ROUTE_MATCHING_POINT_INTERPOLATED,
/**
 * The point was matched.
 */
  NT_ROUTE_MATCHING_POINT_MATCHED
};


#ifdef __cplusplus
}
#endif
#import "NTMapPos.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A class that defines a route matching result point.
 */
__attribute__ ((visibility("default"))) @interface NTRouteMatchingPoint : NSObject
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
 * Constructs a new RouteMatchingPoint with default values.
 */
-(id)init;
/**
 * Constructs a new RouteMatchingPoint from position, type and edge index.
 * @param pos The position of the point.
 * @param type The type of the matching point.
 * @param edgeIndex The index of the corresponding RouteMatchingEdge instance.
 */
-(id)initWithPos: (NTMapPos*)pos type: (enum NTRouteMatchingPointType)type edgeIndex: (int)edgeIndex;
/**
 * Returns the position of the matching point.
 * @return The position of the matching point.
 */
-(NTMapPos*)getPos;
/**
 * Returns the type of the matching point.
 * @return The type of the matching point.
 */
-(enum NTRouteMatchingPointType)getType;
/**
 * Returns the corresponding matching edge index in the matching result.
 * @return The corresponding matching edge index in the matching result.
 */
-(int)getEdgeIndex;
/**
 * Creates a string representation of this object, useful for logging.
 * @return The string representation of this object.
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
#import "NTMapPos.h"
#ifdef __cplusplus
extern "C" {
#endif

__attribute__ ((visibility("default"))) @interface NTRouteMatchingPointVector : NSObject
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
-(void)add: (NTRouteMatchingPoint*)x;
-(NTRouteMatchingPoint*)get: (int)i;
-(void)set: (int)i val: (NTRouteMatchingPoint*)val;
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
