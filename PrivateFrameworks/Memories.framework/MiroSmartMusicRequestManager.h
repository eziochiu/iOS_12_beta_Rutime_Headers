/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSmartMusicRequestManager : VEiOSSharedObject {
    bool  _allowsDownloads;
    double  _initTime;
    FMSongLibrary * _library;
    NSMutableDictionary * _localSongsByMood;
    MiroAutoEditLogger * _logger;
    NSSet * _moodIDSet;
    NSMutableArray * _moodsDownloading;
    NSArray * _observers;
}

@property (nonatomic) bool allowsDownloads;
@property (nonatomic) double initTime;
@property (nonatomic, readonly) FMSongLibrary *library;
@property (nonatomic, retain) NSMutableDictionary *localSongsByMood;
@property (nonatomic, retain) MiroAutoEditLogger *logger;
@property (nonatomic, retain) NSSet *moodIDSet;
@property (nonatomic, retain) NSMutableArray *moodsDownloading;
@property (retain) NSArray *observers;

- (void).cxx_destruct;
- (id)_addObserversOnSongLibrary:(id)arg1 indicateNetworkActivity:(bool)arg2;
- (id)_candidateSongMappingsForKeywords:(id)arg1;
- (id)_candidateSongsForMoodID:(id)arg1;
- (void)_downloadInProgressChanged:(id)arg1;
- (id)_fetchSongsWithKeywords:(id)arg1;
- (id)_moodIDforSongUID:(id)arg1;
- (id)_randomSongUIDForCandidateSongs:(id)arg1;
- (id)_randomSongUIDForCandidateSongs:(id)arg1 withPrioritySet:(id)arg2;
- (void)_removeConflicts;
- (void)_removeObserversOnLibrary;
- (void)_requestDownloadForMoodID:(id)arg1;
- (void)_setup;
- (void)_updateLocalSongsByMood;
- (bool)allowsDownloads;
- (void)dealloc;
- (id)fetchAllSongs;
- (id)fetchSongWithUID:(id)arg1;
- (id)init;
- (double)initTime;
- (id)library;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)localSongsByMood;
- (id)localSongsForMoodID:(id)arg1;
- (void)logSongLibraryInitTimeWithLogger:(id)arg1;
- (id)logger;
- (void)markSongUIDAsRequested:(id)arg1;
- (id)moodIDForSong:(id)arg1;
- (id)moodIDSet;
- (id)moodsDownloading;
- (id)observers;
- (void)purgeAllLocalCachedAssets;
- (id)randomSongUIDForKeywords:(id)arg1;
- (id)randomSongUIDForMoodID:(id)arg1;
- (id)randomSongUIDForMoodID:(id)arg1 excludingSongs:(id)arg2;
- (void)setAllowsDownloads:(bool)arg1;
- (void)setInitTime:(double)arg1;
- (void)setLocalSongsByMood:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMoodIDSet:(id)arg1;
- (void)setMoodsDownloading:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)songHasSpecialKeyword:(id)arg1;
- (id)songLibrary;
- (void)tearDownSongLibrary;
- (id)unusedLocalSongsForMoodID:(id)arg1;

@end
