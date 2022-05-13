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
#import "NTMapPos.h"
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
#import "NTLayer.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTClickInfo.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A container class that provides information about a click performed on
 * an UTF grid.
 */
__attribute__ ((visibility("default"))) @interface NTUTFGridClickInfo : NSObject
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
 * Returns the click type.
 * @return The type of the click performed.
 */
-(enum NTClickType)getClickType;
/**
 * Returns the click info.
 * @return The attributes of the click.
 */
-(NTClickInfo*)getClickInfo;
/**
 * Returns the click position.
 * @return The click position in the coordinate system of the data source.
 */
-(NTMapPos*)getClickPos;
/**
 * Returns the info tag of the clicked element.
 * @return The info tag of the clicked element.
 */
-(NTVariant*)getElementInfo;
/**
 * Returns the clicked layer.
 * @return The clicked layer.
 */
-(NTLayer*)getLayer;
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

