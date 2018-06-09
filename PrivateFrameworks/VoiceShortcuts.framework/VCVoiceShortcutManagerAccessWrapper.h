/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCVoiceShortcutManagerXPCInterface> {
    VCAccessSpecifier * _accessSpecifier;
    VCVoiceShortcutManager * _underlyingManager;
}

@property (nonatomic, readonly) VCAccessSpecifier *accessSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCVoiceShortcutManager *underlyingManager;

- (void).cxx_destruct;
- (id)accessSpecifier;
- (void)addVoiceShortcut:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)describeSyncStateIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)getNumberOfVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (id)initWithUnderlyingManager:(id)arg1 accessSpecifier:(id)arg2;
- (void)requestSyncForServiceClassName:(id)arg1 forceReset:(bool)arg2 completion:(id /* block */)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (id)underlyingManager;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 completion:(id /* block */)arg4;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(id /* block */)arg2;

@end
