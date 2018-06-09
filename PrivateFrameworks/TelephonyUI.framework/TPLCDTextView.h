/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDTextView : UIView {
    unsigned int  _animates;
    UIFrameAnimation * _animation;
    unsigned int  _centerText;
    id  _delegate;
    UIFont * _font;
    double  _fontSize;
    unsigned int  _isAnimating;
    unsigned int  _leftTruncates;
    double  _minFontSize;
    TPLCDTextViewScrollingView * _scrollingView;
    UIColor * _shadowColor;
    NSString * _text;
    UIColor * _textColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textRect;
    unsigned int  _textRectIsValid;
}

+ (double)defaultMinimumFontSize;

- (void).cxx_destruct;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 verticallyOffset:(bool)arg2;
- (void)_finishedScrolling;
- (void)_scheduleStartScrolling;
- (void)_setupForAnimationIfNecessary;
- (void)_startScrolling;
- (void)_tearDownAnimation;
- (bool)animates;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resetAnimation;
- (void)setAnimatesIfTruncated:(bool)arg1;
- (void)setCenterText:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLCDTextFont:(id)arg1;
- (void)setLeftTruncatesText:(bool)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeToFit;
- (void)startAnimating;
- (void)stopAnimating;
- (id)text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRect;

@end
