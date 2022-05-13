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
#import "NTLocalVectorDataSource.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVectorLayer.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVectorElement.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTClusterElementBuilder.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A vector layer that supports clustering point-type features.
 * A Pairwise centroid hierarchical clustering algorithm is used internally.
 */
__attribute__ ((visibility("default"))) @interface NTClusteredVectorLayer : NTVectorLayer
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
+(NTClusteredVectorLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new ClusteredVectorLayer instance from data source and a special callback.
 * @param dataSource The local data source that contains the elements for clustering.
 * @param clusterElementBuilder The callback for creating and customizing cluster elements.
 */
-(id)initWithDataSource: (NTLocalVectorDataSource*)dataSource clusterElementBuilder: (NTClusterElementBuilder*)clusterElementBuilder;
/**
 * Returns the current callback used for creating cluster elements.
 * @return The associated callback.
 */
-(NTClusterElementBuilder*)getClusterElementBuilder;
/**
 * Returns the current minimum distance between clusters (in device-independent pixels).
 * @return The current minimum clustering distance.
 */
-(float)getMinimumClusterDistance;
/**
 * Sets the minimum distance between clusters (in device-independent pixels).
 * @param px The new value in device-independent pixels. The default is 100.
 */
-(void)setMinimumClusterDistance: (float)px;
/**
 * Returns the maximum zoom level when clusters are shown. If zoom level is greater, then
 * clusters are replaced with individual elements. Default is 24.
 * @return The maximum clustering zoom level.
 */
-(float)getMaximumClusterZoom;
/**
 * Sets the maximum zoom level when clusters are shown. If zoom level is greater, then
 * clusters are replaced with individual elements.
 * @param maxZoom The new maximum clustering zoom level.
 */
-(void)setMaximumClusterZoom: (float)maxZoom;
/**
 * Returns the cluster animation flag value.
 * @return True if animation is enabled, false otherwise.
 */
-(BOOL)isAnimatedClusters;
/**
 * Enables or disables the animation of clusters. By default animations are enabled.
 * @param animated The animated flag.
 */
-(void)setAnimatedClusters: (BOOL)animated;
/**
 * Expands or shrinks the given cluster element. In expanded state,
 * all elements of the cluster are placed at specified distance from the cluster center.
 * @param clusterElement The cluster element to expand or shrink.
 * @param px The distance (in device-independent pixels) between cluster center and expanded elements. Use 0 to shrink already expanded cluster.
 * @return True if the element was found and expanded/shrunk. False otherwise.
 */
-(BOOL)expandCluster: (NTVectorElement*)clusterElement px: (float)px;
-(void)refresh;
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
