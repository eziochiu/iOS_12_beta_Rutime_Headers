/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKHueSpectrumView : UIView {
    UIImageView * _imageView;
    bool  _isCompact;
    bool  _isEmbossed;
    bool  _isSelected;
    CAShapeLayer * _maskLayer;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isCompact;
@property (nonatomic) bool isEmbossed;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) CAShapeLayer *maskLayer;

+ (id)colorWheelImage:(bool)arg1;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompact;
- (bool)isEmbossed;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setImageView:(id)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsEmbossed:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setMaskLayer:(id)arg1;

@end
