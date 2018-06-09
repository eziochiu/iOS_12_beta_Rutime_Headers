/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDataSourceCatalog : NSObject {
    REAppIconCache * _appIconCache;
    REAppNameCache * _appNameCache;
    REDataSourceManager * _dataSourceManager;
    NSCache * _iconCache;
    NSMutableDictionary * _localizedNameCache;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSSet *dataSourceIdentifiers;

- (void).cxx_destruct;
- (void)_applicationsStatesDidChange;
- (id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1;
- (id)dataSourceIdentifiers;
- (void)dealloc;
- (void)donatedAppIdentifiersWithCompletion:(id /* block */)arg1;
- (void)enumerateDataSources:(id /* block */)arg1;
- (void)imageForApplicationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)imageForDataSourceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1;
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;
- (id)localizedNameForDataSourceWithIdentifier:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (bool)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1;
- (bool)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1;

@end
