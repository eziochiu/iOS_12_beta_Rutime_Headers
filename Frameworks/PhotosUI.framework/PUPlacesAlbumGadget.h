/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlacesAlbumGadget : PUAlbumGadget <PXPlacesSnapshotFactoryDelegate> {
    PUAlbumListCellContentView * _albumListCellContentView;
    UIImage * _currentSnapshotImage;
    PXPlacesAlbumCoverProvider * _placesAlbumCoverProvider;
    NSString * _title;
}

@property (nonatomic, retain) UIImage *currentSnapshotImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPlacesAlbumCoverProvider *placesAlbumCoverProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateImageInContentView:(id)arg1 animated:(bool)arg2;
- (void)_updateSubtitleInContentView:(id)arg1 animated:(bool)arg2;
- (id)albumListCellContentView;
- (id)currentSnapshotImage;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (id)placesAlbumCoverProvider;
- (void)placesSnapshotCountDidChange;
- (void)placesSnapshotDidChange;
- (void)setCurrentSnapshotImage:(id)arg1;
- (id)title;

@end
