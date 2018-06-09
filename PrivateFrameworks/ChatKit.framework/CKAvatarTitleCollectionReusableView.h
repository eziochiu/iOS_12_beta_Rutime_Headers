/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView {
    long long  _avatarTitleAccessoryImageType;
    UIImageView * _chevronImageView;
    long long  _chevronMode;
    NSMutableArray * _pendingTitles;
    UIImageView * _statusIndicatorImageView;
    long long  _statusIndicatorType;
    long long  _style;
    CKLabel * _titleLabel;
}

@property (nonatomic) long long avatarTitleAccessoryImageType;
@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic) long long chevronMode;
@property (nonatomic, retain) NSMutableArray *pendingTitles;
@property (nonatomic, retain) UIImageView *statusIndicatorImageView;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic) long long style;
@property (nonatomic, retain) CKLabel *titleLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)_animateFromQueue;
- (void)_rotateChevronImageView;
- (long long)avatarTitleAccessoryImageType;
- (id)chevronImageView;
- (long long)chevronMode;
- (void)configureWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pendingTitles;
- (void)setAvatarTitleAccessoryImageType:(long long)arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setChevronMode:(long long)arg1;
- (void)setPendingTitles:(id)arg1;
- (void)setStatusIndicatorImageView:(id)arg1;
- (void)setStatusIndicatorType:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1 animated:(bool)arg2;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusIndicatorImageView;
- (long long)statusIndicatorType;
- (long long)style;
- (id)titleLabel;

@end
