/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasGridCellStyle : NSObject <NSCopying> {
    long long  _defaultTextAlignment;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSDictionary * _subtitleDefaultFontAttributes;
    double  _subtitleFirstBaselineHeight;
    UIColor * _subtitleTextColor;
    NSString * _subtitleTextStyle;
    double  _textFirstBaselineToBottom;
    double  _textLastBaselineToBottom;
    NSDictionary * _titleDefaultFontAttributes;
    double  _titleFirstBaselineHeight;
    UIColor * _titleTextColor;
    NSString * _titleTextStyle;
}

@property (nonatomic) long long defaultTextAlignment;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, copy) NSDictionary *subtitleDefaultFontAttributes;
@property (nonatomic) double subtitleFirstBaselineHeight;
@property (nonatomic, copy) UIColor *subtitleTextColor;
@property (nonatomic, copy) NSString *subtitleTextStyle;
@property (nonatomic) double textFirstBaselineToBottom;
@property (nonatomic) double textLastBaselineToBottom;
@property (nonatomic, copy) NSDictionary *titleDefaultFontAttributes;
@property (nonatomic) double titleFirstBaselineHeight;
@property (nonatomic, copy) UIColor *titleTextColor;
@property (nonatomic, copy) NSString *titleTextStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultTextAlignment;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setDefaultTextAlignment:(long long)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubtitleDefaultFontAttributes:(id)arg1;
- (void)setSubtitleFirstBaselineHeight:(double)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setSubtitleTextStyle:(id)arg1;
- (void)setTextFirstBaselineToBottom:(double)arg1;
- (void)setTextLastBaselineToBottom:(double)arg1;
- (void)setTitleDefaultFontAttributes:(id)arg1;
- (void)setTitleFirstBaselineHeight:(double)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)subtitleDefaultFontAttributes;
- (double)subtitleFirstBaselineHeight;
- (id)subtitleTextColor;
- (id)subtitleTextStyle;
- (double)textFirstBaselineToBottom;
- (double)textLastBaselineToBottom;
- (id)titleDefaultFontAttributes;
- (double)titleFirstBaselineHeight;
- (id)titleTextColor;
- (id)titleTextStyle;

@end
