/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSBundleController : PSBundleController {
    NSArray * _specifiers;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    TPSTelephonyController * _telephonyController;
}

@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) PSListController *parentListController;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, readonly, copy) NSOrderedSet *subscriptions;
@property (nonatomic, readonly) TPSTelephonyController *telephonyController;

- (void).cxx_destruct;
- (id)initWithParentListController:(id)arg1;
- (bool)isHidden;
- (id)parentListController;
- (void)setSpecifiers:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (id)specifiers;
- (id)specifiersWithSpecifier:(id)arg1;
- (id)subscriptionContext;
- (id)subscriptionContextForSpecifier:(id)arg1;
- (id)subscriptions;
- (id)telephonyController;
- (void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2;

@end
