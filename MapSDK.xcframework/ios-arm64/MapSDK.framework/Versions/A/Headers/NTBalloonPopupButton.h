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
#ifdef __cplusplus
}
#endif
#import "NTBalloonPopupButtonStyle.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A button that can be used to add interactivity to balloon popups.
 */
__attribute__ ((visibility("default"))) @interface NTBalloonPopupButton : NSObject
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
+(NTBalloonPopupButton*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a BalloonPopupButton object with the specified style and text.
 * @param style The style that defines what this button looks like.
 * @param text The text for this button.
 */
-(id)initWithStyle: (NTBalloonPopupButtonStyle*)style text: (NSString*)text;
/**
 * Returns the text of this button.
 * @return The text of this button.
 */
-(NSString*)getText;
/**
 * Returns the style of this button.
 * @return The style that defines what this button looks like.
 */
-(NTBalloonPopupButtonStyle*)getStyle;
/**
 * Returns the user-defined tag associated with the button.
 * @return The user-defined tag value. By default the tag is empty.
 */
-(NTVariant*)getTag;
/**
 * Sets the user-defined tag associated with the button.
 * @param tag The new user-defined tag value.
 */
-(void)setTag: (NTVariant*)tag;
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

