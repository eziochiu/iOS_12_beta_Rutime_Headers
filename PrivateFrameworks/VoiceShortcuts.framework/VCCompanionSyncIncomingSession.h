/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCompanionSyncIncomingSession : VCCompanionSyncSession {
    NSDictionary * _syncDataHandlers;
    NSString * _syncServiceIdentifier;
}

@property (nonatomic, readonly) NSDictionary *syncDataHandlers;
@property (nonatomic, readonly, copy) NSString *syncServiceIdentifier;

- (void).cxx_destruct;
- (void)handleSpecialCasesInPartialErrors:(id)arg1 fromChangeSet:(struct NSOrderedSet { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (id)initWithSYSession:(id)arg1 syncServiceIdentifier:(id)arg2 syncDataHandlers:(id)arg3;
- (void)resetDataStoreForSyncSession:(id)arg1 completion:(id /* block */)arg2;
- (long long)sessionType;
- (id)syncDataHandlers;
- (id)syncServiceIdentifier;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;

@end
