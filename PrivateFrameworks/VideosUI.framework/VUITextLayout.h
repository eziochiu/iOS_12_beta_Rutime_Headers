/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUITextLayout : NSObject {
    long long  _alignment;
    int  _blendMode;
    UIColor * _color;
    double  _fontSize;
    unsigned int  _fontTraits;
    long long  _fontWeight;
    UIColor * _highlightOrSelectedColor;
    NSNumber * _letterSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    double  _minimumScaleFactor;
    unsigned long long  _numberOfLines;
    unsigned long long  _numberOfLinesAXLarge;
    unsigned long long  _numberOfLinesAXSmall;
    NSShadow * _shadow;
    long long  _textStyle;
    long long  _textTransform;
}

@property (nonatomic) long long alignment;
@property (nonatomic) int blendMode;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned int fontTraits;
@property (nonatomic) long long fontWeight;
@property (nonatomic, retain) UIColor *highlightOrSelectedColor;
@property (nonatomic, retain) NSNumber *letterSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long numberOfLinesAXLarge;
@property (nonatomic) unsigned long long numberOfLinesAXSmall;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic) long long textStyle;
@property (nonatomic) long long textTransform;

- (void).cxx_destruct;
- (long long)alignment;
- (id)attributedStringWithString:(id)arg1;
- (int)blendMode;
- (id)color;
- (double)fontSize;
- (unsigned int)fontTraits;
- (long long)fontWeight;
- (id)highlightOrSelectedColor;
- (id)init;
- (id)letterSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (double)minimumScaleFactor;
- (unsigned long long)numberOfLines;
- (unsigned long long)numberOfLinesAXLarge;
- (unsigned long long)numberOfLinesAXSmall;
- (void)setAlignment:(long long)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontTraits:(unsigned int)arg1;
- (void)setFontWeight:(long long)arg1;
- (void)setHighlightOrSelectedColor:(id)arg1;
- (void)setLetterSpacing:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setNumberOfLinesAXLarge:(unsigned long long)arg1;
- (void)setNumberOfLinesAXSmall:(unsigned long long)arg1;
- (void)setShadow:(id)arg1;
- (void)setTextStyle:(long long)arg1;
- (void)setTextTransform:(long long)arg1;
- (id)shadow;
- (long long)textStyle;
- (long long)textTransform;

@end
