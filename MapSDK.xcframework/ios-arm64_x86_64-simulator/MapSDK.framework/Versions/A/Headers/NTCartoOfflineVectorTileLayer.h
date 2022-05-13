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
#import "NTCartoVectorTileLayer.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTCartoPackageManager.h"
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

/**
 * Specialized offline vector tile layer that uses CartoPackageManager for offline maps service.
 * This layer is intended as a 'shortcut' to make using Carto offline service and
 * vector tiles as simple as possible.
 */
__attribute__ ((visibility("default"))) @interface NTCartoOfflineVectorTileLayer : NTCartoVectorTileLayer
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
+(NTCartoOfflineVectorTileLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a CartoOfflineVectorTileLayer object from a specificed base map style.
 * @param packageManager The package manager instance that handles offline maps.
 * @param style The style to use for the layer.
 */
-(id)initWithPackageManager: (NTCartoPackageManager*)packageManager style: (enum NTCartoBaseMapStyle)style;
/**
 * Constructs a CartoOfflineVectorTileLayer object from a source name and style asset package.
 * Style asset package defines visual style of the map and must be compatible with the source.
 * @param packageManager The package manager instance that handles offline maps.
 * @param styleAssetPackage The style asset package (usually a zipped file or an asset)
 */
-(id)initWithPackageManager: (NTCartoPackageManager*)packageManager styleAssetPackage: (NTAssetPackage*)styleAssetPackage;
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

