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
#import "NTFeature.h"
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
#import "NTGeometry.h"
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

/**
 * A GeoJSON parser.
 * Parser supports Geometry, Feature and FeatureCollection inputs.
 */
__attribute__ ((visibility("default"))) @interface NTGeoJSONGeometryReader : NSObject
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
 * Constructs a new GeoJSONGeometryReader object.
 */
-(id)init;
/**
 * Returns the current target projection. If target projection is set, all geometry
 * coordinates will be converted from WGS84 to target projection coordinate system.
 * @return The current target projection or null.
 */
-(NTProjection*)getTargetProjection;
/**
 * Sets the current target projection. If target projection is set, all geometry
 * coordinates will be converted from WGS84 to target projection coordinate system.
 * @param proj The new target projection or null.
 */
-(void)setTargetProjection: (NTProjection*)proj;
/**
 * Reads geometry from the specified GeoJSON string.
 * @param geoJSON The GeoJSON string to read.
 * @return The geometry read from the string.
 * @throws NSException If string could not be parsed.
 */
-(NTGeometry*)readGeometry: (NSString*)geoJSON;
/**
 * Reads feature from the specified GeoJSON string.
 * @param geoJSON The GeoJSON string to read.
 * @return The feature read from the string.
 * @throws NSException If string could not be parsed.
 */
-(NTFeature*)readFeature: (NSString*)geoJSON;
/**
 * Reads feature collection from the specified GeoJSON string.
 * @param geoJSON The GeoJSON string to read.
 * @return The feature collection read from the string.
 * @throws NSException If string could not be parsed.
 */
-(NTFeatureCollection*)readFeatureCollection: (NSString*)geoJSON;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
