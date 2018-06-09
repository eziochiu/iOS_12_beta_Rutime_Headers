/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSReaderFontManager : NSObject {
    NSString * _languageTag;
    NSArray * _validatedFonts;
}

@property (readonly) NSArray *fonts;
@property (readonly, copy) NSString *languageTag;

- (void).cxx_destruct;
- (id)defaultFontForLanguageTag:(id)arg1;
- (id)fontWithFontFamilyName:(id)arg1;
- (id)fonts;
- (id)languageTag;
- (void)updateLanguageTag:(id)arg1;

@end
