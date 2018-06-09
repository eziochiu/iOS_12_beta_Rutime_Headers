/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation {
    long long  _pushFlags;
    HMDBackingStoreTransactionBlock * _transaction;
}

@property (nonatomic) long long pushFlags;
@property (nonatomic, retain) HMDBackingStoreTransactionBlock *transaction;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)arg1;
- (id)mainReturningError;
- (long long)pushFlags;
- (void)setPushFlags:(long long)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
