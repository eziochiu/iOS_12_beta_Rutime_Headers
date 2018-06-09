/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard> {
    long long  _changeCount;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _itemProviders;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<WebItemProviderLoadResult> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _loadResults;
    long long  _numberOfItems;
    long long  _pendingOperationCount;
    struct RetainPtr<WebItemProviderRegistrationInfoList> { 
        void *m_ptr; 
    }  _stagedRegistrationInfoList;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _supportedTypeIdentifiers;
}

@property (nonatomic, readonly) NSArray *allDroppedFileURLs;
@property (nonatomic) long long changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *itemProviders;
@property (nonatomic, readonly) long long numberOfFiles;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long pendingOperationCount;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
- (id)allDroppedFileURLs;
- (long long)changeCount;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)decrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)arg1 synchronousTimeout:(double)arg2;
- (void)enumerateItemProvidersWithBlock:(id /* block */)arg1;
- (bool)hasPendingOperation;
- (void)incrementPendingOperationCount;
- (id)init;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (id)itemProviders;
- (long long)numberOfFiles;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (long long)pendingOperationCount;
- (id)preferredFileUploadURLAtIndex:(unsigned long long)arg1 fileType:(id*)arg2;
- (void)setChangeCount:(long long)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (void)setPendingOperationCount:(long long)arg1;
- (void)stageRegistrationList:(id)arg1;
- (id)takeRegistrationList;
- (id)typeIdentifiersToLoadForRegisteredTypeIdentfiers:(id)arg1;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
