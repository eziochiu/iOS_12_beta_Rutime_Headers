/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation {
    HMDBackingStoreCacheGroup * _group;
    NSArray * _recordNames;
    HMDBackingStoreCacheShareGroup * _share;
}

@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (nonatomic, retain) NSArray *recordNames;
@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *share;

- (void).cxx_destruct;
- (id)group;
- (id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 share:(id)arg2 recordNames:(id)arg3 resultBlock:(id /* block */)arg4;
- (id)initWithShareGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (id)recordNames;
- (void)setGroup:(id)arg1;
- (void)setRecordNames:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;

@end
