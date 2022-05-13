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
#import "NTMapBounds.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVariant.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTGeometry.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTStringVariantMap;

/**
 * A base class for all vector elements (points, lines, texts, models, etc).
 */
__attribute__ ((visibility("default"))) @interface NTVectorElement : NSObject
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
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 * @param cPtr The native pointer of the instance.
 * @param cMemoryOwn The ownership flag.
 * @return The new instance.
 */
/** @internal:nodoc: */
+(NTVectorElement*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;


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
 * Returns the bounds of this vector element.
 * @return The bounds of this vector element.
 */
-(NTMapBounds*)getBounds;
/**
 * Returns the geometry object that defines the location of this vector element.
 * @return The geometry object of this vector element.
 */
-(NTGeometry*)getGeometry;
/**
 * Returns the internal id of this vector element.
 * @return The internal id of this vector element.
 */
-(long long)getId;
/**
 * Sets the internal id for this vector element. The id is used for internal caching, and
 * should not be changed by the user. User id can added to meta data as a key-value pair.
 * @param id The new internal id for this vector element.
 */
-(void)setId: (long long)arg1;
/**
 * Returns a copy of the vector element meta data map. The changes you make to this map are NOT reflected in the actual meta data of the element.
 * @return A copy of the vector element meta data map.
 */
-(NTStringVariantMap*)getMetaData;
/**
 * Sets a new meta data map for the vector element. Old meta data values will be lost.
 * @param metaData The new meta data map for this vector element.
 */
-(void)setMetaData: (NTStringVariantMap*)metaData;
/**
 * Returns true if the specified key exists in the vector element meta data map.
 * @param key The key to check.
 * @return True if the vector element meta data element exists.
 */
-(BOOL)containsMetaDataKey: (NSString*)key;
/**
 * Returns a meta data element corresponding to the key. If no value is found null variant is returned.
 * @param key The key to use.
 * @return The value corresponding to the key from the meta data map. If the key does not exists, empty variant is returned.
 */
-(NTVariant*)getMetaDataElement: (NSString*)key;
/**
 * Adds a new key-value pair to the meta data map. If the key already exists in the map,
 * it's value will be replaced by the new value.
 * @param key The new key.
 * @param element The new value.
 */
-(void)setMetaDataElement: (NSString*)key element: (NTVariant*)element;
/**
 * Returns the state of the visibility flag of this vector element.
 * @return True if this vector element is visible.
 */
-(BOOL)isVisible;
/**
 * Sets the state of the visibility flag for this vector element. If set to false the element will not be
 * drawn.
 * @param visible The new state of the visibility flag for the vector element.
 */
-(void)setVisible: (BOOL)visible;
/**
 * Notifies this vector element's datasource about the change in this element.
 * The data source may then notify the layer to update the view.
 */
-(void)notifyElementChanged;
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
#import "NTMapBounds.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTVariant.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTGeometry.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTStringVariantMap;

__attribute__ ((visibility("default"))) @interface NTVectorElementVector : NSObject
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
-(id)init;
-(unsigned int)size;
-(unsigned int)capacity;
-(void)reserve: (unsigned int)n;
-(BOOL)isEmpty;
-(void)clear;
-(void)add: (NTVectorElement*)x;
-(NTVectorElement*)get: (int)i;
-(void)set: (int)i val: (NTVectorElement*)val;
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
