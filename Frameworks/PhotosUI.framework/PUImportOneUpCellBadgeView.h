/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportOneUpCellBadgeView : UICollectionReusableView {
    UIImageView * _badgeImageView;
    long long  _badgeType;
    bool  _inUpdateBlock;
    bool  _needsBadgeUpdate;
    bool  _selectable;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic) long long badgeType;
@property (nonatomic) bool inUpdateBlock;
@property (nonatomic) bool needsBadgeUpdate;
@property (nonatomic) bool selectable;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_createSpinnerIfNecessary;
- (id)badgeImageView;
- (long long)badgeType;
- (id)badgeView;
- (bool)inUpdateBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)needsBadgeUpdate;
- (void)performBadgeUpdates:(id /* block */)arg1;
- (void)prepareForReuse;
- (bool)selectable;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeType:(long long)arg1;
- (void)setInUpdateBlock:(bool)arg1;
- (void)setNeedsBadgeUpdate;
- (void)setNeedsBadgeUpdate:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)updateBadgeUIIfNeeded;

@end
