/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocalConnectionsStore : NSObject

+ (id)defaultStore;

- (id)recentLocationDonationsSinceDate:(id)arg1 error:(id*)arg2;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 error:(id*)arg5;

@end