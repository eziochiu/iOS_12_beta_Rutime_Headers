/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {
    unsigned long long  _entityLimit;
    MusicLibraryPlaylistsViewConfiguration * _playlistsViewConfiguration;
}

@property (nonatomic, readonly) unsigned long long entityLimit;

+ (unsigned long long)defaultEntityLimit;

- (void).cxx_destruct;
- (id)_playlistsViewConfiguration;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (unsigned long long)entityLimit;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
