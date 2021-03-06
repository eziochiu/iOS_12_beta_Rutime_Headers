/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICInternalSource : NSObject <_ICPredictionSourcing>

- (void)hibernate;
- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)warmUp;

@end
