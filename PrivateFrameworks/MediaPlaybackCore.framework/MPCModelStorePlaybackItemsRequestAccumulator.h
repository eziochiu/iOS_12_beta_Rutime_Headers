/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {
    bool  _allowsExplicitContent;
    long long  _batchSize;
    long long  _currentBatchCount;
    long long  _defaultLibraryPersonalizationStyle;
    NSDate * _earliestExpirationDate;
    NSMutableDictionary * _equivalencyMapping;
    bool  _lastStoreIDBasedSectionWasPlaylist;
    NSArray * _orderedStoreIDs;
    NSMutableArray * _pendingOrderedStoreIDs;
    NSMutableArray * _pendingPrioritizedStoreIDs;
    MPMutableSectionedCollection * _progressiveContentDescriptors;
    NSMutableDictionary * _receivedStoreIDs;
    MPCModelStorePlaybackItemsRequest * _request;
    MPStoreModelGenericObjectBuilder * _resultsGenericObjectBuilder;
    NSMutableDictionary * _sectionIndexToDeletedIndexSet;
    bool  _shouldLibraryPersonalize;
    NSMutableDictionary * _storeIDToIndexPathReference;
    long long  _storePersonalizationStyle;
    long long  _unknownEndpointLibraryPersonalizationStyle;
    NSMutableArray * _unprocessedItemIdentifiers;
}

@property (nonatomic, readonly) bool allowsExplicitContent;
@property (nonatomic) long long batchSize;
@property (nonatomic, readonly, copy) NSDate *earliestExpirationDate;
@property (nonatomic, readonly, copy) NSDictionary *equivalencyMapping;
@property (nonatomic, readonly, copy) MPCModelStorePlaybackItemsRequest *request;
@property (nonatomic, readonly) bool shouldLibraryPersonalize;
@property (nonatomic, readonly) long long storePersonalizationStyle;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2;
- (long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1;
- (struct _MPCModelStorePlaybackItemEligibility { bool x1; long long x2; })_eligibilityForItem:(id)arg1;
- (id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1;
- (id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(bool)arg3;
- (id)_originalIndexPathsForStoreID:(id)arg1;
- (void)_prepareRequestInformation;
- (void)_removeItemAtOriginalIndexPath:(id)arg1;
- (bool)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1;
- (bool)allowsExplicitContent;
- (long long)batchSize;
- (id)earliestExpirationDate;
- (id)equivalencyMapping;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; })handleResponse:(id)arg1;
- (id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(bool)arg2;
- (id)newStoreItemMetadataRequest;
- (id)request;
- (void)setBatchSize:(long long)arg1;
- (bool)shouldLibraryPersonalize;
- (long long)storePersonalizationStyle;
- (id)unpersonalizedContentDescriptors;

@end
