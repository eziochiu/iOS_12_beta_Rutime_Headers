/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface, HKUnitTestingTaskServerInterface> {
    HDKeyValueDomain * _keyValueDomain;
}

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (Class)_keyValueEntityClass;
- (void)_unitTest_overrideKeyValueDomainCategory:(long long)arg1;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)remoteInterface;
- (void)remote_allValuesWithCompletion:(id /* block */)arg1;
- (void)remote_dateForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_numberForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeValuesForKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setValuesWithDictionary:(id)arg1 completion:(id /* block */)arg2;

@end
