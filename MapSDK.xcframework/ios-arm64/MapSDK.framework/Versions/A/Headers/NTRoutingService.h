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
#import "NTRoutingRequest.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTRoutingResult.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTRouteMatchingRequest.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTRouteMatchingResult.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * An abstract base class for routing services (either online or offline).
 */
__attribute__ ((visibility("default"))) @interface NTRoutingService : NSObject
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
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 * @param cPtr The native pointer of the instance.
 * @param cMemoryOwn The ownership flag.
 * @return The new instance.
 */
/** @internal:nodoc: */
+(NTRoutingService*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Returns the current routing profile.
 * @return The current routing profile.
 */
-(NSString*)getProfile;
/**
 * Sets the current routing profile.
 * @param profile The new routing profile. Routing profiles are dependent on specific routing service.
 */
-(void)setProfile: (NSString*)profile;
/**
 * Matches specified points to the points on the road network.
 * @param request The matching request defining points.
 * @return The matching result or null if route matching failed.
 * @throws NSException If IO error occured during the route matching.
 */
-(NTRouteMatchingResult*)matchRoute: (NTRouteMatchingRequest*)request;
/**
 * Calculates routing result (path) based on routing request.
 * @param request The routing request defining via points.
 * @return The result or null if routing failed.
 * @throws NSException If IO error occured during the route calculation.
 */
-(NTRoutingResult*)calculateRoute: (NTRoutingRequest*)request;
/**
 * The default constructor.
 */
-(id)init;
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

