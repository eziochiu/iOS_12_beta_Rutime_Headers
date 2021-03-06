/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKSQLConnection : NSObject {
    void _handle;
    void path;
    void queue;
    void queueContext.storage;
}

@property (nonatomic, readonly) long long changes;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void*handle;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) bool readonly;
@property (nonatomic, readonly) long long totalChanges;

- (id /* block */).cxx_destruct;
- (long long)changes;
- (void)closeConnection;
- (void)dealloc;
- (id)description;
- (bool)execute:(id)arg1 error:(id*)arg2;
- (void*)handle;
- (id)init;
- (id)init:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (id)initWithReadonlyFlag:(bool)arg1 error:(id*)arg2;
- (void)interrupt;
- (id)path;
- (bool)readonly;
- (long long)totalChanges;

@end
