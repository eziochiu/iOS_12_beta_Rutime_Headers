/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoImpressionTrackerManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoEventTrackerProviding> * _eventTrackerProvider;
    <SVVideoImpressionTracking> * _impressionTracker;
    <SVVideoImpressionTrackerFactory> * _impressionTrackerFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoEventTrackerProviding> *eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoImpressionTracking> *impressionTracker;
@property (nonatomic, readonly) <SVVideoImpressionTrackerFactory> *impressionTrackerFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventTrackerProvider;
- (id)impressionTracker;
- (id)impressionTrackerFactory;
- (id)initWithImpressionTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2;
- (void)setImpressionTracker:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
