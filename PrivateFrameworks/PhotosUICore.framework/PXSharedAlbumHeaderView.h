/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumHeaderView : UIView {
    UIImageView * _avatarView;
    UIImageView * _chevronView;
    PXFeedSectionInfo * _sectionInfo;
    UILabel * _subtitleLabel;
    long long  _tappableArea;
    unsigned long long  _textColorStyle;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *avatarView;
@property (nonatomic, retain) UIImageView *chevronView;
@property (nonatomic, retain) PXFeedSectionInfo *sectionInfo;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic) long long tappableArea;
@property (nonatomic) unsigned long long textColorStyle;
@property (nonatomic, retain) UILabel *titleLabel;

+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (bool)_showChevron;
- (bool)_showSubtitle;
- (void)_updateAvatarImage;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_updateUI;
- (id)avatarView;
- (id)chevronView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (id)sectionInfo;
- (void)setAvatarView:(id)arg1;
- (void)setChevronView:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTappableArea:(long long)arg1;
- (void)setTextColor:(unsigned long long)arg1;
- (void)setTextColorStyle:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (long long)tappableArea;
- (unsigned long long)textColorStyle;
- (id)titleLabel;

@end
