/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCompanionSyncSession : NSObject <SYSessionDelegate> {
    <VCCompanionSyncSessionDelegate> * _delegate;
    SYSession * _sySession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCCompanionSyncSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sessionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SYSession *sySession;

+ (void)initialize;
+ (id)partitionChanges:(id)arg1 forDataHandlers:(id)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)delegate;
- (id)initWithSYSession:(id)arg1;
- (long long)sessionType;
- (void)setDelegate:(id)arg1;
- (id)sySession;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end
