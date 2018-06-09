/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoVisibilityManager : NSObject <SVVideoVisibilityManager> {
    <SVVideoQueueObserving> * _queueObserver;
    <SVVideoTransitionManager> * _transitionManager;
    <SVVideoVisibilityMonitorProviding> * _visibilityMonitorProvider;
    NSMutableDictionary * _visibilityMonitors;
    <SVVideoVisiblePercentageManager> * _visiblePercentageManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoQueueObserving> *queueObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoTransitionManager> *transitionManager;
@property (nonatomic, readonly) <SVVideoVisibilityMonitorProviding> *visibilityMonitorProvider;
@property (nonatomic, readonly) NSMutableDictionary *visibilityMonitors;
@property (nonatomic, readonly) <SVVideoVisiblePercentageManager> *visiblePercentageManager;

- (void).cxx_destruct;
- (id)initWithTransitionManager:(id)arg1 queueObserver:(id)arg2 visibilityMonitorProvider:(id)arg3 visiblePercentageManager:(id)arg4;
- (void)lock;
- (id)queueObserver;
- (void)startMonitoringVideo:(id)arg1;
- (void)stopMonitoringVideo:(id)arg1;
- (id)transitionManager;
- (void)unlock;
- (void)updateVisibility;
- (id)visibilityMonitorProvider;
- (id)visibilityMonitors;
- (id)visiblePercentageManager;

@end
