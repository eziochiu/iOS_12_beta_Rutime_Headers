/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCOfficeFontInfo : NSObject {
    NSString * _alphaFontName;
    NSString * _fontName;
    bool  _isBold;
    bool  _isItalic;
}

@property (nonatomic, readonly) NSString *alphaFontName;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) bool isBold;
@property (nonatomic, readonly) bool isItalic;

+ (id)officeFontInfoWithFontName:(id)arg1 alphaFontName:(id)arg2 isBold:(bool)arg3 isItalic:(bool)arg4;

- (id)alphaFontName;
- (void)dealloc;
- (id)description;
- (id)fontName;
- (id)initWithFontName:(id)arg1 alphaFontName:(id)arg2 isBold:(bool)arg3 isItalic:(bool)arg4;
- (bool)isBold;
- (bool)isItalic;

@end
