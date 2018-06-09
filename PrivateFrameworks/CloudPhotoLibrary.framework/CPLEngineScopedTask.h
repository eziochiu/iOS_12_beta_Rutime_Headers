/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineScopedTask : CPLEngineSyncTask {
    NSString * _clientCacheIdentifier;
    CPLEngineScope * _scope;
    CPLEngineStore * _store;
    NSData * _transportScope;
}

@property (nonatomic, readonly) NSString *clientCacheIdentifier;
@property (nonatomic, readonly) CPLEngineScope *scope;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (nonatomic, readonly) NSData *transportScope;

- (void).cxx_destruct;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)clientCacheIdentifier;
- (id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4;
- (id)scope;
- (id)store;
- (id)transportScope;

@end
