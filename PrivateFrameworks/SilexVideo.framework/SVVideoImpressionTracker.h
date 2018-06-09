/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoImpressionTracker : NSObject <SVVideoImpressionTracking> {
    NSMutableArray * _actions;
    <SVVideoDurationObserving> * _durationObserver;
    SVTimeBasedAction * _impressionAction;
    double  _impressionThreshold;
    bool  _passedImpressionThreshold;
    unsigned long long  _quartile;
    id /* block */  _quartileImpressionBlock;
    id /* block */  _thresholdImpressionBlock;
    SVTimeline * _timeline;
}

@property (nonatomic, readonly) NSMutableArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoDurationObserving> *durationObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SVTimeBasedAction *impressionAction;
@property (nonatomic, readonly) double impressionThreshold;
@property (getter=hasPassedImpressionThreshold, setter=setHasPassedImpressionThreshold:, nonatomic) bool passedImpressionThreshold;
@property (nonatomic) unsigned long long quartile;
@property (setter=uponQuartileImpression:, nonatomic, copy) id /* block */ quartileImpressionBlock;
@property (readonly) Class superclass;
@property (setter=uponThresholdImpression:, nonatomic, copy) id /* block */ thresholdImpressionBlock;
@property (nonatomic, readonly) SVTimeline *timeline;

- (void).cxx_destruct;
- (id)actions;
- (void)configureTimelineForImpressionReportingWithDuration:(double)arg1;
- (void)configureTimelineForQuartileReportingWithDuration:(double)arg1;
- (void)dealloc;
- (id)durationObserver;
- (bool)hasPassedImpressionThreshold;
- (id)impressionAction;
- (double)impressionThreshold;
- (id)initWithTimeline:(id)arg1 impressionThreshold:(double)arg2 durationObserver:(id)arg3;
- (unsigned long long)quartile;
- (id /* block */)quartileImpressionBlock;
- (void)setHasPassedImpressionThreshold:(bool)arg1;
- (void)setImpressionAction:(id)arg1;
- (void)setQuartile:(unsigned long long)arg1;
- (id /* block */)thresholdImpressionBlock;
- (id)timeline;
- (void)uponQuartileImpression:(id /* block */)arg1;
- (void)uponThresholdImpression:(id /* block */)arg1;

@end
