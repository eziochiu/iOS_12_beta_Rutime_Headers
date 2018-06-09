/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {
    id /* block */  _resultsHandler;
    NSSet * _sampleTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *sampleTypes;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSampleCountDictionary:(id)arg1 forQuery:(id)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_validate;
- (id)sampleTypes;

@end
