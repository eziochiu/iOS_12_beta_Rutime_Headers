/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUInterstitialAdManager : NSObject {
    <NUPage> * _activePage;
    <NUAdProvider> * _adProvider;
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    <NUInterstitialAdManagerDelegate> * _delegate;
    bool  _enabled;
}

@property (nonatomic, retain) <NUPage> *activePage;
@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic) <NUInterstitialAdManagerDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (id)activePage;
- (id)adProvider;
- (id)appConfigurationManager;
- (void)cancelTimer;
- (void)dealloc;
- (id)delegate;
- (id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2;
- (bool)isEnabled;
- (void)loadInterstitial;
- (void)restartTimer;
- (void)setActivePage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)triggerTimerChangesForActivePage:(id)arg1;

@end
