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
 * An online tile data source that connects to MapTiler Cloud tile server.
 * This data source should be used with vector tiles,
 * though by customizing service URL could be used with raster tiles also.
 * Be sure to read the Terms and Conditions of your MapTiler service provider to see if the
 * service is available for your application.
 * Note: this class is experimental and may change or even be removed in future SDK versions.
 */
__attribute__ ((visibility("default"))) @interface NTMapTilerOnlineTileDataSource : NTTileDataSource
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
+(NTMapTilerOnlineTileDataSource*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a MapTilerOnlineTileDataSource object.
 * @param key The access key (access token) to use registered with MapTiler.
 */
-(id)initWithKey: (NSString*)key;
/**
 * Returns the custom backend service URL.
 * @return The custom backend service URL. If this is not defined, an empty string is returned.
 */
-(NSString*)getCustomServiceURL;
/**
 * Sets the custom backend service URL. 
 * The custom URL may contain tag "{key}" which will be substituted with the set access key.
 * @param serviceURL The custom backend service URL to use. If this is empty, then the default service is used.
 */
-(void)setCustomServiceURL: (NSString*)serviceURL;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;
-(NTTileData*)loadTileSwigExplicitNTMapTilerOnlineTileDataSource: (NTMapTile*)mapTile;
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

