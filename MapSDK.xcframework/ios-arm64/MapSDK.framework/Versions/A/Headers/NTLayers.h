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
#import "NTLayer.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTLayerVector;

/**
 * Container for all raster and vector layers of the map view.
 * 
 * The order in which layers are added is important for vector elements like Points, Lines
 * and Polygons. For these elements the layer ordering defines their draw order.
 * Other elements like NMLModels and Polygon3Ds are z ordered and are drawn using the depth buffer.
 * For Billboard elements like Markers and Labels, the layer ordering is unimportant, because
 * they will be sorted from back to front and drawn in that order on top of all other vector elements.
 */
__attribute__ ((visibility("default"))) @interface NTLayers : NSObject
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
 * Checks if this object is equal to the specified object.
 * @param object The reference object.
 * @return True when objects are equal, false otherwise.
 */
-(BOOL)isEqual:(id)object;

/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(NSUInteger)hash;

/**
 * Returns the current layer count.
 * @return The layer count.
 */
-(int)count;
/**
 * Clears the layer stack.
 */
-(void)clear;
/**
 * Returns the layer at the specified index.
 * @param index The layer index to return. Must be between 0 and count (exclusive).
 * @return The layer at the specified index.
 * @throws NSException If the index is out of range.
 */
-(NTLayer*)get: (int)index;
/**
 * Returns the list of all layers. The layers are in the order in which they were added.
 * @return A vector of all previously added layers.
 */
-(NTLayerVector*)getAll;
/**
 * Replaces the layer at the specified index.
 * @param index The layer index to replace. Must be between 0 and count (exclusive).
 * @param layer The new layer.
 * @throws NSException If the index is out of range.
 */
-(void)set: (int)index layer: (NTLayer*)layer;
/**
 * Replaces all the layers with the given layer list.
 * @param layers The new list of layers.
 */
-(void)setAll: (NTLayerVector*)layers;
/**
 * Inserts a new layer at the specified position.
 * All previous layers starting from this index will be moved to the next position.
 * @param index The layer index. Must be between 0 and count (inclusive).
 * @param layer The new layer.
 * @throws NSException If the index is out of range.
 */
-(void)insert: (int)index layer: (NTLayer*)layer;
/**
 * Adds a new layer to the layer stack. The new layer will be the last (and topmost) layer.
 * @param layer The layer to be added.
 */
-(void)add: (NTLayer*)layer;
/**
 * Adds a a list of layers to the layer stack. The new layers will be the last (and topmost) layers.
 * @param layers The layer list to be added.
 */
-(void)addAll: (NTLayerVector*)layers;
/**
 * Removes a layer from the layer stack.
 * @param layer The layer to be removed.
 * @return True if the layer was removed. False otherwise (layer was not found).
 */
-(BOOL)remove: (NTLayer*)layer;
/**
 * Removes a list of layers from the layer stack.
 * @param layers The list of layers to be removed.
 * @return True if all layer were removed. False otherwise (some layers were not found).
 */
-(BOOL)removeAll: (NTLayerVector*)layers;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

