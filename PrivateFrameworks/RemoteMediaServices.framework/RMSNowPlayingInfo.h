/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSNowPlayingInfo : NSObject {
    NSString * _albumName;
    NSString * _artistName;
    bool  _canSkipNext;
    bool  _canSkipPrevious;
    bool  _canWishlist;
    unsigned long long  _databaseID;
    bool  _hasChapterData;
    unsigned long long  _itemID;
    bool  _likeable;
    long long  _likedState;
    long long  _mediaKind;
    long long  _playbackState;
    int  _revisionNumber;
    long long  _scrubbableState;
    double  _timeRemaining;
    double  _timestamp;
    double  _totalDuration;
    NSString * _trackName;
}

@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSString *artistName;
@property (nonatomic, readonly) NSString *artworkIdentifier;
@property (nonatomic) bool canSkipNext;
@property (nonatomic) bool canSkipPrevious;
@property (nonatomic) bool canWishlist;
@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) bool hasChapterData;
@property (nonatomic) unsigned long long itemID;
@property (getter=isLikeable, nonatomic) bool likeable;
@property (nonatomic) long long likedState;
@property (nonatomic) long long mediaKind;
@property (nonatomic) long long playbackState;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) int revisionNumber;
@property (nonatomic) long long scrubbableState;
@property (nonatomic) double timeRemaining;
@property (nonatomic) double timestamp;
@property (nonatomic) double totalDuration;
@property (nonatomic, retain) NSString *trackName;

- (void).cxx_destruct;
- (id)albumName;
- (id)artistName;
- (id)artworkIdentifier;
- (bool)canSkipNext;
- (bool)canSkipPrevious;
- (bool)canWishlist;
- (unsigned long long)databaseID;
- (id)description;
- (bool)hasChapterData;
- (id)initWithProtobuf:(id)arg1;
- (bool)isLikeable;
- (bool)isPlaying;
- (unsigned long long)itemID;
- (long long)likedState;
- (long long)mediaKind;
- (long long)playbackState;
- (id)protobuf;
- (int)revisionNumber;
- (long long)scrubbableState;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setCanSkipNext:(bool)arg1;
- (void)setCanSkipPrevious:(bool)arg1;
- (void)setCanWishlist:(bool)arg1;
- (void)setDatabaseID:(unsigned long long)arg1;
- (void)setHasChapterData:(bool)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setLikeable:(bool)arg1;
- (void)setLikedState:(long long)arg1;
- (void)setMediaKind:(long long)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setRevisionNumber:(int)arg1;
- (void)setScrubbableState:(long long)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setTrackName:(id)arg1;
- (double)timeRemaining;
- (double)timestamp;
- (double)totalDuration;
- (id)trackName;

@end
