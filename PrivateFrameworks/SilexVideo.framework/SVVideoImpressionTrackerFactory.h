/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoImpressionTrackerFactory : NSObject <SVVideoImpressionTrackerFactory> {
    <SVVideoDurationObserverFactory> * _durationObserverFactory;
    <SVVideoImpressionThresholdProviding> * _impressionThresholdProvider;
    SVTimeline * _timeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoDurationObserverFactory> *durationObserverFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoImpressionThresholdProviding> *impressionThresholdProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;

- (void).cxx_destruct;
- (id)createImpressionTrackerForVideo:(id)arg1;
- (id)durationObserverFactory;
- (id)impressionThresholdProvider;
- (id)initWithTimeline:(id)arg1 impressionThresholdProvider:(id)arg2 durationObserverFactory:(id)arg3;
- (id)timeline;

@end
