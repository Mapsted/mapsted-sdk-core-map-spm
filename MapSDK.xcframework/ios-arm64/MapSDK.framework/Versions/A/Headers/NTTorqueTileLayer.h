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
#import "NTVectorTileLayer.h"
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
#import "NTTorqueTileDecoder.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A vector tile layer for rendering time-based animated point clouds.
 */
__attribute__ ((visibility("default"))) @interface NTTorqueTileLayer : NTVectorTileLayer
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
+(NTTorqueTileLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new TorqueTileLayer object from a data source and decoder.
 * @param dataSource The data source from which this layer loads data.
 * @param decoder The tile decoder to use.
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource decoder: (NTTorqueTileDecoder*)decoder;
/**
 * Counts and returns the number of visible features (points) at the specified frame.
 * Note that this number depends on the view settings and may depend on the state of tiles. If not all tiles are loaded, the results could be off.
 * @param frameNr The frame number to use.
 * @return The number of visible feature at the specified frame. If the frame is missing, 0 is returned.
 */
-(int)countVisibleFeatures: (int)frameNr;
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

