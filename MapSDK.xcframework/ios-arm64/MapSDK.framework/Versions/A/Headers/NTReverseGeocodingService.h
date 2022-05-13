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
#import "NTReverseGeocodingRequest.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTGeocodingResult.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * An abstract base class for reverse geocoding services.
 */
__attribute__ ((visibility("default"))) @interface NTReverseGeocodingService : NSObject
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
+(NTReverseGeocodingService*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Returns the language of the expected results.
 * @return The language of the expected results. As ISO 639-1 code or empty string.
 */
-(NSString*)getLanguage;
/**
 * Sets the language of the expected results.
 * @param lang The language to use as ISO 639-1 code. Empty string can be used for default language.
 */
-(void)setLanguage: (NSString*)lang;
/**
 * Calculates matching addresses from the specified reverse geocoding request.
 * @param request The reverse geocoding request to use.
 * @return The list of matching geocoding results, sorted by descending ranks.
 * @throws NSException If IO error occured during the calculation.
 */
-(NTGeocodingResultVector*)calculateAddresses: (NTReverseGeocodingRequest*)request;
/**
 * The default constructor.
 */
-(id)init;
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
