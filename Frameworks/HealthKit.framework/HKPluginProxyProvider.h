/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKPluginProxyProvider : HKProxyProvider

@property (nonatomic, readonly) NSString *pluginIdentifier;

- (void)fetchPluginProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3;
- (id)pluginIdentifier;

@end
