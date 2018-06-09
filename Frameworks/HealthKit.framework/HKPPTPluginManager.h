/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKPPTPluginManager : NSObject <HKBundleLoadObserverDelegate> {
    NSMutableDictionary * _builtinTests;
    HKBundleLoadObserver * _bundleLoadObserver;
    NSMutableDictionary * _testClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedPluginManager;

- (void).cxx_destruct;
- (id)_internalPluginsPath;
- (void)_loadPPTBundleAtPath:(id)arg1;
- (void)_loadPPTBundles;
- (id)builtinTests;
- (void)bundleLoadObserver:(id)arg1 loadedClass:(Class)arg2 bundle:(id)arg3;
- (Class)classForTestType:(id)arg1;
- (id)init;

@end
