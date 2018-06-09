/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding> {
    double  _baselineOffset;
    NSString * _fontName;
    double  _maxFontSize;
    double  _minFontSize;
    TIKeyboardSecureCandidateRGBColor * _textColor;
    double  _yCoordinate;
}

@property (nonatomic) double baselineOffset;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) double maxFontSize;
@property (nonatomic) double minFontSize;
@property (nonatomic, retain) TIKeyboardSecureCandidateRGBColor *textColor;
@property (nonatomic) double yCoordinate;

+ (bool)supportsSecureCoding;
+ (id)traitsWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;
- (id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4;
- (id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6;
- (bool)isEqual:(id)arg1;
- (double)maxFontSize;
- (double)minFontSize;
- (void)setBaselineOffset:(double)arg1;
- (void)setFontName:(id)arg1;
- (void)setMaxFontSize:(double)arg1;
- (void)setMinFontSize:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setYCoordinate:(double)arg1;
- (id)textColor;
- (double)yCoordinate;

@end
