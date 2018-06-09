/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKTaskServerProxyProvider : HKProxyProvider {
    HKTaskConfiguration * _taskConfiguration;
    NSUUID * _taskUUID;
}

@property (copy) HKTaskConfiguration *taskConfiguration;
@property (nonatomic, readonly, copy) NSString *taskIdentifier;
@property (nonatomic, readonly, copy) NSUUID *taskUUID;

- (void).cxx_destruct;
- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 taskUUID:(id)arg4;
- (void)setTaskConfiguration:(id)arg1;
- (id)taskConfiguration;
- (id)taskIdentifier;
- (id)taskUUID;

@end
