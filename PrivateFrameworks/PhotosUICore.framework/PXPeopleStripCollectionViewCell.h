/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell {
    UILabel * _avatarLabel;
    NSArray * _groupAvatarViews;
    bool  _namesVisible;
    NSArray * _people;
    PXRoundedCornerOverlayView * _roundCornerOverlay;
}

@property (nonatomic, retain) UILabel *avatarLabel;
@property (nonatomic, retain) NSArray *groupAvatarViews;
@property (nonatomic) bool namesVisible;
@property (nonatomic, retain) NSArray *people;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundCornerOverlay;

- (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)avatarLabel;
- (id)groupAvatarViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)namesVisible;
- (id)people;
- (void)prepareForReuse;
- (id)roundCornerOverlay;
- (void)setAvatarLabel:(id)arg1;
- (void)setGroupAvatarViews:(id)arg1;
- (void)setNamesVisible:(bool)arg1;
- (void)setPeople:(id)arg1;
- (void)setPeople:(id)arg1 namesVisible:(bool)arg2;
- (void)setRoundCornerOverlay:(id)arg1;

@end
