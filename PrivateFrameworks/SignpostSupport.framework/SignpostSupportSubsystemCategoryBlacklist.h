/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotSubsystem;
- (id)initWithEntries:(id)arg1;
- (id)liveStreamingPredicate;
- (bool)passesSubsystem:(id)arg1 category:(id)arg2;

@end
