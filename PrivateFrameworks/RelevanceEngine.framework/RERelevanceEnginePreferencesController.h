/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate> {
    RERelevanceEnginePreferences * _effectivePreferences;
    NSMapTable * _preferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetEffectivePreferences;
- (id)effectivePreferences;
- (id)init;
- (void)relevanceEnginePreferencesDidUpdate:(id)arg1;
- (void)removePreferencesForObject:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;

@end
