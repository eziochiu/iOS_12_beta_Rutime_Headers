/* made by EzioChiu.
 */

@protocol HMDAccountManager <NSObject>

@required

- (HMDBackingStore *)backingStore;
- (void)setBackingStore:(HMDBackingStore *)arg1;
- (bool)shouldAccount:(HMDAccount *)arg1 pushbackModel:(HMDBackingStoreModelObject *)arg2 actions:(HMDBackingStoreTransactionActions *)arg3;
- (bool)shouldCacheAccount:(HMDAccount *)arg1;
- (bool)shouldDevice:(HMDDevice *)arg1 processModel:(HMDBackingStoreModelObject *)arg2 actions:(HMDBackingStoreTransactionActions *)arg3;
- (bool)shouldSyncAccount:(HMDAccount *)arg1;
- (bool)shouldSyncDevice:(HMDDevice *)arg1;

@end
