/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoSkipHandler : NSObject <SVVideoSkipHandling> {
    <SVVideoQueueProviding> * _queueProvider;
    <SVVideoVisiblePercentageManager> * _visiblePercentageManager;
    <SVVisibilityReporting> * _visiblityReporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoVisiblePercentageManager> *visiblePercentageManager;
@property (nonatomic, readonly) <SVVisibilityReporting> *visiblityReporter;

- (void).cxx_destruct;
- (id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3;
- (id)queueProvider;
- (void)skipToVideo:(id)arg1 animated:(bool)arg2;
- (id)visiblePercentageManager;
- (id)visiblityReporter;

@end
