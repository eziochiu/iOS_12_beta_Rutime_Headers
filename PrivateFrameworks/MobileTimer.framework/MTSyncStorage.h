/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncStorage : NSObject <MTSyncStorage> {
    <NAScheduler> * _archiverScheduler;
    long long  _dataClass;
    <SYChangeSerializer> * _pendingChangeSerializer;
}

@property (nonatomic, readonly) <NAScheduler> *archiverScheduler;
@property (nonatomic, readonly) long long dataClass;
@property (nonatomic, readonly) <SYChangeSerializer> *pendingChangeSerializer;

+ (id)_pathComponentForDataClass:(long long)arg1;

- (void).cxx_destruct;
- (id)_syncDataPath;
- (id)archiverScheduler;
- (long long)dataClass;
- (id)initWithDataClass:(long long)arg1 serializer:(id)arg2;
- (void)loadPendingChangesWithCompletion:(id /* block */)arg1;
- (id)pendingChangeSerializer;
- (void)savePendingChanges:(id)arg1;
- (id)syncDataFile;

@end
