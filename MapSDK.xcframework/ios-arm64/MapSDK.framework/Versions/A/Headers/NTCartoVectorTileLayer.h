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
 * Built-in Carto basemap styles.
 */
typedef NS_ENUM(NSInteger, NTCartoBaseMapStyle) {
/**
 * The Positron style. Replacement for older 'grey' style.
 */
  NT_CARTO_BASEMAP_STYLE_POSITRON,
/**
 * The Darkmatter style. Replacement for older 'dark' style.
 */
  NT_CARTO_BASEMAP_STYLE_DARKMATTER,
/**
 * The Voyager style. Replacement for older 'bright' style.
 */
  NT_CARTO_BASEMAP_STYLE_VOYAGER
};

/**
 * Supported POI rendering styles for Carto basemaps.
 */
typedef NS_ENUM(NSInteger, NTCartoBaseMapPOIRenderMode) {
/**
 * No basemap POIs.
 */
  NT_CARTO_BASEMAP_POI_RENDER_MODE_NONE,
/**
 * Render basemap POIs as icons only.
 */
  NT_CARTO_BASEMAP_POI_RENDER_MODE_ICON,
/**
 * Render basemap POIs as icons with text.
 */
  NT_CARTO_BASEMAP_POI_RENDER_MODE_FULL
};

/**
 * Supported building rendering styles for Carto basemaps.
 */
typedef NS_ENUM(NSInteger, NTCartoBaseMapBuildingRenderMode) {
/**
 * No basemap buildings.
 */
  NT_CARTO_BASEMAP_BUILDING_RENDER_MODE_NONE,
/**
 * 2D basemap buildings, displayed as polygons.
 */
  NT_CARTO_BASEMAP_BUILDING_RENDER_MODE_2D,
/**
 * 3D basemap buildings, displayed as 3D polygons.
 */
  NT_CARTO_BASEMAP_BUILDING_RENDER_MODE_3D
};


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
#import "NTVectorTileLayer.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTAssetPackage.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVectorTileDecoder.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Specialized vector tile layer that can use built-in vector tile styles.
 */
__attribute__ ((visibility("default"))) @interface NTCartoVectorTileLayer : NTVectorTileLayer
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
+(NTCartoVectorTileLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a CartoVectorTileLayer object from a specificed base map style.
 * @param dataSource The data source from which this layer loads data.
 * @param style The style to use for the layer.
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource style: (enum NTCartoBaseMapStyle)style;
/**
 * Constructs a CartoVectorTileLayer object from a source name and a style asset package.
 * Style asset package defines visual style of the map and must be compatible with the source.
 * @param dataSource The data source from which this layer loads data.
 * @param styleAssetPackage The style asset package (usually a zipped file or an asset)
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource styleAssetPackage: (NTAssetPackage*)styleAssetPackage;
/**
 * Constructs a CartoVectorTileLayer object from a source name and a style asset package.
 * Style asset package defines visual style of the map and must be compatible with the source.
 * @param dataSource The data source from which this layer loads data.
 * @param styleAssetPackage The style asset package (usually a zipped file or an asset)
 * @param styleName The style to use from the asset package.
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource styleAssetPackage: (NTAssetPackage*)styleAssetPackage styleName: (NSString*)styleName;
/**
 * Returns the current language used for the layer.
 * @return The current language. If the returned string is empty, then 'local' languages are used.
 */
-(NSString*)getLanguage;
/**
 * Sets the current map language.
 * @param lang The new language to use. The default is local language (empty string).
 */
-(void)setLanguage: (NSString*)lang;
/**
 * Returns the current fallback language used for the layer. Fallback language is used when a primary language name is not available.
 * @return The current fallback language. If the returned string is empty, then 'local' languages are used.
 */
-(NSString*)getFallbackLanguage;
/**
 * Sets the current fallback map language. Fallback language is used when a primary language name is not available.
 * @param lang The new fallback language to use. The default is local language (empty string).
 */
-(void)setFallbackLanguage: (NSString*)lang;
/**
 * Returns the current render mode for Point-Of-Interest icons.
 * @return The current render mode for for Point-Of-Interest icons.
 */
-(enum NTCartoBaseMapPOIRenderMode)getPOIRenderMode;
/**
 * Sets the current render mode for Point-Of-Interest icons.
 * @param renderMode The new render mode for Point-Of-Interest icons.
 */
-(void)setPOIRenderMode: (enum NTCartoBaseMapPOIRenderMode)renderMode;
/**
 * Returns the current render mode for buildings.
 * @return The current render mode for buildings.
 */
-(enum NTCartoBaseMapBuildingRenderMode)getBuildingRenderMode;
/**
 * Sets the current render mode for buildings.
 * @param renderMode The new render mode for buildings.
 */
-(void)setBuildingRenderMode: (enum NTCartoBaseMapBuildingRenderMode)renderMode;
/**
 * Creates a new tile decoder from the specified base map style.
 * @param style The style to use for the decoder.
 * @return The new vector tile decoder configured for the style.
 */
+(NTVectorTileDecoder*)createTileDecoderFromStyle: (enum NTCartoBaseMapStyle)style;
/**
 * Creates a new tile decoder from the specified asset package.
 * @param styleAssetPackage The style asset package (usually a zipped file or an asset)
 * @return The new vector tile decoder configured for the style.
 */
+(NTVectorTileDecoder*)createTileDecoderFromAssetPackage: (NTAssetPackage*)styleAssetPackage;
/**
 * Creates a new tile decoder from the specified asset package.
 * @param styleAssetPackage The style asset package (usually a zipped file or an asset)
 * @param styleName The name of the style to use.
 * @return The new vector tile decoder configured for the style.
 */
+(NTVectorTileDecoder*)createTileDecoder: (NTAssetPackage*)styleAssetPackage styleName: (NSString*)styleName;
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

