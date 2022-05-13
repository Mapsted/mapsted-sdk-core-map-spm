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
 * MBTiles tile schemes.
 */
typedef NS_ENUM(NSInteger, NTMBTilesScheme) {
/**
 * The default scheme. Vertical coordinate is not flipped.
 */
  NT_MBTILES_SCHEME_TMS,
/**
 * Alternative to TMS scheme. Vertical coordinate is flipped.
 */
  NT_MBTILES_SCHEME_XYZ
};


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
 * A tile data source that loads tiles from a local Sqlite database.
 * The database must contain table "tiles" with the following fields:
 * "zoom_level" (tile zoom level), "tile_column" (tile x coordinate),
 * "tile_row" (tile y coordinate), "tile_data" (compressed tile image).
 */
__attribute__ ((visibility("default"))) @interface NTMBTilesTileDataSource : NTTileDataSource
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
+(NTMBTilesTileDataSource*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a MBTilesTileDataSource object. TMS tile scheme is used,
 * Min and max zoom levels are automatically detected.
 * @param path The path to the local Sqlite database file.
 * @throws NSException If the the file could not be opened.
 */
-(id)initWithPath: (NSString*)path;
/**
 * Constructs a MBTilesTileDataSource object. TMS tile scheme is used.
 * @param minZoom The minimum zoom level supported by this data source.
 * @param maxZoom The maximum zoom level supported by this data source.
 * @param path The path to the local Sqlite database file.
 * @throws NSException If the the file could not be opened.
 */
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom path: (NSString*)path;
/**
 * Constructs a MBTilesTileDataSource object with specified tile scheme.
 * @param minZoom The minimum zoom level supported by this data source.
 * @param maxZoom The maximum zoom level supported by this data source.
 * @param path The path to the local Sqlite database file.
 * @param scheme Tile scheme to use.
 * @throws NSException If the the file could not be opened.
 */
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom path: (NSString*)path scheme: (enum NTMBTilesScheme)scheme;
/**
 * Get data source metadata information.
 * Possible parameters can be found in MBTiles specification.
 * @return Map containing meta data information (parameter names mapped to parameter values).
 */
-(NTStringMap*)getMetaData;
-(int)getMinZoom;
-(int)getMinZoomSwigExplicitNTMBTilesTileDataSource;
-(int)getMaxZoom;
-(int)getMaxZoomSwigExplicitNTMBTilesTileDataSource;
-(NTMapBounds*)getDataExtent;
-(NTMapBounds*)getDataExtentSwigExplicitNTMBTilesTileDataSource;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;
-(NTTileData*)loadTileSwigExplicitNTMBTilesTileDataSource: (NTMapTile*)mapTile;
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

