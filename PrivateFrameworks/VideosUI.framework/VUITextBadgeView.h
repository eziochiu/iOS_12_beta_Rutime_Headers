/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUITextBadgeView : UIView {
    NSAttributedString * _attributedTitle;
    UIImage * _backgroundImage;
    VUITextBadgeLayout * _badgeLayout;
    double  _strokeSize;
    UIColor * _tintColor;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) VUITextBadgeLayout *badgeLayout;
@property (nonatomic) double strokeSize;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_textSize;
- (id)attributedTitle;
- (id)backgroundImage;
- (id)badgeLayout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reset;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBadgeLayout:(id)arg1;
- (void)setStrokeSize:(double)arg1;
- (void)setText:(id)arg1 withBadgeLayout:(id)arg2;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strokeSize;
- (id)tintColor;

@end
