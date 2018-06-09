/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
 */

@interface _CRSServiceBundleManager : CRBundleManager {
    NSMutableSet * _serviceBundles;
}

@property (nonatomic, readonly) NSSet *serviceBundles;

+ (Class)bundleClass;
+ (id)bundleDirectoryName;

- (void).cxx_destruct;
- (id)init;
- (void)registerBundle:(id)arg1;
- (id)serviceBundles;

@end
