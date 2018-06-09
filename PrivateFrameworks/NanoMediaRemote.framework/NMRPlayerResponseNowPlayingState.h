/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying> {
    MPCPlayerResponse * _response;
}

- (void).cxx_destruct;
- (id)_nowPlayingRadioStation;
- (id)_nowPlayingSong;
- (id)album;
- (id)applicationBundleIdentifier;
- (id)applicationDisplayName;
- (id)artist;
- (id)artworkImageData;
- (long long)banCommandPresentationStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (double)elapsedTimeAtLastUpdate;
- (double)fastForwardTimeInterval;
- (id)identifiers;
- (id)initWithPlayerResponse:(id)arg1;
- (bool)isAddToLibraryActive;
- (bool)isAddToLibraryCommandEnabled;
- (bool)isAddToLibraryCommandSupported;
- (bool)isAdvertisement;
- (bool)isAlwaysLive;
- (bool)isBanCommandEnabled;
- (bool)isBanCommandSupported;
- (bool)isBannedActive;
- (bool)isBookmarkCommandEnabled;
- (bool)isBookmarkCommandSupported;
- (bool)isBookmarkedActive;
- (bool)isExplicitTrack;
- (bool)isLikeCommandEnabled;
- (bool)isLikeCommandSupported;
- (bool)isLikedActive;
- (bool)isPlaybackRateCommandSupported;
- (bool)isRepeatModeCommandSupported;
- (bool)isShuffleModeCommandSupported;
- (bool)isSkipBackwardCommandEnabled;
- (bool)isSkipForwardCommandEnabled;
- (id)itemAlbumPersistentID;
- (id)itemCompanionPersistentID;
- (id)itemPersistentID;
- (long long)likeCommandPresentationStyle;
- (id)localizedBanTitle;
- (id)localizedBookmarkTitle;
- (id)localizedLikeTitle;
- (id)nextTrackCommandEnabled;
- (float)playbackRate;
- (unsigned int)playbackState;
- (float)preferredPlaybackRate;
- (id)previousTrackCommandEnabled;
- (id)radioStationHash;
- (id)radioStationIdentifier;
- (id)radioStationName;
- (int)repeatMode;
- (double)rewindTimeInterval;
- (int)shuffleMode;
- (id)storeAdamID;
- (id)timestamp;
- (id)title;

@end
