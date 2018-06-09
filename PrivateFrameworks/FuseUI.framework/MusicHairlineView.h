/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicHairlineView : UIView {
    UIColor * _lineColor;
    UIView * _lineView;
    long long  _verticalAlignment;
}

@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic) long long verticalAlignment;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lineColor;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setLineColor:(id)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (long long)verticalAlignment;

@end
