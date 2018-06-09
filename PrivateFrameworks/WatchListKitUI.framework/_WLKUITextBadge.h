/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUITextBadge : UIView {
    NSAttributedString * _attributedTitle;
    UIImage * _backgroundImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _badgeInsets;
    unsigned long long  _badgeStyle;
    double  _cornerRadius;
    double  _fontSize;
    double  _strokeSize;
    unsigned long long  _textAlignmentStyle;
    int  _textBlendMode;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } badgeInsets;
@property (nonatomic) unsigned long long badgeStyle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double fontSize;
@property (nonatomic) double strokeSize;
@property (nonatomic) unsigned long long textAlignmentStyle;
@property (nonatomic) int textBlendMode;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;

+ (id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_textSize;
- (id)attributedTitle;
- (id)backgroundImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })badgeInsets;
- (unsigned long long)badgeStyle;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)fontSize;
- (id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBadgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBadgeStyle:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setStrokeSize:(double)arg1;
- (void)setTextAlignmentStyle:(unsigned long long)arg1;
- (void)setTextBlendMode:(int)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strokeSize;
- (unsigned long long)textAlignmentStyle;
- (int)textBlendMode;
- (id)tintColor;
- (id)title;

@end
