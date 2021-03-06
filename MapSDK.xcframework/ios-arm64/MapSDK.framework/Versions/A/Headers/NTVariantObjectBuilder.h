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
#import "NTVariant.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A helper class for building variant objects.
 */
__attribute__ ((visibility("default"))) @interface NTVariantObjectBuilder : NSObject
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
 * A default constructor.
 */
-(id)init;
/**
 * Clears the object.
 */
-(void)clear;
/**
 * Sets a specified string value.
 * @param key The key to set.
 * @param str The string value.
 */
-(void)setString: (NSString*)key str: (NSString*)str;
/**
 * Sets a specified boolean value.
 * @param key The key to set.
 * @param val The boolean value.
 */
-(void)setBool: (NSString*)key val: (BOOL)val;
/**
 * Sets a specified long integer value.
 * @param key The key to set.
 * @param val The integer value.
 */
-(void)setLong: (NSString*)key val: (long long)val;
/**
 * Sets a specified double precision floating point value.
 * @param key The key to set.
 * @param val The floating point value.
 */
-(void)setDouble: (NSString*)key val: (double)val;
/**
 * Sets a specified variant value.
 * @param key The key to set.
 * @param var The variant to add.
 */
-(void)setVariant: (NSString*)key var: (NTVariant*)var;
/**
 * Builds a new object variant from the added elements.
 * @return The corresponding variant object.
 */
-(NTVariant*)buildVariant;
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

