/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver> {
    <SSActiveInterfaceOrientationObserverDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSActiveInterfaceOrientationObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2;
- (void)_registerForActiveInterfaceOrientationChanges;
- (id)_sbUIUserAgent;
- (void)_unregisterForActiveInterfaceOrientationChanges;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)beginObserving;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)stopObserving;

@end
