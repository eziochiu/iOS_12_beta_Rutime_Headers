/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIClassroomVisibilityArbitrator : NSObject {
    <CRKSettingsUIVisibilityProvider> * _visibilityProvider;
    unsigned long long  _visibilityState;
    id /* block */  _visibilityStateChangeHandler;
}

@property (nonatomic, retain) <CRKSettingsUIVisibilityProvider> *visibilityProvider;
@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic, copy) id /* block */ visibilityStateChangeHandler;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadVisibilityState;
- (void)setVisibilityProvider:(id)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)setVisibilityStateChangeHandler:(id /* block */)arg1;
- (id)visibilityProvider;
- (unsigned long long)visibilityState;
- (id /* block */)visibilityStateChangeHandler;

@end
