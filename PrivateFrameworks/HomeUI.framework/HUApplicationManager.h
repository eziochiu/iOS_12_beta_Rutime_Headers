/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUApplicationManager : NSObject {
    NSHashTable * _idleTimerDisabledRequesters;
    NSHashTable * _networkActivityIndicatorRequesters;
    NSHashTable * _statusBarHidingRequesters;
    <HUStatusBarVisibilityHandling> * _statusBarVisibilityHandler;
    bool  _wasStatusBarVisible;
}

@property (nonatomic, retain) NSHashTable *idleTimerDisabledRequesters;
@property (nonatomic, retain) NSHashTable *networkActivityIndicatorRequesters;
@property (getter=isStatusBarHidden, nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, retain) NSHashTable *statusBarHidingRequesters;
@property (nonatomic, retain) <HUStatusBarVisibilityHandling> *statusBarVisibilityHandler;
@property (nonatomic) bool wasStatusBarVisible;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)idleTimerDisabledRequesters;
- (id)init;
- (bool)isIdleTimerDisabled;
- (bool)isNetworkActivityIndicatorVisible;
- (bool)isStatusBarHidden;
- (id)networkActivityIndicatorRequesters;
- (void)setIdleTimerDisabled:(bool)arg1 forRequester:(id)arg2;
- (void)setIdleTimerDisabledRequesters:(id)arg1;
- (void)setNetworkActivityIndicatorRequesters:(id)arg1;
- (void)setNetworkActivityIndicatorVisible:(bool)arg1 forRequester:(id)arg2;
- (void)setStatusBarHidden:(bool)arg1 forRequester:(id)arg2;
- (void)setStatusBarHidden:(bool)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3;
- (void)setStatusBarHidingRequesters:(id)arg1;
- (void)setStatusBarVisibilityHandler:(id)arg1;
- (void)setWasStatusBarVisible:(bool)arg1;
- (id)statusBarHidingRequesters;
- (id)statusBarVisibilityHandler;
- (bool)wasStatusBarVisible;

@end
