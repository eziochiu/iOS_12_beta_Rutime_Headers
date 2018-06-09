/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation {
    NSData * _data;
    unsigned long long  _encoding;
    HMDBackingStoreCacheGroup * _group;
    HMDBackingStoreModelObject * _model;
    CKRecord * _record;
    NSString * _recordName;
    HMDBackingStoreCacheShareGroup * _share;
}

@property (readonly) NSData *data;
@property (readonly) unsigned long long encoding;
@property (readonly) HMDBackingStoreCacheGroup *group;
@property (readonly) HMDBackingStoreModelObject *model;
@property (readonly) CKRecord *record;
@property (readonly) NSString *recordName;
@property (readonly) HMDBackingStoreCacheShareGroup *share;

- (void).cxx_destruct;
- (id)data;
- (unsigned long long)encoding;
- (id)group;
- (id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(id /* block */)arg4;
- (id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(id /* block */)arg5;
- (id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 share:(id)arg2 name:(id)arg3 record:(id)arg4 data:(id)arg5 encoding:(unsigned long long)arg6 model:(id)arg7 resultBlock:(id /* block */)arg8;
- (id)initWithShareGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(id /* block */)arg4;
- (id)initWithShareGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(id /* block */)arg5;
- (id)initWithShareGroup:(id)arg1 record:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (id)model;
- (id)record;
- (id)recordName;
- (id)share;

@end
