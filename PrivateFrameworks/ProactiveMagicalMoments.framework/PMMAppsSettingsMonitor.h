/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

@interface PMMAppsSettingsMonitor : NSObject {
    bool  _applicationPredictionExtensionEnabled;
    id  _driver;
    id /* block */  _handler;
    bool  _magicalMomentsEnabled;
    int  _notifyRegistrationToken;
    PKHost * _pluginKitHost;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _zeroKeywordEnabled;
}

@property (nonatomic) bool applicationPredictionExtensionEnabled;
@property (nonatomic, retain) id driver;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool magicalMomentsEnabled;
@property (nonatomic) int notifyRegistrationToken;
@property (nonatomic, retain) PKHost *pluginKitHost;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool zeroKeywordEnabled;

- (void).cxx_destruct;
- (void)_determinePredictedApplicationExtensionEnabled;
- (bool)_determineZeroKeywordEnabled;
- (void)_registerForNotifications;
- (void)_registerForZeroKeywordDisabledNotification;
- (void)_updateAppSettingsEnabled;
- (void)_updatePredictedApplicationExtensions:(id)arg1 error:(id)arg2;
- (bool)applicationPredictionExtensionEnabled;
- (void)dealloc;
- (id)driver;
- (void)fetchAppsSuggestionsEnabled:(id /* block */)arg1;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)magicalMomentsEnabled;
- (int)notifyRegistrationToken;
- (id)pluginKitHost;
- (id)queue;
- (void)setApplicationPredictionExtensionEnabled:(bool)arg1;
- (void)setDriver:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setMagicalMomentsEnabled:(bool)arg1;
- (void)setNotifyRegistrationToken:(int)arg1;
- (void)setPluginKitHost:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setZeroKeywordEnabled:(bool)arg1;
- (bool)zeroKeywordEnabled;

@end