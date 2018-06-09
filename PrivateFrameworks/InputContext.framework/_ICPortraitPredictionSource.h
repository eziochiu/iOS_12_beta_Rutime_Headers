/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing> {
    NSMutableArray * _contacts;
    PPQuickTypeBroker * _ppBroker;
    NSCondition * _ppBrokerLoadedCondition;
}

@property (retain) PPQuickTypeBroker *ppBroker;

- (void).cxx_destruct;
- (bool)_populateError:(id*)arg1 withExplanations:(id)arg2;
- (id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3;
- (id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5;
- (id)getPPBroker;
- (void)hibernate;
- (id)init;
- (id)ppBroker;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)setPpBroker:(id)arg1;
- (void)warmUp;

@end
