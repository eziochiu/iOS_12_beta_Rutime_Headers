/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotConfigurationManager : NSObject

+ (id)sharedManager;

- (void)applyConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)errorWithCode:(long long)arg1;
- (void)getConfiguredSSIDsWithCompletionHandler:(id /* block */)arg1;
- (void)removeConfigurationForHS20DomainName:(id)arg1;
- (void)removeConfigurationForSSID:(id)arg1;
- (id)serializeConfiguration:(id)arg1;

@end
