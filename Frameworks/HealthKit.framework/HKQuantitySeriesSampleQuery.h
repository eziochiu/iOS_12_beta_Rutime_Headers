/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantitySeriesSampleQuery : HKQuery <HKQuantitySeriesSampleQueryClientInterface> {
    long long  _anchor;
    id /* block */  _quantityHandler;
    HKQuantitySample * _sample;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(bool)arg3 query:(id)arg4;
- (id)initWithSample:(id)arg1 quantityHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
