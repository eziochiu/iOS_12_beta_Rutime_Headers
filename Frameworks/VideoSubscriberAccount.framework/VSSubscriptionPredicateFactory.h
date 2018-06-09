/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionPredicateFactory : NSObject {
    VSAppInstallationInfoCenter * _appInstallationInfoCenter;
}

@property (nonatomic, retain) VSAppInstallationInfoCenter *appInstallationInfoCenter;

+ (id)_subscriptionPredicateTemplateValues;
+ (id)_subscriptionSourceKindPredicateTemplateValues;
+ (id)_subscriptionSourcePredicateTemplateValues;

- (void).cxx_destruct;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;
- (id)_predicateTemplateForSourceKind:(long long)arg1;
- (id)_predicateTemplateForSourceOfTask:(id)arg1;
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;
- (id)appInstallationInfoCenter;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (void)setAppInstallationInfoCenter:(id)arg1;
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;

@end
