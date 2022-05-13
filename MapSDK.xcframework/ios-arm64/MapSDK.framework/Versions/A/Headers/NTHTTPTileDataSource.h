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
#import "NTMapTile.h"
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
#ifdef __cplusplus
}
#endif
#import "NTStringVector.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTStringMap.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTTileDataSource.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTTileData.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A tile data source that loads tiles using a HTTP connection.
 * The requests are generated using a template scheme, where tags in the baseURL string are replaced with actual values.
 * The following tags are supported: s, z, zoom, x, y, xflipped, yflipped, quadkey, frame.
 * 
 * For example, if baseURL = "https://tile.openstreetmap.org/{zoom}/{x}/{y}.png" and the requested tile has zoom = 2,
 * x = 1 and y = 3, then the tile will be loaded from the following URL: "https://tile.openstreetmap.org/2/1/3.png".
 */
__attribute__ ((visibility("default"))) @interface NTHTTPTileDataSource : NTTileDataSource
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
+(NTHTTPTileDataSource*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a HTTPTileDataSource object.
 * @param minZoom The minimum zoom level supported by this data source.
 * @param maxZoom The maximum zoom level supported by this data source.
 * @param baseURL The base URL containing tags (for example, "https://tile.openstreetmap.org/{zoom}/{x}/{y}.png").
 */
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom baseURL: (NSString*)baseURL;
/**
 * Returns the base URL template containing tags.
 * @return The base URL template.
 */
-(NSString*)getBaseURL;
/**
 * Sets the base URL for the data source.
 * @param baseURL The base URL containing tags (for example, "https://tile.openstreetmap.org/{zoom}/{x}/{y}.png").
 */
-(void)setBaseURL: (NSString*)baseURL;
/**
 * Returns the subdomains for {s} tag. The default is ["a", "b", "c", "d"].
 * @return The list of subdomains.
 */
-(NTStringVector*)getSubdomains;
/**
 * Sets the subdomains for {s} tag.
 * @param subdomains The list of subdomains to use.
 */
-(void)setSubdomains: (NTStringVector*)subdomains;
/**
 * Returns true/false based whether the TMS tiling scheme is used.
 * @return True if TMS tiling scheme is used. False if XYZ scheme is used.
 */
-(BOOL)isTMSScheme;
/**
 * Enables/disables the TMS tiling scheme. In TMS scheme y coordinate of the tile is flipped. The default is disabled.
 * @param tmsScheme True is TMS tiling scheme should be used. False is XYZ should be used.
 */
-(void)setTMSScheme: (BOOL)tmsScheme;
/**
 * Returns true/false based on whether the max-age header check is used.
 * If this is enabled, SDK will automatically refresh the tiles when tiles have expired.
 * @return True if max-age header check is used. False otherwise.
 */
-(BOOL)isMaxAgeHeaderCheck;
/**
 * Enables/disables the max-age header check.
 * If this is enabled, SDK will automatically refresh the tiles when tiles have expired. The default is disabled.
 * @param maxAgeCheck True if the check should be enabled, false otherwise.
 */
-(void)setMaxAgeHeaderCheck: (BOOL)maxAgeCheck;
/**
 * Returns the current set of HTTP headers used. Initially this set is empty and can be changed with setHTTPHeaders.
 * @return The current set of custom HTTP headers.
 */
-(NTStringMap*)getHTTPHeaders;
/**
 * Sets HTTP headers for all requests. Calling this method will invalidate the datasource and
 * all layers using this data source will be refreshed.
 * @param headers A map of HTTP headers that will be used in subsequent requests.
 */
-(void)setHTTPHeaders: (NTStringMap*)headers;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;
-(NTTileData*)loadTileSwigExplicitNTHTTPTileDataSource: (NTMapTile*)mapTile;
-(NSString*)buildTileURL: (NSString*)baseURL tile: (NTMapTile*)tile;
-(NSString*)buildTileURLSwigExplicitNTHTTPTileDataSource: (NSString*)baseURL tile: (NTMapTile*)tile;
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

