/* made by EzioChiu.
 */

@protocol CUIStructuredThemeStorage2

@required

- (NSArray *)allImageNames;
- (unsigned short)appearanceIdentifierForName:(NSString *)arg1;
- (NSDictionary *)appearances;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (NSArray *)imagesWithName:(NSString *)arg1;
- (NSString *)nameForAppearanceIdentifier:(unsigned short)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(NSString *)arg1;

@optional

- (void)insertCGImage:(struct CGImage { }*)arg1 withName:(NSString *)arg2 andDescription:(CUINamedImageDescription *)arg3;
- (void)removeImageNamed:(NSString *)arg1 withDescription:(CUINamedImageDescription *)arg2;
- (NSString *)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (CUICommonAssetStorage *)themeStore;

@end
