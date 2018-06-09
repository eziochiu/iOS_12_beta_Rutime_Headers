/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoControlsTimingManager : NSObject <SVVideoControlsTimingProviding> {
    <SVVideoSkipThresholdProviding> * _skipThresholdProvider;
    SVTimeline * _timeline;
    <SVVideoControlsTimingConfiguration> * _timingConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoSkipThresholdProviding> *skipThresholdProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) <SVVideoControlsTimingConfiguration> *timingConfiguration;

- (void).cxx_destruct;
- (double)autoAppearanceTimeIntervalForVideo:(id)arg1;
- (double)autoHideTimeIntervalForVideo:(id)arg1;
- (id)initWithControlTimingConfiguration:(id)arg1 skipThresholdProvider:(id)arg2 timeline:(id)arg3;
- (double)moreFromVisibilityTimeIntervalForVideo:(id)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id)arg1;
- (id)skipThresholdProvider;
- (id)timeline;
- (id)timingConfiguration;
- (double)upNextAppearanceTimeIntervalForVideo:(id)arg1;

@end
