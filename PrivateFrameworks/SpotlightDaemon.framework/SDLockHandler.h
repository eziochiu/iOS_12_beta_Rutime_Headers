/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDLockHandler : NSObject

+ (void)_deviceLockSetup;
+ (bool)deviceFirstUnlockedInMKB;
+ (bool)deviceFirstUnlockedInSB;
+ (bool)deviceUnlocked;
+ (void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(bool)arg2 indexEnabled:(bool)arg3 delegate:(id)arg4;
+ (bool)unlockedSinceBoot;

@end
