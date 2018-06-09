/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionKey : NSObject <NSCoding, NSCopying> {
    unsigned short  _highwaterKeyCount;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _key;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  _stackKey;
}

+ (void)initialize;
+ (id)renditionKey;
+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;

- (void)_expandKeyIfNecessaryForCount:(long long)arg1;
- (unsigned short)_systemTokenCount;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)keyList;
- (id)nameOfAttributeName:(int)arg1;
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;
- (void)setThemeAppearance:(long long)arg1;
- (void)setThemeDeploymentTarget:(long long)arg1;
- (void)setThemeDimension1:(long long)arg1;
- (void)setThemeDimension2:(long long)arg1;
- (void)setThemeDirection:(long long)arg1;
- (void)setThemeDisplayGamut:(long long)arg1;
- (void)setThemeElement:(long long)arg1;
- (void)setThemeGraphicsClass:(long long)arg1;
- (void)setThemeIdentifier:(long long)arg1;
- (void)setThemeIdiom:(long long)arg1;
- (void)setThemeLayer:(long long)arg1;
- (void)setThemeMemoryClass:(long long)arg1;
- (void)setThemePart:(long long)arg1;
- (void)setThemePresentationState:(long long)arg1;
- (void)setThemePreviousState:(long long)arg1;
- (void)setThemePreviousValue:(long long)arg1;
- (void)setThemeScale:(long long)arg1;
- (void)setThemeSize:(long long)arg1;
- (void)setThemeSizeClassHorizontal:(long long)arg1;
- (void)setThemeSizeClassVertical:(long long)arg1;
- (void)setThemeState:(long long)arg1;
- (void)setThemeSubtype:(long long)arg1;
- (void)setThemeValue:(long long)arg1;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (long long)themeAppearance;
- (long long)themeDeploymentTarget;
- (long long)themeDimension1;
- (long long)themeDimension2;
- (long long)themeDirection;
- (long long)themeDisplayGamut;
- (long long)themeElement;
- (long long)themeGraphicsClass;
- (long long)themeIdentifier;
- (long long)themeIdiom;
- (long long)themeLayer;
- (long long)themeMemoryClass;
- (long long)themePart;
- (long long)themePresentationState;
- (long long)themePreviousState;
- (long long)themePreviousValue;
- (long long)themeScale;
- (long long)themeSize;
- (long long)themeSizeClassHorizontal;
- (long long)themeSizeClassVertical;
- (long long)themeState;
- (long long)themeSubtype;
- (long long)themeValue;

@end
