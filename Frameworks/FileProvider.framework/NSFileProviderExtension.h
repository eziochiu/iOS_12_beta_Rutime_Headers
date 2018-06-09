/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling> {
    NSFileProviderDomain * _domain;
    NSObject<OS_dispatch_queue> * _extensionDispatchQueue;
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSURL * _memberQueueDocumentStorageURL;
    NSString * _memberQueueProviderIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileProviderDomain *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSURL *memberQueueDocumentStorageURL;
@property (nonatomic, copy) NSString *memberQueueProviderIdentifier;
@property (readonly) Class superclass;

+ (id)_relativeComponentsOfURL:(id)arg1 fromBaseURL:(id)arg2;
+ (id)_resourceIDOfURL:(id)arg1 outError:(id*)arg2;
+ (id)placeholderURLForURL:(id)arg1;
+ (bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (id)_documentStorageURL;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)createDirectoryWithName:(id)arg1 inParentItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)cursorWithProperties:(id)arg1;
- (void)deleteItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)documentStorageURL;
- (id)domain;
- (id)enumeratorForContainerItemIdentifier:(id)arg1 error:(id*)arg2;
- (id)enumeratorForProperties:(id)arg1;
- (id)exportedObjectForMessageInterface:(id)arg1 itemIdentifier:(id)arg2 error:(id*)arg3;
- (id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(struct CGSize { double x1; double x2; })arg2 perThumbnailCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)importDocumentAtURL:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)itemChangedAtURL:(id)arg1;
- (id)itemForIdentifier:(id)arg1 error:(id*)arg2;
- (id)memberQueue;
- (id)memberQueueDocumentStorageURL;
- (id)memberQueueProviderIdentifier;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (id)protocolForMessageInterface:(id)arg1;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)providerIdentifier;
- (void)registerUpdateHandlerForPersistentIdentifier:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)renameItemWithIdentifier:(id)arg1 toName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 newName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDomain:(id)arg1;
- (void)setFavoriteRank:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastUsedDate:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueDocumentStorageURL:(id)arg1;
- (void)setMemberQueueProviderIdentifier:(id)arg1;
- (void)setTagData:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProvidingItemAtURL:(id)arg1;
- (id)supportedMessageInterfaceNamesForItemWithIdentifier:(id)arg1;
- (id)supportedServiceSourcesForItemIdentifier:(id)arg1 error:(id*)arg2;
- (void)trashItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterUpdateHandlerForPersistentIdentifier:(id)arg1;
- (void)untrashItemWithIdentifier:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
