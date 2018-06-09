/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueueFeeder : NSObject <MPQueueBehaviorManaging, MusicEntityValueProviding, NSSecureCoding> {
    long long  _activeShuffleType;
    <MPQueueFeederDelegate> * _delegate;
    MPMutableBidirectionalDictionary * _exportableItemIDs;
    MPModelPlayEvent * _modelPlayEvent;
    NSMutableDictionary * _nextStartTimes;
    NSString * _playActivityFeatureName;
    NSData * _playActivityRecommendationData;
    NSString * _playbackContextUniqueIdentifier;
    long long  _repeatType;
    bool  _requiresQueueChangeVerification;
    long long  _shuffleType;
    NSString * _siriReferenceIdentifier;
    NSDictionary * _siriWHAMetricsInfo;
    struct { 
        long long numberOfAvailableSkips; 
        long long skipFrequency; 
        double skipInterval; 
    }  _skipLimit;
    unsigned long long  _state;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) MPCContentItemIdentifierCollection *MPC_contentItemIdentifierCollection;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (nonatomic) long long activeShuffleType;
@property (nonatomic, readonly) bool allowsQueueResetWhenReachingEnd;
@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) bool canReorder;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPQueueFeederDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (nonatomic, readonly) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic, copy) NSString *playbackContextUniqueIdentifier;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, readonly) bool playerPreparesItemsForPlaybackAsynchronously;
@property (nonatomic, readonly) long long realRepeatType;
@property (nonatomic, readonly) long long realShuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic) bool requiresQueueChangeVerification;
@property (nonatomic) long long shuffleType;
@property (nonatomic, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, copy) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic) struct { long long x1; long long x2; double x3; } skipLimit;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;
+ (bool)supportsStateRestoration;

- (void).cxx_destruct;
- (bool)_canPurgeNextStartTimes;
- (id)_itemForIndex:(long long)arg1 queueIdentifier:(id)arg2;
- (long long)activeShuffleType;
- (bool)allowsQueueResetWhenReachingEnd;
- (bool)allowsUserVisibleUpcomingItems;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canReorder;
- (bool)canSeek;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItem;
- (bool)canSkipToPreviousItemForItem:(id)arg1;
- (id)contentItemIDAtIndex:(long long)arg1;
- (id)contentItemIDForQueueItemID:(id)arg1;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1 error:(id)arg2;
- (void)contentsDidChangeWithReplacementPlaybackContext:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (void)generateContentIDForItem:(id)arg1;
- (bool)hasItemForIndex:(unsigned long long)arg1;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (long long)indexForItemID:(id)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (void)invalidateAssets;
- (void)invalidateRealRepeatType;
- (void)invalidateRealShuffleType;
- (bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)itemForIdentifier:(id)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (id)itemForItemID:(id)arg1;
- (id)itemIDAtIndex:(long long)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)mediaItemForIdentifier:(id)arg1;
- (id)metadataItemForIdentifier:(id)arg1;
- (id)modelPlayEvent;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (id)playbackContextUniqueIdentifier;
- (id)playbackInfoForIdentifier:(id)arg1;
- (long long)playbackMode;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (bool)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id*)arg3;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)preferredLanguages;
- (id)queueIdentifierForItemID:(id)arg1;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(bool)arg2 completionHandler:(id /* block */)arg3;
- (long long)repeatType;
- (bool)requiresQueueChangeVerification;
- (void)restoreState:(id /* block */)arg1;
- (void)setActiveShuffleType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextStartTime:(double)arg1 forIndentifier:(id)arg2;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setPlaybackContextUniqueIdentifier:(id)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setRequiresQueueChangeVerification:(bool)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setSiriReferenceIdentifier:(id)arg1;
- (void)setSiriWHAMetricsInfo:(id)arg1;
- (void)setSkipLimit:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (long long)shuffleType;
- (id)siriReferenceIdentifier;
- (id)siriWHAMetricsInfo;
- (struct { long long x1; long long x2; double x3; })skipLimit;
- (unsigned long long)state;
- (id)uniqueIdentifier;
- (bool)userCanChangeShuffleAndRepeatType;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)MPC_contentItemIdentifierCollection;
- (bool)isRadioQueueFeeder;

@end
