/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSScreenLockMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (bool)isScreenLocked;

@end
