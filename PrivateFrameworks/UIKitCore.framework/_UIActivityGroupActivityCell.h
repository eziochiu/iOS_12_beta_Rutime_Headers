/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIActivityGroupActivityCell : UICollectionViewCell {
    UIImageView * _highlightedImageView;
    UIImageView * _imageView;
    unsigned long long  _sequence;
    _UIActivityGroupActivityCellTitleLabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *highlightedImageView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) unsigned long long sequence;
@property (nonatomic, retain) _UIActivityGroupActivityCellTitleLabel *titleLabel;

+ (void)invalidatePreferredSizes;
+ (struct CGSize { double x1; double x2; })preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4;

- (void).cxx_destruct;
- (id)draggingView;
- (id)highlightedImageView;
- (id)imageView;
- (void)initHighlightedImageViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (unsigned long long)sequence;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedImageView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSequence:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHighlightedImageViewIfNeeded;

@end
