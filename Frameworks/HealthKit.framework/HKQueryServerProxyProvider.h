/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider

- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1 query:(id)arg2 configuration:(id)arg3 queryUUID:(id)arg4;

@end
