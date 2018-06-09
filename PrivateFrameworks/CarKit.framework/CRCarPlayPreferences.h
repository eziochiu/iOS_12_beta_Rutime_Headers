/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver> {
    bool  _cachedCarPlayAllowed;
    <CRCarPlayPreferencesDelegate> * _preferencesDelegate;
}

@property (nonatomic) bool cachedCarPlayAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CRCarPlayPreferencesDelegate> *preferencesDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isCarPlayAllowed;
- (void)_updateCarPlayAllowed;
- (bool)cachedCarPlayAllowed;
- (void)dealloc;
- (void)handleAssistantLanguageChanged:(id)arg1;
- (void)handleAssistantPreferencesChanged:(id)arg1;
- (id)init;
- (bool)isCarPlayAllowed;
- (bool)isCarPlayCapable;
- (bool)isWirelessCarPlayEnabled;
- (id)preferencesDelegate;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCachedCarPlayAllowed:(bool)arg1;
- (void)setPreferencesDelegate:(id)arg1;

@end
