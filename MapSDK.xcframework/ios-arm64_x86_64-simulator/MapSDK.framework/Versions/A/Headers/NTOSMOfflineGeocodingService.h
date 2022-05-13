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
#import "NTGeocodingService.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTGeocodingRequest.h"
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
#ifdef __cplusplus
}
#endif
#import "NTProjection.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A geocoding service that uses custom geocoding database files.
 * Note: this class is experimental and may change or even be removed in future SDK versions.
 */
__attribute__ ((visibility("default"))) @interface NTOSMOfflineGeocodingService : NTGeocodingService
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
+(NTOSMOfflineGeocodingService*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new instance of the OSMOfflineGeocodingService given path to the geocoding database.
 * @param path The full path to the geocoding database file.
 * @throws NSException If the database file could not be opened or read.
 */
-(id)initWithPath: (NSString*)path;
-(BOOL)isAutocomplete;
-(BOOL)isAutocompleteSwigExplicitNTOSMOfflineGeocodingService;
-(void)setAutocomplete: (BOOL)autocomplete;
-(void)setAutocompleteSwigExplicitNTOSMOfflineGeocodingService: (BOOL)autocomplete;
-(NSString*)getLanguage;
-(NSString*)getLanguageSwigExplicitNTOSMOfflineGeocodingService;
-(void)setLanguage: (NSString*)lang;
-(void)setLanguageSwigExplicitNTOSMOfflineGeocodingService: (NSString*)lang;
-(int)getMaxResults;
-(int)getMaxResultsSwigExplicitNTOSMOfflineGeocodingService;
-(void)setMaxResults: (int)maxResults;
-(void)setMaxResultsSwigExplicitNTOSMOfflineGeocodingService: (int)maxResults;
-(NTGeocodingResultVector*)calculateAddresses: (NTGeocodingRequest*)request;
-(NTGeocodingResultVector*)calculateAddressesSwigExplicitNTOSMOfflineGeocodingService: (NTGeocodingRequest*)request;
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

