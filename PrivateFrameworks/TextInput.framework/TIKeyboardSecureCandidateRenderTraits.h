/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardSecureCandidateRenderTraits : NSObject <NSCopying, NSSecureCoding> {
    long long  _cellRenderingStyle;
    NSDictionary * _cellWidthOptions;
    double  _dividerLineWidth;
    NSString * _fontName;
    double  _fontSize;
    TIKeyboardSecureCandidateTextTraits * _headerTextTraits;
    TIKeyboardSecureCandidateTextTraits * _inputTextTraits;
    bool  _isCandidateUI;
    TIKeyboardSecureCandidateLayoutTraits * _layoutTraits;
    long long  _maxCellCount;
    NSString * _prefixText;
    NSArray * _resultCountToSingleCellWidth;
    double  _screenScale;
    long long  _sharedCellCount;
    double  _singleCellHeight;
    double  _singleCellVerticalPadding;
    NSString * _suffixText;
    TIKeyboardSecureCandidateRGBColor * _textColor;
}

@property (nonatomic) long long cellRenderingStyle;
@property (nonatomic, copy) NSDictionary *cellWidthOptions;
@property (nonatomic) double dividerLineWidth;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *headerTextTraits;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *inputTextTraits;
@property (nonatomic) bool isCandidateUI;
@property (nonatomic, retain) TIKeyboardSecureCandidateLayoutTraits *layoutTraits;
@property (nonatomic) long long maxCellCount;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic, copy) NSArray *resultCountToSingleCellWidth;
@property (nonatomic) double screenScale;
@property (nonatomic) long long sharedCellCount;
@property (nonatomic) double singleCellHeight;
@property (nonatomic) double singleCellVerticalPadding;
@property (nonatomic) double singleCellWidth;
@property (nonatomic, copy) NSString *suffixText;
@property (nonatomic, retain) TIKeyboardSecureCandidateRGBColor *textColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cellRenderingStyle;
- (id)cellWidthOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)dividerLineWidth;
- (void)encodeWithCoder:(id)arg1;
- (id)fontName;
- (double)fontSize;
- (id)headerTextTraits;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inputTextTraits;
- (bool)isCandidateUI;
- (bool)isEqual:(id)arg1;
- (id)layoutTraits;
- (long long)maxCellCount;
- (id)prefixText;
- (id)resultCountToSingleCellWidth;
- (double)screenScale;
- (void)setCellRenderingStyle:(long long)arg1;
- (void)setCellWidthOptions:(id)arg1;
- (void)setDividerLineWidth:(double)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setHeaderTextTraits:(id)arg1;
- (void)setInputTextTraits:(id)arg1;
- (void)setIsCandidateUI:(bool)arg1;
- (void)setLayoutTraits:(id)arg1;
- (void)setMaxCellCount:(long long)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setResultCountToSingleCellWidth:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSharedCellCount:(long long)arg1;
- (void)setSingleCellHeight:(double)arg1;
- (void)setSingleCellVerticalPadding:(double)arg1;
- (void)setSingleCellWidth:(double)arg1;
- (void)setSuffixText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (long long)sharedCellCount;
- (double)singleCellHeight;
- (double)singleCellVerticalPadding;
- (double)singleCellWidth;
- (id)suffixText;
- (id)textColor;

@end
