/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCTXPCServiceSubscriptionInfo : NSObject {
    CTXPCServiceSubscriptionInfo * _subscriptionInfo;
}

@property (nonatomic, retain) CTXPCServiceSubscriptionInfo *subscriptionInfo;

- (void).cxx_destruct;
- (long long)__imSlotIDSForPhoneNumber:(id)arg1;
- (bool)__im_containsPhoneNumber:(id)arg1;
- (bool)__im_hasMultipleSubscriptions;
- (id)__im_labelForPhoneNumber:(id)arg1;
- (bool)__im_onlyHasActiveSlots;
- (id)__im_phoneNumberForSlotID:(long long)arg1;
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1;
- (id)__im_preferredSubscriptionContext;
- (id)__im_subscriptionContextForPhoneNumber:(id)arg1;
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1;
- (id)__im_subscriptionsWithMMSSupport;
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1;
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1;
- (id)allSubscriptions;
- (id)initWithSubscriptionInfo:(id)arg1;
- (id)preferredOrDefaultSubscriptionContext;
- (void)setSubscriptionInfo:(id)arg1;
- (id)subscriptionInfo;
- (id)subscriptions;

@end
