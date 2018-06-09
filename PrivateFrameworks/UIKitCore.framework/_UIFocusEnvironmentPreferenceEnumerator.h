/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> {
    bool  _allowsInferringPreferences;
    _UIDebugLogReport * _debugReport;
    id /* block */  _didVisitAllPreferencesForEnvironmentHandler;
    id /* block */  _shouldInferPreferenceForEnvironmentHandler;
}

@property (nonatomic) bool allowsInferringPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _UIDebugLogReport *debugReport;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didVisitAllPreferencesForEnvironmentHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ shouldInferPreferenceForEnvironmentHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1;
- (bool)allowsInferringPreferences;
- (id)debugReport;
- (id /* block */)didVisitAllPreferencesForEnvironmentHandler;
- (void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (void)setAllowsInferringPreferences:(bool)arg1;
- (void)setDebugReport:(id)arg1;
- (void)setDidVisitAllPreferencesForEnvironmentHandler:(id /* block */)arg1;
- (void)setShouldInferPreferenceForEnvironmentHandler:(id /* block */)arg1;
- (id /* block */)shouldInferPreferenceForEnvironmentHandler;

@end
