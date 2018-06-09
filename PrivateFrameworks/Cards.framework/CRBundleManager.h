/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRBundleManager : NSObject {
    NSMutableSet * _bundles;
}

@property (nonatomic, readonly) NSSet *bundles;

+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)bundleDirectoryPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bundles;
- (id)init;
- (bool)loadBundles;
- (void)registerBundle:(id)arg1;

@end
