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
 * Vector tile rendering order.
 */
typedef NS_ENUM(NSInteger, NTVectorTileRenderOrder) {
/**
 * No rendering, elements are hidden.
 */
  NT_VECTOR_TILE_RENDER_ORDER_HIDDEN = -1,
/**
 * Elements are rendered together with the same layer elements.
 * Layers that are on top of the layers are rendered on top this layer.
 */
  NT_VECTOR_TILE_RENDER_ORDER_LAYER = 0,
/**
 * Elements are rendered on top of all normal layers.
 */
  NT_VECTOR_TILE_RENDER_ORDER_LAST = 1
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
#import "NTTileData.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTTileLayer.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVectorTileEventListener.h"
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
 * A tile layer where each tile is a bitmap. Should be used together with corresponding data source.
 */
__attribute__ ((visibility("default"))) @interface NTVectorTileLayer : NTTileLayer
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
+(NTVectorTileLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a VectorTileLayer object from a data source and tile decoder.
 * @param dataSource The data source from which this layer loads data.
 * @param decoder The tile decoder that decoder loaded tiles and applies styles.
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource decoder: (NTVectorTileDecoder*)decoder;
/**
 * Returns the tile decoder assigned to this layer.
 * @return The tile decoder assigned to this layer.
 */
-(NTVectorTileDecoder*)getTileDecoder;
/**
 * Returns the tile cache capacity.
 * @return The tile cache capacity in bytes.
 */
-(unsigned long)getTileCacheCapacity;
/**
 * Sets the vector tile cache capacity. Tile cache is the primary storage for vector data,
 * all tiles contained within the cache are stored as uncompressed vertex buffers and can immediately be
 * drawn to the screen. Setting the cache size too small may cause artifacts, such as disappearing tiles.
 * The more tiles are visible on the screen, the larger this cache should be. 
 * The default is 10MB, which should be enough for most use cases with preloading enabled. If preloading is
 * disabled, the cache size should be reduced by the user to conserve memory.
 * @param capacityInBytes The new tile bitmap cache capacity in bytes.
 */
-(void)setTileCacheCapacity: (unsigned long)capacityInBytes;
/**
 * Returns the current display order of the labels.
 * @return The display order of the labels. Default is VECTOR_TILE_RENDER_ORDER_LAYER.
 */
-(enum NTVectorTileRenderOrder)getLabelRenderOrder;
/**
 * Sets the current display order of the labels.
 * @param renderOrder The new display order of the labels.
 */
-(void)setLabelRenderOrder: (enum NTVectorTileRenderOrder)renderOrder;
/**
 * Returns the current display order of the buildings.
 * @return The display order of the buildigns. Default is VECTOR_TILE_RENDER_ORDER_LAYER.
 */
-(enum NTVectorTileRenderOrder)getBuildingRenderOrder;
/**
 * Sets the current display order of the buildings.
 * @param renderOrder The new display order of the labels.
 */
-(void)setBuildingRenderOrder: (enum NTVectorTileRenderOrder)renderOrder;
/**
 * Returns the click radius of vector tile features.
 * Units are screen density independent pixels (DP or DIP).
 * @return The click radius of vector tile features.
 */
-(float)getClickRadius;
/**
 * Sets the click radius of vector tile features.
 * The click radius is applied as an extra buffer to the vector tile features to make clicking on small features less sensitive.
 * Units are screen density independent pixels (DP or DIP).
 * @param radius The new click radius of vector tile features. The default value is 4.
 */
-(void)setClickRadius: (float)radius;
/**
 * Returns the current relative layer blending speed.
 * @return The current relative layer blending speed. Default is 1.0.
 */
-(float)getLayerBlendingSpeed;
/**
 * Sets the relative layer blending speed.
 * @param speed The new relative speed value. Default is 1.0. Use zero or negative values to disable blending.
 */
-(void)setLayerBlendingSpeed: (float)speed;
/**
 * Returns the current relative label blending speed.
 * @return The current relative label blending speed. Default is 1.0.
 */
-(float)getLabelBlendingSpeed;
/**
 * Sets the relative label blending speed.
 * @param speed The new relative speed value. Default is 1.0. Use zero or negative values to disable blending.
 */
-(void)setLabelBlendingSpeed: (float)speed;
/**
 * Returns the renderer layer filter. The filter is given as ECMA regular expression that is applied to qualified layer names.
 * @return The renderer layer filter. Default is empty string, which means no filter is used.
 */
-(NSString*)getRendererLayerFilter;
/**
 * Sets the renderer layer filter. The filter is given as ECMA regular expression that is applied to qualified layer names.
 * If non-empty, then only layers that pass the filter are rendered.
 * @param filter The new renderer layer filter.
 * @throws NSException If the filter expression is not valid.
 */
-(void)setRendererLayerFilter: (NSString*)filter;
/**
 * Returns the click handler layer filter. The filter is given as ECMA regular expression that is applied to qualified layer names.
 * @return The click handler layer filter. Default is empty string, which means no filter is used.
 */
-(NSString*)getClickHandlerLayerFilter;
/**
 * Sets the click handler layer filter. The filter is given as ECMA regular expression that is applied to qualified layer names.
 * If non-empty, then only layers that pass the filter are tested when handling clicks.
 * @param filter The new click handler layer filter.
 * @throws NSException If the filter expression is not valid.
 */
-(void)setClickHandlerLayerFilter: (NSString*)filter;
/**
 * Returns the vector tile event listener.
 * @return The vector tile event listener.
 */
-(NTVectorTileEventListener*)getVectorTileEventListener;
/**
 * Sets the vector tile event listener.
 * @param eventListener The vector tile event listener.
 */
-(void)setVectorTileEventListener: (NTVectorTileEventListener*)eventListener;
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

