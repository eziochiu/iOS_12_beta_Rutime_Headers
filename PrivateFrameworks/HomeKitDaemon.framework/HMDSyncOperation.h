/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSyncOperation : HMFObject {
    HMFTimer * _delayTimer;
    NSUUID * _identifier;
    id /* block */  _operationBlock;
    unsigned long long  _operationType;
    HMDSyncOperationOptions * _options;
}

@property (nonatomic, retain) HMFTimer *delayTimer;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ operationBlock;
@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly) HMDSyncOperationOptions *options;
@property (nonatomic, readonly) NSString *zoneName;

+ (id)cancelOperationWithBlock:(id /* block */)arg1;
+ (id)cloudFetchSyncOperationWithCloudConflict:(bool)arg1 block:(id /* block */)arg2;
+ (id)cloudForcePushSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudPushSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(bool)arg2 block:(id /* block */)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithOperationType:(unsigned long long)arg1 options:(id)arg2 syncBlock:(id /* block */)arg3;
- (id)delayTimer;
- (id)description;
- (id)identifier;
- (id /* block */)operationBlock;
- (unsigned long long)operationType;
- (id)options;
- (void)setDelayTimer:(id)arg1;
- (void)setOperationBlock:(id /* block */)arg1;
- (id)zoneName;

@end
