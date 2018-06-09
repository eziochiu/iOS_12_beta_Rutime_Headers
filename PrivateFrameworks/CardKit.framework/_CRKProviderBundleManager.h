/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface _CRKProviderBundleManager : CRBundleManager {
    NSMutableSet * _providerBundles;
}

@property (nonatomic, readonly) NSSet *providerBundles;

+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bundles;
- (id)init;
- (id)providerBundles;
- (void)registerBundle:(id)arg1;

@end
