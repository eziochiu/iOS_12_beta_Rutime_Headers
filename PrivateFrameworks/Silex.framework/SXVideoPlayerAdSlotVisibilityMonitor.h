/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlayerAdSlotVisibilityMonitor : SVVisibilityMonitor {
    SVKeyValueObserver * _observer;
}

@property (nonatomic, readonly) SVKeyValueObserver *observer;

- (void).cxx_destruct;
- (id)initWithVideoPlayerViewController:(id)arg1 videoAdSlotVisiblePercentageProvider:(id)arg2;
- (id)observer;

@end
