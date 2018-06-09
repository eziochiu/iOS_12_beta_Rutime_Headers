/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPowerAssertion : NSObject

+ (void)_doProtected:(id /* block */)arg1;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (id)powerAssertionStatus;
+ (void)setHasEnoughPower:(bool)arg1;

@end
