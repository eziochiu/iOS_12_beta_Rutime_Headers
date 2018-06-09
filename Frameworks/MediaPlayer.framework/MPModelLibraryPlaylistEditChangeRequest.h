/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <NSCopying> {
    NSString * _authorStoreIdentifier;
    NSNumber * _curatorPlaylist;
    bool  _didSetPlaylistUserImage;
    NSNumber * _isOwner;
    MPMediaLibrary * _mediaLibrary;
    MPModelPlaylist * _parentPlaylist;
    MPModelPlaylist * _playlist;
    NSString * _playlistDescription;
    MPSectionedCollection * _playlistEntries;
    NSString * _playlistName;
    UIImage * _playlistUserImage;
    NSNumber * _publicPlaylist;
    bool  _shouldCreatePlaylist;
    NSNumber * _visiblePlaylist;
}

@property (nonatomic, copy) NSString *authorStoreIdentifier;
@property (getter=isCuratorPlaylist, nonatomic, copy) NSNumber *curatorPlaylist;
@property (nonatomic, readonly) bool didSetPlaylistUserImage;
@property (nonatomic, copy) NSNumber *isOwner;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPModelPlaylist *parentPlaylist;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, copy) NSString *playlistDescription;
@property (nonatomic, copy) MPSectionedCollection *playlistEntries;
@property (nonatomic, copy) NSString *playlistName;
@property (nonatomic, retain) UIImage *playlistUserImage;
@property (getter=isPublicPlaylist, nonatomic, copy) NSNumber *publicPlaylist;
@property (nonatomic) bool shouldCreatePlaylist;
@property (getter=isVisiblePlaylist, nonatomic, copy) NSNumber *visiblePlaylist;

+ (id)requiredPlaylistEntryProperties;

- (void).cxx_destruct;
- (id)authorStoreIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)didSetPlaylistUserImage;
- (id)init;
- (id)isCuratorPlaylist;
- (id)isOwner;
- (id)isPublicPlaylist;
- (id)isVisiblePlaylist;
- (id)mediaLibrary;
- (id)newOperationWithLocalPersistenceResponseHandler:(id /* block */)arg1 completeResponseHandler:(id /* block */)arg2;
- (id)parentPlaylist;
- (id)playlist;
- (id)playlistDescription;
- (id)playlistEntries;
- (id)playlistName;
- (id)playlistUserImage;
- (void)setAuthorStoreIdentifier:(id)arg1;
- (void)setCuratorPlaylist:(id)arg1;
- (void)setIsOwner:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setParentPlaylist:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setPlaylistDescription:(id)arg1;
- (void)setPlaylistEntries:(id)arg1;
- (void)setPlaylistName:(id)arg1;
- (void)setPlaylistUserImage:(id)arg1;
- (void)setPublicPlaylist:(id)arg1;
- (void)setShouldCreatePlaylist:(bool)arg1;
- (void)setVisiblePlaylist:(id)arg1;
- (bool)shouldCreatePlaylist;

@end
