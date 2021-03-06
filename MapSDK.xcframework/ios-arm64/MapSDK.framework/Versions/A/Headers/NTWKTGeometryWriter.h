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
#import "NTGeometry.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Generates Well Known Text (WKT) representation of the geometry.
 * Supports both 2D and 3D coordinate serialization.
 */
__attribute__ ((visibility("default"))) @interface NTWKTGeometryWriter : NSObject
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
 * Constructs a new WKTGeometryWriter objects with default settings.
 */
-(id)init;
/**
 * Returns the state of Z coordinate serialization.
 * @return True if Z coordinate is stored in WKT output, false otherwise. The default is false.
 */
-(BOOL)getZ;
/**
 * Sets the state of Z coordinate serialization.
 * @param z True when Z coordinate should be serialized, false otherwise.
 */
-(void)setZ: (BOOL)z;
/**
 * Creates a WKT string corresponding to the specified geometry.
 * @param geometry The geometry to write.
 * @return The corresponding WKT string.
 * @throws NSException If writing fails.
 */
-(NSString*)writeGeometry: (NTGeometry*)geometry;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

