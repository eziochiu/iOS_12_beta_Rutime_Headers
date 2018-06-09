/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMorphingLabel : UIView {
    double  _alignmentDelays;
    unsigned long long  _alignmentDst;
    bool  _alignmentIsEqual;
    unsigned long long  _alignmentSize;
    unsigned long long  _alignmentSrc;
    UIView * _colorView;
    UIMorphingLabelGlyphSet * _dstGlyphSet;
    bool  _enableAnimation;
    UIFont * _font;
    NSMutableArray * _hiddenGlyphViews;
    bool  _isDoingFastAnimation;
    double  _lastUpdateTime;
    double  _rippleFactor;
    double  _scaleFactor;
    double  _slowdown;
    UIMorphingLabelGlyphSet * _srcGlyphSet;
    bool  _suppressLayoutSubviews;
    NSString * _text;
    long long  _textAlignment;
    _UIViewAnimationAttributes * _textAnimationAttributes;
    UIColor * _textColor;
    _UIViewAnimationAttributes * _textColorAnimationAttributes;
    bool  _textColorDidChange;
    bool  _textDidChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic) bool enableAnimation;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool suppressLayoutSubviews;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (double)alphaForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint { double x1; double x2; })arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;
- (void)animateGlyphs;
- (void)animateGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateTextColor;
- (id)attributedString;
- (id)attributedStringForText:(id)arg1;
- (void)baseInit;
- (void)calculateGlyphAlignment;
- (unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)canFitText:(id)arg1;
- (double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (double)currentMediaTime;
- (void)dealloc;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (bool)enableAnimation;
- (double)flushAmount;
- (id)font;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(bool)arg2;
- (void)hideGlyph:(id)arg1;
- (void)initAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)requiredWidthForText:(id)arg1;
- (void)setEnableAnimation:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setSuppressLayoutSubviews:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (bool)suppressLayoutSubviews;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (id)uniqueStringWithPrefix:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
