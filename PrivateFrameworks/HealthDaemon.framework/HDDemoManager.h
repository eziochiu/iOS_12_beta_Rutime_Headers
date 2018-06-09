/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoManager : NSObject {
    _HDDataFaker * _faker;
}

- (void).cxx_destruct;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)isProvidingData;
- (void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(id /* block */)arg3;
- (void)stopFakingData;

@end
