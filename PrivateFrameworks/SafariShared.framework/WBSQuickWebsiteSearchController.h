/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate> {
    bool  _hasBegunLoadingFromDisk;
    NSMutableDictionary * _hostSetsByOpenSearchDescriptionDocumentURLString;
    NSMutableDictionary * _openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary * _quickWebsiteSearchProvidersByHost;
    NSObject<OS_dispatch_queue> * _quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    bool  _quickWebsiteSearchProvidersLoadedFromDisk;
    NSURL * _searchDescriptionsURL;
    WBSCoalescedAsynchronousWriter * _writer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *quickWebsiteSearchHosts;
@property bool quickWebsiteSearchProvidersLoadedFromDisk;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (void)_didFinishLoadingFromDisk;
- (id)_initWithSearchDescriptionsURL:(id)arg1;
- (void)_loadFromDisk;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (bool)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_resetCachedDataWithCompletionHandler:(id /* block */)arg1;
- (void)_saveToDiskSoon;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (bool)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)beginLoadingFromDiskIfNeeded;
- (void)clear;
- (void)didPerformSearchWithProvider:(id)arg1;
- (void)noteProvidersAreStale;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (id)providerForSourcePageURLString:(id)arg1;
- (id)providersMatchingQueryString:(id)arg1;
- (id)quickWebsiteSearchHosts;
- (id)quickWebsiteSearchProvider:(id)arg1 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg2;
- (bool)quickWebsiteSearchProvidersLoadedFromDisk;
- (void)removeProviderWithHost:(id)arg1;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)removeProvidersWithHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setQuickWebsiteSearchProvidersLoadedFromDisk:(bool)arg1;
- (void)setSearchURLTemplateFromForm:(id)arg1 forSourcePageURLString:(id)arg2;

@end
