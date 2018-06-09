/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelQueueFeeder : MPQueueFeeder <MPCQueueBehaviorManaging, MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _activeModelGenericAVItems;
    NSDictionary * _assetStoreFronts;
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    long long  _currentRevisionID;
    NSDictionary * _endTimeModifications;
    id /* block */  _finalTracklistLoadingCompletionHandler;
    bool  _hasFoundStartItem;
    bool  _hasLoadedFinalResponse;
    bool  _hasShuffledInitialResult;
    bool  _isSiriInitiated;
    NSObject<OS_dispatch_queue> * _itemListChangeDetectionQueue;
    NSOperationQueue * _operationQueue;
    MPPlaceholderAVItem * _placeholderAVItem;
    MPPlaybackPlaceholderMediaItem * _placeholderMediaItem;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    long long  _preferredStartIndexFromPlaybackContext;
    ICUserIdentity * _proactiveCacheIdentity;
    MPModelRequest * _request;
    bool  _requireFinalTracklist;
    MPModelResponse * _response;
    struct map<unsigned long, MPIdentifierSet *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MPIdentifierSet *> > > { 
        struct __tree<std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, MPIdentifierSet *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _retrievedIndexToIdentifiers;
    NSString * _rtcReportingPlayQueueSourceIdentifier;
    MPShuffleController * _shuffleController;
    NSString * _siriAssetInfo;
    MPIdentifierSet * _startItemIdentifiers;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

+ (id)requiredPropertiesForStaticMediaClips;
+ (bool)supportsSecureCoding;
+ (bool)supportsStateRestoration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (long long)_currentPreferredStartIndexWithFinalResponse:(bool)arg1;
- (void)_endBackgroundTaskAssertion;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;
- (id)_genericObjectForModelObject:(id)arg1;
- (bool)_handleFinalResponseWithPreferredStartIndex:(unsigned long long)arg1;
- (bool)_hasPlaceholderItemAtIndex:(unsigned long long)arg1;
- (id)_identifierSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfItemWithIdentifier:(id)arg1 shouldIgnoreShuffle:(bool)arg2;
- (id)_modelObjectAtIndex:(unsigned long long)arg1;
- (id)_newModelRequest;
- (void)_playbackUserDefaultsMusicRepeatTypeDidChangeNotification:(id)arg1;
- (void)_playbackUserDefaultsMusicShuffleTypeDidChangeNotification:(id)arg1;
- (void)_registerNotificationsForResponse:(id)arg1;
- (void)_reloadForInitialRequest;
- (void)_reloadModelRequestForInvalidation;
- (void)_reloadModelRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (id)_resultsForShuffleController;
- (bool)_shouldRecordReturnedItemIDs;
- (unsigned long long)_songShuffledIndexForIndex:(unsigned long long)arg1;
- (void)_unregisterNotificationsForResponse:(id)arg1;
- (void)_updateProactiveCaching;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (unsigned long long)itemCountForShuffleController:(id)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)mediaItemForIdentifier:(id)arg1;
- (id)modelPlayEvent;
- (id)playbackInfoForIdentifier:(id)arg1;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)query;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)restoreState:(id /* block */)arg1;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (bool)supportsAddToQueue;

@end
