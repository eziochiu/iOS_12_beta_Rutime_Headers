/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface VCActionDonationRecommender : NSObject

+ (bool)actionDonation:(id)arg1 matchesQuery:(id)arg2;
+ (id)deduplicatedActionDonations:(id)arg1 query:(id)arg2 notFromAppsInSet:(id)arg3;
+ (void)fetchPredictedDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)fetchRecentDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 filteringForIsEligibleForPrediction:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)fetchRecommendedDonationsByAppIdentifierWithLimit:(unsigned long long)arg1 query:(id)arg2 filteringForIsEligibleForPrediction:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(bool)arg4 completionHandler:(id /* block */)arg5;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(bool)arg4 filteringActiveShortcuts:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (void)fetchRecommendedDonationsWithLimit:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchRecommendedDonationsWithLimit:(unsigned long long)arg1 filteringActiveShortcuts:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (void)fetchRecommendedDonationsWithLimit:(unsigned long long)arg1 query:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)fetchSuggestedDonationsForAllAppsWithLimit:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchSuggestedDonationsForForApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)filterDonationsForTitleLength:(id)arg1;
+ (id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2;
+ (id)getDonationsFromActionResponse:(id)arg1;
+ (void)initialize;

@end
