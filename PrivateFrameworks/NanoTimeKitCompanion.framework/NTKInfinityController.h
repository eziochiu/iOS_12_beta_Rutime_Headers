/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKInfinityController : NSObject {
    unsigned long long  _controllerMode;
    unsigned long long  _currentCharacter;
    NTKInfinityListing * _currentListing;
    long long  _currentReviewListingIndex;
    unsigned long long  _currentStyle;
    NTKInfinityDataSource * _dataSource;
    NTKInfinityListing * _preparedListing;
    NSMutableOrderedSet * _recentlyPlayedActions;
    NSMutableOrderedSet * _recentlyPlayedMagicMoments;
    unsigned long long  _reviewDirection;
    NSArray * _reviewModeListings;
    bool  _shouldForceActionForTap;
}

@property (nonatomic) unsigned long long controllerMode;
@property (nonatomic, retain) NTKInfinityListing *currentListing;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic, retain) NTKInfinityListing *preparedListing;

- (void).cxx_destruct;
- (id)_listingsOfTypes:(id)arg1;
- (unsigned long long)_maxRecentlyPlayedActions;
- (unsigned long long)_maxRecentlyPlayedMagicMoments;
- (unsigned long long)_modeFromStyle:(unsigned long long)arg1;
- (id)_nextReviewListing;
- (id)_nextToyboxListing;
- (id)_recentlyPlayedListings;
- (unsigned long long)characterFromStyle:(unsigned long long)arg1;
- (id)complicationColorForStyle:(unsigned long long)arg1;
- (unsigned long long)controllerMode;
- (id)currentComplicationColor;
- (id)currentListing;
- (id)currentPosterImage;
- (long long)currentReviewIndex;
- (unsigned long long)currentStyle;
- (id)currentStyleComplicationColor;
- (id)initForDevice:(id)arg1;
- (void)invalidateCurrentListing;
- (void)invalidatePreparedListing;
- (id)nextListing;
- (id)nextQueueListing;
- (id)posterImageForStyle:(unsigned long long)arg1;
- (void)prepareListing;
- (void)prepareUserTapAction;
- (id)preparedListing;
- (void)setControllerMode:(unsigned long long)arg1;
- (void)setCurrentListing:(id)arg1;
- (void)setCurrentStyle:(unsigned long long)arg1;
- (void)setPreparedListing:(id)arg1;
- (void)setSequentialDirection:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)startedPlayingListing:(id)arg1;
- (unsigned long long)totalReviewListings;

@end
