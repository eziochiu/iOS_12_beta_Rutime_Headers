/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISeparatorView : UIView {
    UIView * _line;
    double  _lineHeight;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIView *line;
@property (nonatomic) double lineHeight;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initializeVUISeparatorView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)line;
- (double)lineHeight;
- (void)setLine:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColor;

@end
