/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCloudKitGroupServer : NSObject {
    IDSCKDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) IDSCKDatabase *database;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)database;
- (void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setDatabase:(id)arg1;
- (void)setQueue:(id)arg1;

@end
