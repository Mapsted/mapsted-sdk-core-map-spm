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
#import "NTRoutingService.h"
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
 * An online routing service that connects to Carto-provided routing server.
 * Routing and route matching perform network requests and must be executed in non-UI background thread.
 * Note: this service is not actively maintained and will be removed in future versions.
 * @deprecated 
 */
__attribute__ ((visibility("default"))) @interface NTCartoOnlineRoutingService : NTRoutingService
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
+(NTCartoOnlineRoutingService*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new CartoOnlineRoutingService instance given service source.
 * @param source The source id of the service.
 */
-(id)initWithSource: (NSString*)source;
-(NSString*)getProfile;
-(NSString*)getProfileSwigExplicitNTCartoOnlineRoutingService;
-(void)setProfile: (NSString*)profile;
-(void)setProfileSwigExplicitNTCartoOnlineRoutingService: (NSString*)profile;
-(NTRouteMatchingResult*)matchRoute: (NTRouteMatchingRequest*)request;
-(NTRouteMatchingResult*)matchRouteSwigExplicitNTCartoOnlineRoutingService: (NTRouteMatchingRequest*)request;
-(NTRoutingResult*)calculateRoute: (NTRoutingRequest*)request;
-(NTRoutingResult*)calculateRouteSwigExplicitNTCartoOnlineRoutingService: (NTRoutingRequest*)request;
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

