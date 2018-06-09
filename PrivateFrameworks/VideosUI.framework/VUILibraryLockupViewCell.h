/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryLockupViewCell : UICollectionViewCell {
    NSDate * _expirationDate;
    NSTimer * _expiryUpdateTimer;
    double  _imageAspectRatio;
    _TVImageView * _imageView;
    VUILabel * _subtitleLabel;
    VUILabel * _titleLabel;
}

@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSTimer *expiryUpdateTimer;
@property (nonatomic) double imageAspectRatio;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUILabel *titleLabel;

+ (void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 forMetrics:(bool)arg4;

- (void).cxx_destruct;
- (void)_computeExpirationLabel:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)dealloc;
- (id)expirationDate;
- (id)expiryUpdateTimer;
- (double)imageAspectRatio;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setExpirationDate:(id)arg1;
- (void)setExpiryUpdateTimer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageAspectRatio:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)willMoveToWindow:(id)arg1;

@end
