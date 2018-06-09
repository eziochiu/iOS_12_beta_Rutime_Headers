/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicDefaults : MPUApplicationDefaults {
    bool  _internalInstall;
    long long  _playbackSpeed;
}

@property (getter=isActivityContinuationEnabled, nonatomic, readonly) bool activityContinuationEnabled;
@property (nonatomic, retain) NSDate *dateWhenUserLastSawWelcomeScreen;
@property (nonatomic, readonly) int eqPreset;
@property (getter=isGeniusUserEnabled, nonatomic) bool geniusUserEnabled;
@property (getter=isGroupByAlbumArtistEnabled, nonatomic, readonly) bool groupByAlbumArtistEnabled;
@property (nonatomic, readonly) bool hasSetVersionOfNoThanksOption;
@property (nonatomic, readonly) bool hasSetVersionOfNotNowOption;
@property (nonatomic) bool hasUserRequestedSubscriptionHidden;
@property (getter=isInternalInstall, nonatomic) bool internalInstall;
@property (nonatomic) bool lastKnownHasActiveSubscription;
@property (nonatomic, retain) NSNumber *lastKnownStoreAccountUniqueIdentifier;
@property (nonatomic) bool lastKnownSupportsConnect;
@property (nonatomic, copy) NSDictionary *lastKnownTabConfigurations;
@property (nonatomic) unsigned long long lastModifiedPlaylistID;
@property (nonatomic, retain) NSDate *lastMyMusicSearchDate;
@property (getter=isPinningEnabled, nonatomic, readonly) bool pinningEnabled;
@property (nonatomic) long long playbackSpeed;
@property (nonatomic) bool playlistsOverviewShowsOnlyOfflinePlaylists;
@property (nonatomic) float popularityIndicatorThreshold;
@property (nonatomic) long long repeatType;
@property (nonatomic) bool searchShouldDefaultToMyMusic;
@property (nonatomic, copy) NSString *selectedLibraryViewIdentifier;
@property (nonatomic, copy) NSString *selectedPlaylistsOverviewFilter;
@property (getter=isShakeToShuffleEnabled, nonatomic, readonly) bool shakeToShuffleEnabled;
@property (getter=isShowCloudMediaEnabled, nonatomic) bool showCloudMediaEnabled;
@property (nonatomic) long long shuffleType;
@property (getter=isSortByArtistEnabled, nonatomic, readonly) bool sortByArtistEnabled;
@property (getter=isSoundCheckEnabled, nonatomic, readonly) bool soundCheckEnabled;
@property (nonatomic, copy) NSArray *tabBarOrdering;
@property (nonatomic) long long versionOfFormerFreeTrialWhenUserLastSawWelcomeScreen;
@property (nonatomic) long long versionOfNoThanksWhenUserLastSawWelcomeScreen;
@property (nonatomic) long long versionOfNotNowWhenUserLastSawWelcomeScreen;
@property (nonatomic, retain) NSString *versionOfOSWhenFormerFreeTrialWelcomeScreenWasShown;
@property (nonatomic, retain) NSString *versionOfOSWhenNoThanksWelcomeScreenWasShown;
@property (nonatomic, retain) NSString *versionOfOSWhenNotNowWelcomeScreenWasShown;

+ (id)sharedDefaults;

- (void)beginObservingDefaultsChanges;
- (id)dateWhenUserLastSawWelcomeScreen;
- (void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
- (int)eqPreset;
- (bool)hasSetVersionOfNoThanksOption;
- (bool)hasSetVersionOfNotNowOption;
- (bool)hasUserRequestedSubscriptionHidden;
- (bool)isActivityContinuationEnabled;
- (bool)isGeniusUserEnabled;
- (bool)isGroupByAlbumArtistEnabled;
- (bool)isInternalInstall;
- (bool)isPinningEnabled;
- (bool)isShakeToShuffleEnabled;
- (bool)isShowCloudMediaEnabled;
- (bool)isSortByArtistEnabled;
- (bool)isSoundCheckEnabled;
- (bool)lastKnownHasActiveSubscription;
- (id)lastKnownStoreAccountUniqueIdentifier;
- (bool)lastKnownSupportsConnect;
- (id)lastKnownTabConfigurations;
- (unsigned long long)lastModifiedPlaylistID;
- (id)lastMyMusicSearchDate;
- (void)migrateTabBarOrderingIfNeeded;
- (long long)playbackSpeed;
- (bool)playlistsOverviewShowsOnlyOfflinePlaylists;
- (float)popularityIndicatorThreshold;
- (long long)repeatType;
- (bool)searchShouldDefaultToMyMusic;
- (id)selectedLibraryViewIdentifier;
- (id)selectedPlaylistsOverviewFilter;
- (void)setDateWhenUserLastSawWelcomeScreen:(id)arg1;
- (void)setGeniusUserEnabled:(bool)arg1;
- (void)setHasUserRequestedSubscriptionHidden:(bool)arg1;
- (void)setInternalInstall:(bool)arg1;
- (void)setLastKnownHasActiveSubscription:(bool)arg1;
- (void)setLastKnownStoreAccountUniqueIdentifier:(id)arg1;
- (void)setLastKnownSupportsConnect:(bool)arg1;
- (void)setLastKnownTabConfigurations:(id)arg1;
- (void)setLastModifiedPlaylistID:(unsigned long long)arg1;
- (void)setLastMyMusicSearchDate:(id)arg1;
- (void)setPlaybackSpeed:(long long)arg1;
- (void)setPlaylistsOverviewShowsOnlyOfflinePlaylists:(bool)arg1;
- (void)setPopularityIndicatorThreshold:(float)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setSearchShouldDefaultToMyMusic:(bool)arg1;
- (void)setSelectedLibraryViewIdentifier:(id)arg1;
- (void)setSelectedPlaylistsOverviewFilter:(id)arg1;
- (void)setShowCloudMediaEnabled:(bool)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setTabBarOrdering:(id)arg1;
- (void)setVersionOfFormerFreeTrialWhenUserLastSawWelcomeScreen:(long long)arg1;
- (void)setVersionOfNoThanksWhenUserLastSawWelcomeScreen:(long long)arg1;
- (void)setVersionOfNotNowWhenUserLastSawWelcomeScreen:(long long)arg1;
- (void)setVersionOfOSWhenFormerFreeTrialWelcomeScreenWasShown:(id)arg1;
- (void)setVersionOfOSWhenNoThanksWelcomeScreenWasShown:(id)arg1;
- (void)setVersionOfOSWhenNotNowWelcomeScreenWasShown:(id)arg1;
- (long long)shuffleType;
- (id)tabBarOrdering;
- (long long)versionOfFormerFreeTrialWhenUserLastSawWelcomeScreen;
- (long long)versionOfNoThanksWhenUserLastSawWelcomeScreen;
- (long long)versionOfNotNowWhenUserLastSawWelcomeScreen;
- (id)versionOfOSWhenFormerFreeTrialWelcomeScreenWasShown;
- (id)versionOfOSWhenNoThanksWelcomeScreenWasShown;
- (id)versionOfOSWhenNotNowWelcomeScreenWasShown;

@end
