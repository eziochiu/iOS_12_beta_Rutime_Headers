/* made by EzioChiu.
 */

@protocol REDonatedActionStoreObserver <NSObject>

@required

- (void)donationActionsStoreReceivedDonation:(REDonatedAction *)arg1 isNewDonation:(bool)arg2;
- (void)donationActionsStoreRemovedDonation:(NSDictionary *)arg1;

@end
