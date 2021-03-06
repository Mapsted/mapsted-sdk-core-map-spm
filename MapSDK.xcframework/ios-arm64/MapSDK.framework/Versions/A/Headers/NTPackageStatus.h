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

/**
 * The current action that describes the operation being performed with the package.
 */
typedef NS_ENUM(NSInteger, NTPackageAction) {
/**
 * Package is ready.
 */
  NT_PACKAGE_ACTION_READY = 0,
/**
 * Package is waiting in the task queue.
 */
  NT_PACKAGE_ACTION_WAITING = 1,
/**
 * Package is being downloaded.
 */
  NT_PACKAGE_ACTION_DOWNLOADING = 2,
/**
 * Package data is being copied.
 */
  NT_PACKAGE_ACTION_COPYING = 3,
/**
 * Package is being removed.
 */
  NT_PACKAGE_ACTION_REMOVING = 4
};

/**
 * The status of the map package. This includes information whether the package is ready, queued for processing, downloading, etc.
 * Also it contains information if the package processing is paused and about the progress.
 */
__attribute__ ((visibility("default"))) @interface NTPackageStatus : NSObject
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
 * Constructs a new status.
 * @param currentAction The current action being performed with the package.
 * @param paused True if the action is paused.
 * @param progress The progress of the operation (in the range 0..100)
 */
-(id)initWithCurrentAction: (enum NTPackageAction)currentAction paused: (BOOL)paused progress: (float)progress;
/**
 * Returns the current action being performed.
 * @return The current action being performed.
 */
-(enum NTPackageAction)getCurrentAction;
/**
 * Returns the paused state of the action.
 * @return True when the action is paused, false if the action is active.
 */
-(BOOL)isPaused;
/**
 * Returns the progress of the action.
 * @return The progress of the action (in the range 0..100)
 */
-(float)getProgress;
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

