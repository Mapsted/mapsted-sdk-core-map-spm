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
 * A tile data source that merges two MBVT/protobuf data sources into one.
 * It is assumed that the layer ids from the two sources are distinct.
 */
__attribute__ ((visibility("default"))) @interface NTMergedMBVTTileDataSource : NTTileDataSource
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
+(NTMergedMBVTTileDataSource*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new MergedMBVTTileDataSource tile data source object.
 * @param dataSource1 First data source to be merged
 * @param dataSource2 Second data source to be merged
 */
-(id)initWithDataSource1: (NTTileDataSource*)dataSource1 dataSource2: (NTTileDataSource*)dataSource2;
-(int)getMinZoom;
-(int)getMinZoomSwigExplicitNTMergedMBVTTileDataSource;
-(int)getMaxZoom;
-(int)getMaxZoomSwigExplicitNTMergedMBVTTileDataSource;
-(NTMapBounds*)getDataExtent;
-(NTMapBounds*)getDataExtentSwigExplicitNTMergedMBVTTileDataSource;
-(NTTileData*)loadTile: (NTMapTile*)tile;
-(NTTileData*)loadTileSwigExplicitNTMergedMBVTTileDataSource: (NTMapTile*)tile;
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

