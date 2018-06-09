/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardPlayerShadowView : UIView {
    UICollectionViewCell * _parentCell;
    GKDashboardPlayerPhotoView * _photoView;
}

@property (nonatomic) UICollectionViewCell *parentCell;
@property (nonatomic, readonly) UIView *parentView;
@property (nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic, retain) GKPlayer *player;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidatePhoto;
- (void)layoutSubviews;
- (id)parentCell;
- (id)parentView;
- (id)photoView;
- (id)player;
- (void)setParentCell:(id)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setupPhoto;

@end
