/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaEntityPropertiesCache : NSObject {
    <MPMediaLibraryDataProvider> * _dataProvider;
    Class  _dataProviderEntityClass;
    long long  _identifier;
    NSMutableDictionary * _properties;
    NSObject<OS_dispatch_queue> * _propertiesQueue;
    NSMutableDictionary * _valuePersistenceBlocks;
}

@property (nonatomic, readonly) <MPMediaLibraryDataProvider> *dataProvider;
@property (nonatomic, readonly) Class dataProviderEntityClass;
@property (nonatomic, readonly) long long identifier;

- (void).cxx_destruct;
- (void)_onBarrierCacheValues:(id)arg1 persistValueInBackgroundBlock:(id /* block */)arg2;
- (void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(id /* block */)arg3;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(id /* block */)arg3;
- (id)dataProvider;
- (Class)dataProviderEntityClass;
- (void)dealloc;
- (void)delete;
- (long long)identifier;
- (id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3;
- (void)invalidate;
- (id)valueForProperty:(id)arg1 isCached:(bool*)arg2;

@end
