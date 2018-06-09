/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListCell : UICollectionViewCell

@property (nonatomic, readonly) PUAlbumListCellContentView *albumListCellContentView;

- (id)albumListCellContentView;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
