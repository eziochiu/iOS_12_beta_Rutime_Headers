/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoSkipLockObserverFactory : NSObject <SVVideoSkipLockObserverFactory> {
    <SVVideoSkipThresholdObserverFactory> * _thresholdObserverFactory;
    SVTimeline * _timeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoSkipThresholdObserverFactory> *thresholdObserverFactory;
@property (nonatomic, readonly) SVTimeline *timeline;

- (void).cxx_destruct;
- (id)createSkipLockObserverForVideo:(id)arg1;
- (id)initWithTimeline:(id)arg1 thresholdObserverFactory:(id)arg2;
- (id)thresholdObserverFactory;
- (id)timeline;

@end
