/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICStreamingTextView : UIView {
    bool  _animated;
    bool  _animatedInternal;
    double  _animationDuration;
    UIColor * _endTextColor;
    UIFont * _font;
    double  _hyphenationFactor;
    NSLayoutManager * _layoutManager;
    UIColor * _startTextColor;
    UIColor * _textColor;
    NSTextContainer * _textContainer;
    NSTextStorage * _textStorage;
    NSMutableArray * _words;
    NSMutableSet * _wordsToDelete;
    NSMutableArray * _wordsToShow;
}

@property (nonatomic) bool animated;
@property (nonatomic) double animationDuration;
@property (nonatomic, retain) UIColor *endTextColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) double hyphenationFactor;
@property (nonatomic, retain) UIColor *startTextColor;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSArray *words;

- (void).cxx_destruct;
- (void)_animateLayers;
- (void)_animateWordIn:(id)arg1;
- (void)_animateWordOut:(id)arg1;
- (id)_createGlyphImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 glyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 layoutManager:(id)arg3;
- (id)_glyphImageForWord:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 textColor:(id)arg4;
- (void)_layoutFrames;
- (void)_resetState;
- (void)_sharedInit;
- (void)_updateAnimatedInternal;
- (void)_updateText:(id)arg1;
- (bool)animated;
- (double)animationDuration;
- (id)endTextColor;
- (id)font;
- (double)hyphenationFactor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnimated:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHyphenationFactor:(double)arg1;
- (void)setStartTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setWords:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)startTextColor;
- (id)text;
- (id)textColor;
- (id)words;

@end
