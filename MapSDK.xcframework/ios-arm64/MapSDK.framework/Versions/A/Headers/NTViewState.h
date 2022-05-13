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
#import "NTScreenPos.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTMapVec.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTOptions.h"
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
 * A class containing various view parameters for a view state.
 */
__attribute__ ((visibility("default"))) @interface NTViewState : NSObject
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
 * Returns the camera tilt angle.
 * @return The camera tilt angle in degrees.
 */
-(float)getTilt;
/**
 * Returns the camera zoom level.
 * @return The camera zoom level.
 */
-(float)getZoom;
/**
 * Returns the state of the camera changed flag.
 * @return True if camera has changed since the last frame.
 */
-(BOOL)isCameraChanged;
/**
 * Returns the camera rotation angle.
 * @return The camera rotation angle in degrees.
 */
-(float)getRotation;
/**
 * Returns the distance between the focus and the camera position, when the zoom level is set to 0.
 * This parameter depends on the screen size, DPI, tile draw size and field of view settings.
 * @return The distance between focus to camera position, when zoom level = 0.
 */
-(float)getZoom0Distance;
/**
 * Returns the width of the map screen.
 * @return The map screen width.
 */
-(int)getWidth;
/**
 * Returns the height of the map screen.
 * @return The map screen height.
 */
-(int)getHeight;
/**
 * Returns the aspect ratio of the map screen. Equal to width / height.
 * @return The aspect ratio of the map screen.
 */
-(float)getAspectRatio;
/**
 * Returns the near plane distance.
 * @return The new plane distance.
 */
-(float)getNear;
/**
 * Returns the far plane distance.
 * @return The far plane distance.
 */
-(float)getFar;
/**
 * Returns the vertical field of view angle.
 * @return The vertical field of view angle in degrees.
 */
-(int)getFOVY;
/**
 * Returns a value that is used for converting display independent pixels (dp) to pixels (px).
 * This values depends on the screen density.
 * @return The dp to px value.
 */
-(float)getDPToPX;
/**
 * Returns the dots per inch parameter of the screen.
 * @return The screen DPI parameter.
 */
-(float)getDPI;
/**
 * Returns the conversion ratio between internal map units and screen pixels. This parameter is dependent
 * on the zoom level and other screen parameters.
 * @return The conversion ratio between internal map units and screen pixels.
 */
-(float)getUnitToPXCoef;
/**
 * Returns the conversion ratio between internal map units and screen density independent pixels (DP or DIP). 
 * This parameter is dependent on the zoom level, DPI and other screen parameters.
 * @return The conversion ratio between internal map units and screen density independent pixels.
 */
-(float)getUnitToDPCoef;
/**
 * Returns the screen width.
 * @return The current screen width.
 */
-(int)getScreenWidth;
/**
 * Returns the screen height.
 * @return The current screen height.
 */
-(int)getScreenHeight;
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

