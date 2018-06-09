/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCIntentDefinitionSyncStateModel : NSObject {
    NSMutableDictionary * _model;
    bool  _needsSave;
    NSString * _persistencePath;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_data;
- (void)_save;
- (void)deleteSyncStateForService:(id)arg1 andBundleID:(id)arg2;
- (id)initWithPersistencePath:(id)arg1;
- (void)modifyWithBlock:(id /* block */)arg1;
- (void)readWithBlock:(id /* block */)arg1;
- (void)reset;
- (void)setSyncState:(id)arg1 forService:(id)arg2 andBundleID:(id)arg3;
- (id)syncStateForService:(id)arg1 andBundleID:(id)arg2;
- (id)syncStatesForService:(id)arg1;

@end
