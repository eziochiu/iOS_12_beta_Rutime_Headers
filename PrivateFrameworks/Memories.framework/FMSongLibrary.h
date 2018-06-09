/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FMSongLibrary : NSObject {
    NSMutableSet * _assetsInFlight;
    FlexCloudManager * _cloudManager;
    bool  _contactedCloud;
    FlexReachability * _flexReachability;
    long long  _networkStatus;
    bool  _networkingIsDisabled;
    NSDictionary * _options;
    NSMutableArray * _songs;
    NSMutableDictionary * _songsByUID;
}

@property (nonatomic, retain) NSMutableSet *assetsInFlight;
@property (nonatomic, retain) FlexCloudManager *cloudManager;
@property (nonatomic) bool contactedCloud;
@property (nonatomic, retain) FlexReachability *flexReachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic, readonly) bool networkingIsDisabled;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, retain) NSMutableArray *songs;
@property (nonatomic, retain) NSMutableDictionary *songsByUID;

- (void).cxx_destruct;
- (void)_createCloudManager;
- (void)_downloadProgressChanged:(id)arg1;
- (void)_loadBundledSongs;
- (void)_loadCachedSongs;
- (void)_notifySongDownloadInProgressChanged:(bool)arg1;
- (void)_notifySongsChanged:(id)arg1;
- (id)_registerSongs:(id)arg1;
- (void)_setupReachability;
- (void)_updateFromCloud;
- (id)assetsInFlight;
- (void)cancelDownloadOfAllAssets;
- (id)cloudManager;
- (bool)contactedCloud;
- (void)dealloc;
- (id)fetchSongWithUID:(id)arg1;
- (id)fetchSongsWithOptions:(id)arg1;
- (id)flexReachability;
- (id)initWithOptions:(id)arg1;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (long long)networkStatus;
- (void)networkStatusChanged:(id)arg1;
- (bool)networkingIsDisabled;
- (id)options;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)arg1;
- (id)registerSongBundleAtPath:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (void)setAssetsInFlight:(id)arg1;
- (void)setCloudManager:(id)arg1;
- (void)setContactedCloud:(bool)arg1;
- (void)setFlexReachability:(id)arg1;
- (void)setNetworkStatus:(long long)arg1;
- (void)setSongs:(id)arg1;
- (void)setSongsByUID:(id)arg1;
- (id)songs;
- (id)songsByUID;
- (bool)supportForCloud;
- (void)unregisterSongWithID:(id)arg1;

@end
