/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLGeniusPlaylistController : NSObject {
    void * _echo;
    void * _echo_cluster_playlist;
    void * _echo_library;
    NSMutableData * _sharedBlobMutableData;
}

+ (unsigned long long)defaultMinTrackCount;
+ (unsigned long long)defaultTrackCount;
+ (id)geniusTracksForSeedTrack:(id)arg1 error:(id*)arg2;
+ (bool)hasGeniusDataAvailable;
+ (bool)hasGeniusFeatureEnabled;
+ (void)ignoreUnusedWarnings;
+ (id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2;
+ (void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(id /* block */)arg3;
+ (bool)useFakeGeniusData;

- (void).cxx_destruct;
- (bool)_canIncludeTrackInGeniusContainer:(id)arg1;
- (bool)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned long long)arg2 stride:(int)arg3;
- (bool)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3;
- (bool)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)arg1 error:(id*)arg2;
- (id)_sharedBlobMutableData;
- (void)dealloc;
- (id)init;
- (id)tracksFromClusterForCount:(unsigned long long)arg1 error:(id*)arg2;

@end
