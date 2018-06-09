/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaylistSkipHandler : NSObject <SVVideoSkipHandling> {
    <SVVideoQueueProviding> * _queueProvider;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
    <SVVideoVisiblePercentageManager> * _visiblePercentageManager;
    <SVVisibilityReporting> * _visiblityReporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;
@property (nonatomic, readonly) <SVVideoVisiblePercentageManager> *visiblePercentageManager;
@property (nonatomic, readonly) <SVVisibilityReporting> *visiblityReporter;

- (void).cxx_destruct;
- (long long)contentTransitionTypeForVideo:(id)arg1;
- (id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3 videoViewControllerProvider:(id)arg4;
- (id)queueProvider;
- (void)skipToVideo:(id)arg1 animated:(bool)arg2;
- (id)videoViewControllerProvider;
- (id)visiblePercentageManager;
- (id)visiblityReporter;

@end
