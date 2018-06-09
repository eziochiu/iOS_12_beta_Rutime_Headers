/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheUpdateShareGroupOperation : HMDBackingStoreOperation {
    HMDBackingStoreCacheShareGroup * _record;
    CKShare * _share;
    NSArray * _users;
}

@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *record;
@property (nonatomic, retain) CKShare *share;
@property (nonatomic, retain) NSArray *users;

- (void).cxx_destruct;
- (id)initWithShareGroup:(id)arg1 share:(id)arg2 users:(id)arg3 resultBlock:(id /* block */)arg4;
- (id)mainReturningError;
- (id)record;
- (void)setRecord:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)share;
- (id)users;

@end
