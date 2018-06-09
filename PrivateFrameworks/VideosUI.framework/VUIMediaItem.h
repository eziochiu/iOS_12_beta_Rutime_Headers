/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaItem : VUIMediaEntity {
    NSNumber * _isPlayable;
}

@property (nonatomic, readonly, copy) NSNumber *assetType;
@property (nonatomic, copy) NSNumber *bookmark;
@property (nonatomic, readonly, copy) VUIMediaItemCredits *credits;
@property (nonatomic, readonly, copy) NSNumber *duration;
@property (nonatomic, readonly, copy) NSNumber *episodeNumber;
@property (nonatomic, readonly, copy) NSURL *extrasURL;
@property (nonatomic, copy) NSNumber *hasBeenPlayed;
@property (nonatomic, readonly, copy) NSNumber *isPlayable;
@property (nonatomic, readonly) MPMediaItem *mediaPlayerMediaItem;
@property (nonatomic, copy) NSNumber *playCount;
@property (nonatomic, readonly, copy) NSString *previewFrameImageIdentifier;
@property (nonatomic, copy) NSDate *rentalExpirationDate;
@property (nonatomic, readonly, copy) NSNumber *rentalPlaybackDuration;
@property (nonatomic, readonly, copy) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (nonatomic, readonly, copy) NSString *seasonTitle;
@property (nonatomic, readonly, copy) NSString *studio;

+ (id)_mediaItemWithMPMediaItem:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingPlayedState;

- (void).cxx_destruct;
- (id)assetType;
- (id)bookmark;
- (id)creationDate;
- (id)credits;
- (id)description;
- (id)duration;
- (id)episodeNumber;
- (id)extrasURL;
- (id)hasBeenPlayed;
- (id)isPlayable;
- (id)lastPlayedDate;
- (id)mediaPlayerMediaItem;
- (id)modifiedDate;
- (id)playCount;
- (id)previewFrameImageIdentifier;
- (id)rentalExpirationDate;
- (id)rentalPlaybackDuration;
- (id)seasonIdentifier;
- (id)seasonTitle;
- (void)setBookmark:(id)arg1;
- (void)setHasBeenPlayed:(id)arg1;
- (void)setPlayCount:(id)arg1;
- (void)setRentalExpirationDate:(id)arg1;
- (id)studio;

@end
