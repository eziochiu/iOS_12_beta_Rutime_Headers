/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSubjectIndicatorView : UIView {
    UIImageView * __imageView;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (getter=isInactive, nonatomic) bool inactive;
@property (getter=isPulsing, nonatomic) bool pulsing;

- (void).cxx_destruct;
- (id)_imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInactive;
- (bool)isPulsing;
- (void)layoutSubviews;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setInactive:(bool)arg1;
- (void)setPulsing:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;

@end
