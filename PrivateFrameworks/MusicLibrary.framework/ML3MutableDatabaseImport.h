/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) bool isServerImport;
@property (nonatomic, copy) NSString *libraryPath;
@property (getter=isPendingMatch, nonatomic) bool pendingMatch;
@property (nonatomic, copy) NSData *playlistData;
@property (nonatomic) bool playlistsAreLibraryOwnedContent;
@property (nonatomic) long long preferredVideoQuality;
@property (getter=isResetSync, nonatomic) bool resetSync;
@property (getter=isSagaEnabled, nonatomic) bool sagaEnabled;
@property (nonatomic) long long storeAccountID;
@property (getter=isSuspendable, nonatomic) bool suspendable;
@property (nonatomic, copy) NSString *syncAnchor;
@property (nonatomic, copy) NSString *syncLibraryID;
@property (nonatomic, copy) NSData *trackData;
@property (nonatomic) bool tracksAreLibraryOwnedContent;

- (void)setFileHandle:(id)arg1;
- (void)setHomeSharingBasePlaylistID:(unsigned int)arg1;
- (void)setIsServerImport:(bool)arg1;
- (void)setLibraryPath:(id)arg1;
- (void)setPendingMatch:(bool)arg1;
- (void)setPlaylistData:(id)arg1;
- (void)setPlaylistsAreLibraryOwnedContent:(bool)arg1;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setResetSync:(bool)arg1;
- (void)setSagaEnabled:(bool)arg1;
- (void)setStoreAccountID:(long long)arg1;
- (void)setSuspendable:(bool)arg1;
- (void)setSyncAnchor:(id)arg1;
- (void)setSyncLibraryID:(id)arg1;
- (void)setTrackData:(id)arg1;
- (void)setTracksAreLibraryOwnedContent:(bool)arg1;

@end
