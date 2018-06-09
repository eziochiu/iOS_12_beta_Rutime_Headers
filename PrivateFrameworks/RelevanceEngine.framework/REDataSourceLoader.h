/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDataSourceLoader : NSObject <NSCopying> {
    NSArray * _cachedBundleConfigurations;
    NSArray * _cachedDataSources;
}

+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1;
+ (id)dataSourceLoaderWithBlock:(id /* block */)arg1;
+ (id)dataSourceLoaderWithDirectories:(id)arg1;
+ (id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2;
+ (id)dataSourceLoaderWithDirectory:(id)arg1;
+ (id)defaultDataSourceLoader;
+ (id)disabledDataSourceLoader;

- (void).cxx_destruct;
- (void)_loadBundleConfigurationsUsingBlock:(id /* block */)arg1;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateBundleConfigurations:(id /* block */)arg1;
- (void)enumerationDataSourceClassesWithBlock:(id /* block */)arg1;

@end
