/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedAlbumsCollectionViewConfiguration : MusicLibraryAlbumsCollectionViewConfiguration {
    unsigned long long  _entityLimit;
}

@property (nonatomic, readonly) unsigned long long entityLimit;

+ (unsigned long long)defaultEntityLimit;

- (bool)canPreviewEntityValueContext:(id)arg1;
- (unsigned long long)entityLimit;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initForMainAlbumsList:(bool)arg1 includeCompilations:(bool)arg2;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
