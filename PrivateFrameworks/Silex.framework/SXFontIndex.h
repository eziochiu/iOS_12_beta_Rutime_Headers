/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFontIndex : NSObject <SXFontIndex> {
    NSCache * _attributeToFontIndex;
    NSCache * _fontToAttributeIndex;
    NSDictionary * _fonts;
}

@property (nonatomic, readonly) NSCache *attributeToFontIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSCache *fontToAttributeIndex;
@property (nonatomic, readonly) NSDictionary *fonts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeToFontIndex;
- (id)fontAttributesForFontName:(id)arg1;
- (id)fontNameForFontAttributes:(id)arg1;
- (id)fontToAttributeIndex;
- (id)fonts;
- (id)fontsForFamilyProviders:(id)arg1;
- (id)initWithFontFamilyProviders:(id)arg1;

@end
