/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownload : SSEntity <SSXPCCoding> {
    NSMutableDictionary * _localAssets;
    SSDownloadMetadata * _metadata;
    NSNumber * _prioritizeAboveDownload;
    SSDownloadStatus * _status;
}

@property (getter=_XPCConnection, readonly) SSXPCConnection *_XPCConnection;
@property (readonly) NSDictionary *_localAssets;
@property (nonatomic, retain) NSArray *assets;
@property (getter=isCancelable, readonly) bool cancelable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id downloadIdentifier;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (readonly) long long downloadSizeLimit;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SSDownloadMetadata *metadata;
@property (readonly) long long persistentIdentifier;
@property (nonatomic, retain) SSDownloadStatus *status;
@property (readonly) Class superclass;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (id)_XPCConnection;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
- (id)_errorWithData:(id)arg1;
- (id)_errorWithXPCReply:(id)arg1;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)_localAssets;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (void)_resetLocalIVars;
- (void)_resetStatus;
- (bool)addAsset:(id)arg1 forType:(id)arg2;
- (id)assets;
- (id)assetsForType:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadIdentifier;
- (id)downloadPhaseIdentifier;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (double)estimatedSecondsRemaining;
- (id)failureError;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithDownloadMetadata:(id)arg1;
- (id)initWithPersistentIdentifier:(long long)arg1;
- (bool)isBackgroundNetworkingUserInitiated;
- (bool)isCancelable;
- (bool)isEligibleForRestore:(id*)arg1;
- (bool)isExternal;
- (id)metadata;
- (id)networkConstraints;
- (void)pause;
- (double)percentComplete;
- (long long)persistentIdentifier;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)removeAsset:(id)arg1;
- (void)restart;
- (void)resume;
- (void)setAssets:(id)arg1;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setBackgroundNetworkingUserInitiated:(bool)arg1;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloadPolicy:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)status;

@end
