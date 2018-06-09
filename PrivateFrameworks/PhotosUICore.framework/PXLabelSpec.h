/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLabelSpec : PXViewSpec {
    bool  _adjustsFontSizeToFitWidth;
    bool  _allowTruncation;
    long long  _capitalization;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    long long  _fallbackCapitalization;
    NSDictionary * _fallbackTextAttributes;
    struct UIFont { Class x1; } * _font;
    double  _minimumScaleFactor;
    double  _minimumTruncatedScaleFactor;
    unsigned long long  _numberOfLines;
    long long  _textAlignment;
    NSDictionary * _textAttributes;
    struct UIColor { Class x1; } * _textColor;
    long long  _verticalAlignment;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowTruncation;
@property (nonatomic) long long capitalization;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long fallbackCapitalization;
@property (nonatomic, copy) NSDictionary *fallbackTextAttributes;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) double minimumTruncatedScaleFactor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic) long long verticalAlignment;

- (void).cxx_destruct;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowTruncation;
- (long long)capitalization;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)fallbackCapitalization;
- (id)fallbackTextAttributes;
- (struct UIFont { Class x1; }*)font;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)minimumScaleFactor;
- (double)minimumTruncatedScaleFactor;
- (unsigned long long)numberOfLines;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowTruncation:(bool)arg1;
- (void)setCapitalization:(long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFallbackCapitalization:(long long)arg1;
- (void)setFallbackTextAttributes:(id)arg1;
- (void)setFont:(struct UIFont { Class x1; }*)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTruncatedScaleFactor:(double)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextColor:(struct UIColor { Class x1; }*)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (long long)textAlignment;
- (id)textAttributes;
- (struct UIColor { Class x1; }*)textColor;
- (long long)verticalAlignment;

@end
