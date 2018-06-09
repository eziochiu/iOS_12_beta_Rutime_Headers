/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSharedAlbumGadget : PUAlbumGadget {
    PUAlbumListCellContentView * _albumCellContentView;
}

@property (nonatomic, retain) PUAlbumListCellContentView *albumCellContentView;

- (void).cxx_destruct;
- (id)albumCellContentView;
- (struct NSObject { Class x1; }*)contentView;
- (void)setAlbumCellContentView:(id)arg1;

@end
