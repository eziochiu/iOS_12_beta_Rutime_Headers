/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEiOSCommonDelegate : NSObject

+ (id)activeCoreProjectViewController;
+ (bool)allowSaving;
+ (id)currentProject;
+ (float)duckingAmount;
+ (unsigned long long)exportFrameRateMode;
+ (bool)forceTeardownDisplayOnProjectChange;
+ (bool)fullScreenPlaybackOnExternalDisplay;
+ (bool)furtherConstrainVideoScale;
+ (bool)ignoreReadOnly;
+ (id)mainBundle;
+ (void)notifyCPVCProjectChanged;
+ (void)nukeCaches;
+ (unsigned long long)playbackFrameRateMode;
+ (long long)playbackPixelCount;
+ (void)setCurrentProject:(id)arg1;
+ (void)setDelegateSubclass:(Class)arg1;
+ (void)setFullScreenPlaybackOnExternalDisplay:(bool)arg1;
+ (void)setVideoScale:(float)arg1;
+ (bool)shouldPlaySlowMoWhenPreviewing;
+ (bool)updateProjectAndCachesOnPhotosLibraryChange;
+ (float)videoScale;

@end