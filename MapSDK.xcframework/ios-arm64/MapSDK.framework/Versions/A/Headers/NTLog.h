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
#import "NTLogEventListener.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A diagnostic log for various SDK events.
 */
__attribute__ ((visibility("default"))) @interface NTLog : NSObject
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
 * Returns the state of error logging.
 * @return True if errors are shown in the log.
 */
+(BOOL)isShowError;
/**
 * Enables or disables writing error messages to the log.
 * @param showError If true, then error messages will be written to the log.
 */
+(void)setShowError: (BOOL)showError;
/**
 * Returns the state of warning logging.
 * @return True if warnings are shown in the log.
 */
+(BOOL)isShowWarn;
/**
 * Enables or disables writing warning messages to the log.
 * @param showWarn If true, then warning messages will be written to the log.
 */
+(void)setShowWarn: (BOOL)showWarn;
/**
 * Returns the state of general info logging.
 * @return True if general info is shown in the log.
 */
+(BOOL)isShowInfo;
/**
 * Enables or disables writing info messages to the log.
 * @param showInfo If true, then info messages will be written to the log.
 */
+(void)setShowInfo: (BOOL)showInfo;
/**
 * Returns the state of internal debug message logging.
 * @return True if debug messages are shown in the log.
 */
+(BOOL)isShowDebug;
/**
 * Enables or disables writing internal debug messages to the log.
 * @param showDebug If true, then debug messages will be written to the log.
 */
+(void)setShowDebug: (BOOL)showDebug;
/**
 * Returns the tag for the log events.
 * @return The current tag for the log events.
 */
+(NSString*)getTag;
/**
 * Sets the tag for the log events. The tag will be visible in the log and log messages can be filtered by the tag.
 * @param tag The tag to use in the log events.
 */
+(void)setTag: (NSString*)tag;
/**
 * Returns the current log listener.
 * @return The current log event listener.
 */
+(NTLogEventListener*)getLogEventListener;
/**
 * Sets the log listener that can be used to intercept log messages.
 * @param listener The log event listener.
 */
+(void)setLogEventListener: (NTLogEventListener*)listener;
/**
 * Logs specified fatal error message and terminates.
 * @param message The message to log.
 */
+(void)fatal: (NSString *)message;
/**
 * Logs specified error message (if error logging is enabled).
 * @param message The message to log.
 */
+(void)error: (NSString *)message;
/**
 * Logs specified warning message (if warning logging is enabled).
 * @param message The message to log.
 */
+(void)warn: (NSString *)message;
/**
 * Logs specified info message (if info logging is enabled).
 * @param message The message to log.
 */
+(void)info: (NSString *)message;
/**
 * Logs specified debug message (if debug logging is enabled).
 * @param message The message to log.
 */
+(void)debug: (NSString *)message;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

