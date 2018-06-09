/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling> {
    PGManager * _pgGraphManager;
    unsigned long long  _requestCount;
    PFDispatchQueue * _requestQueue;
    PHAServiceClientHandler * _serviceClientHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginGraphOperation;
- (void)_endGraphOperation;
- (id)currentlyUnavailableError;
- (id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)handleOperation:(id)arg1;
- (id)initWithServiceClientHandler:(id)arg1;
- (id)libraryTemporarilyUnavailableError;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1;
- (id)phaGraphManager;
- (void)photoAnalysisGraphManager:(id)arg1 willShutdownGraph:(id)arg2;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (bool)wantsLiveGraphUpdates;

@end
