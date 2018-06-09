/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderManager : NSObject {
    NSMutableDictionary * _completionHandlersByItemID;
    NSXPCConnection<FPDDaemon> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSURL * _documentStorageURL;
    NSFileProviderDomain * _domain;
    NSArray * _presentedFiles;
    NSString * _providerIdentifier;
    <FPDRemoteFileProvider><NSXPCProxyCreating> * _remoteFileProvider;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSObject<OS_dispatch_semaphore> * _sem;
    NSObject<OS_dispatch_queue> * _signalUpdateQueue;
    NSObject<OS_dispatch_source> * _signalUpdateSource;
}

@property (nonatomic, readonly) NSURL *documentStorageURL;
@property (copy) NSArray *presentedFiles;
@property (nonatomic, readonly) NSString *providerIdentifier;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (void)addDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)defaultManager;
+ (void)getDomainsWithCompletionHandler:(id /* block */)arg1;
+ (id)managerForDomain:(id)arg1;
+ (id)placeholderURLForURL:(id)arg1;
+ (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeAllDomainsWithCompletionHandler:(id /* block */)arg1;
+ (void)removeDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)writePlaceholderAtURL:(id)arg1 withDictionary:(id)arg2 error:(id*)arg3;
+ (bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_cacheProviderInfo;
- (void)_callCompletionHandlers:(id)arg1 error:(id)arg2;
- (id)_connection;
- (void)_failToSignalPendingChangesWithError:(id)arg1 completionHandlersByItemID:(id)arg2;
- (id)_initWithProviderIdentifier:(id)arg1;
- (id)_initWithProviderIdentifier:(id)arg1 domain:(id)arg2;
- (void)_signalPendingEnumerators;
- (void)dealloc;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)documentStorageURL;
- (void)fetchRemoteFileProviderSynchronously:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)itemIDForIdentifier:(id)arg1;
- (id)presentedFiles;
- (id)providerIdentifier;
- (void)registerURLSessionTask:(id)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)remoteFileProviderWithCompletionHandler:(id /* block */)arg1;
- (void)setPresentedFiles:(id)arg1;
- (void)signalEnumeratorForContainerItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_sharedProviderManager;

@end
