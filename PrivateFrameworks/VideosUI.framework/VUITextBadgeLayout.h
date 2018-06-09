/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUITextBadgeLayout : NSObject {
    unsigned long long  _badgeStyle;
    UIColor * _bgColor;
    double  _cornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    VUITextLayout * _textLayout;
}

@property (nonatomic) unsigned long long badgeStyle;
@property (nonatomic, retain) UIColor *bgColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) VUITextLayout *textLayout;

- (void).cxx_destruct;
- (unsigned long long)badgeStyle;
- (id)bgColor;
- (double)cornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setBadgeStyle:(unsigned long long)arg1;
- (void)setBgColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextLayout:(id)arg1;
- (id)textLayout;

@end
