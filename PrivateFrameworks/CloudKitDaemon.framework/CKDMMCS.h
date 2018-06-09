/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCS : NSObject {
    CKDMMCSEngineContext * _MMCSEngineContext;
    CKDAssetCache * _assetCache;
    long long  _checkoutCount;
    CKDClientContext * _clientContext;
    bool  _didDrop;
    NSString * _path;
}

@property (nonatomic, retain) CKDMMCSEngineContext *MMCSEngineContext;
@property (nonatomic, retain) CKDAssetCache *assetCache;
@property (nonatomic) long long checkoutCount;
@property (nonatomic) CKDClientContext *clientContext;
@property (nonatomic) bool didDrop;
@property (getter=getMaxChunkCountForSection, nonatomic, readonly) unsigned int maxChunkCountForSection;
@property (nonatomic, retain) NSString *path;

+ (id)MMCSWrapperForApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 isUTAccount:(bool)arg3 error:(id*)arg4;
+ (long long)_commonErrorCodeWithMMCSError:(id)arg1;
+ (long long)_errorCodeWithMMCSGetError:(id)arg1;
+ (long long)_errorCodeWithMMCSPutError:(id)arg1;
+ (long long)_errorCodeWithMMCSRegisterError:(id)arg1;
+ (id)_errorWithMMCSError:(id)arg1 description:(id)arg2 operationType:(long long)arg3;
+ (id)_errorWithMMCSError:(id)arg1 path:(id)arg2 description:(id)arg3 operationType:(long long)arg4;
+ (id)_userInfoFromMMCSRetryableError:(id)arg1;
+ (bool)isTrackingItemID:(unsigned long long)arg1;
+ (id)protocolHeaders;
+ (id)protocolVersion;
+ (void)purgeMMCSDirectoryWithPath:(id)arg1;
+ (id)sharedItemIDs;
+ (id)sharedMMCSItemReaders;
+ (id)sharedWrappersByPath;
+ (void)startTrackingItemIDsForMMCSItems:(id)arg1;
+ (void)startTrackingMMCSItemReader:(id)arg1;
+ (void)stopTrackingItemIDsForMMCSItems:(id)arg1;
+ (void)stopTrackingMMCSItemReader:(id)arg1;
+ (id)zeroSizeFileSignature;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)MMCSEngineContext;
- (id)_contextToGetItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 command:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)_contextToGetOrPutChunkKeysItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_contextToGetSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_contextToPutItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_contextToPutSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_contextToRegisterItemGroup:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)_getRegisteredItemsGreaterThan:(unsigned long long)arg1 itemIds:(unsigned long long*)arg2 itemCount:(unsigned long long*)arg3 error:(id*)arg4;
- (void)_logMMCSOptions:(id)arg1;
- (id)_referenceIdentifierFromAssetKey:(id)arg1;
- (void)_unregisterItemIDs:(id)arg1;
- (id)assetCache;
- (long long)checkoutCount;
- (id)clientContext;
- (void)dealloc;
- (bool)didDrop;
- (void)drop;
- (id)getChunkKeysItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)getItemGroupSet:(id)arg1 operation:(id)arg2 shouldFetchAssetContentInMemory:(bool)arg3 options:(id)arg4 progress:(id /* block */)arg5 command:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (struct _mmcs_engine { }*)getMMCSEngine;
- (unsigned int)getMaxChunkCountForSection;
- (id)getSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithMMCSEngineContext:(id)arg1 path:(id)arg2;
- (id)path;
- (void)performOnRunLoop:(id /* block */)arg1;
- (id)putChunkKeysItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)putItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)putSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)registerItemGroupSet:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)registeredItemCount:(unsigned long long*)arg1 error:(id*)arg2;
- (void)setAssetCache:(id)arg1;
- (void)setCheckoutCount:(long long)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDidDrop:(bool)arg1;
- (void)setMMCSEngineContext:(id)arg1;
- (void)setPath:(id)arg1;
- (void)showRegisteredItems;
- (void)unregisterItemIDs:(id)arg1;
- (void)unregisterItemIDs:(id)arg1 completionBlock:(id /* block */)arg2;

@end
