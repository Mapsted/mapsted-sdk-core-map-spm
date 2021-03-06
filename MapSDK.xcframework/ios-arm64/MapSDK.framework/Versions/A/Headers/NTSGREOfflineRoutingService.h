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
#import "NTVariant.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTFeatureCollection.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTProjection.h"
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
 * An offline routing service that uses SGRE routing engine.
 * Note: this class is experimental and may change or even be removed in future SDK versions.
 */
__attribute__ ((visibility("default"))) @interface NTSGREOfflineRoutingService : NTRoutingService
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
+(NTSGREOfflineRoutingService*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new SGREOfflineRoutingService instance from a given GeoJSON and rule list.
 * @param geoJSON The GeoJSON variant specifying features used for the routing graph.
 * @param config A configuration specifying various routing metrics and rules.
 * @throws NSException If an error occured during rule list parsing.
 */
-(id)initWithGeoJSON: (NTVariant*)geoJSON config: (NTVariant*)config;
/**
 * Constructs a new SGREOfflineRoutingService instance from a given feature collection and rule list.
 * @param projection Projection for the features in featureCollection. Can be null if the coordinates are based on WGS84.
 * @param featureCollection The feature collection used for the routing graph.
 * @param config A configuration specifying various routing metrics and rules.
 * @throws NSException If an error occured during rule list parsing.
 */
-(id)initWithProjection: (NTProjection*)projection featureCollection: (NTFeatureCollection*)featureCollection config: (NTVariant*)config;
/**
 * Returns the value of specified routing parameter.
 * @param param The name of the parameter. For example "$speed".
 * @return The value of the parameter. If the parameter does not exist, NaN is returned.
 */
-(float)getRoutingParameter: (NSString*)param;
/**
 * Sets the value of specified routing parameter.
 * @param param The name of the parameter. For example "$speed".
 * @param value The new value of the parameter.
 */
-(void)setRoutingParameter: (NSString*)param value: (float)value;
-(NSString*)getProfile;
-(NSString*)getProfileSwigExplicitNTSGREOfflineRoutingService;
-(void)setProfile: (NSString*)profile;
-(void)setProfileSwigExplicitNTSGREOfflineRoutingService: (NSString*)profile;
-(NTRouteMatchingResult*)matchRoute: (NTRouteMatchingRequest*)request;
-(NTRouteMatchingResult*)matchRouteSwigExplicitNTSGREOfflineRoutingService: (NTRouteMatchingRequest*)request;
-(NTRoutingResult*)calculateRoute: (NTRoutingRequest*)request;
-(NTRoutingResult*)calculateRouteSwigExplicitNTSGREOfflineRoutingService: (NTRoutingRequest*)request;
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

