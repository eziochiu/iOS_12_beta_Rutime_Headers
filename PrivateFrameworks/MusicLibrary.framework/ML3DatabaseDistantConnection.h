/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {
    bool  _connectionOpen;
    NSUUID * _currentTransactionID;
    <ML3DatabaseDistantConnectionDelegate> * _distantDelegate;
    MLMediaLibraryService * _mediaLibraryService;
}

@property (nonatomic) <ML3DatabaseDistantConnectionDelegate> *distantDelegate;

- (void).cxx_destruct;
- (bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 isRetry:(bool)arg2;
- (bool)_internalEndTransactionAndCommit:(bool)arg1;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
- (bool)_openWithFlags:(int)arg1;
- (void)_serviceTerminatedTransactionNotification:(id)arg1;
- (struct sqlite3 { }*)_sqliteHandle;
- (int)checkpointDatabase;
- (bool)close;
- (id)currentTransactionID;
- (void)dealloc;
- (id)distantDelegate;
- (id)initWithDatabasePath:(id)arg1;
- (bool)isOpen;
- (bool)isReadOnly;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(bool)arg4;
- (bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id /* block */)arg3;
- (bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(int (*)arg3 userData:(void*)arg4;
- (bool)registerModule:(id)arg1;
- (void)setDistantDelegate:(id)arg1;
- (void)setProfilingLevel:(int)arg1;
- (void)setReadOnly:(bool)arg1;
- (bool)shouldCacheStatements;

@end
