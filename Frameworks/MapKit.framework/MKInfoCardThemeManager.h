/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {
    NSDictionary * _colors;
    UIColor * _currentTintColor;
    NSPointerArray * _otherListeners;
    unsigned long long  _themeType;
    bool  _themeWasExplicitySet;
    id /* block */  _tintColorProvider;
    bool  _useSmallFont;
    NSPointerArray * _viewControllerListeners;
    NSPointerArray * _viewListeners;
}

@property (nonatomic, readonly) UIFont *attributionFont;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIFont *bodyFont;
@property (nonatomic, readonly) UIFont *boldBodyFont;
@property (nonatomic, readonly) UIFont *brandTitleFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *disabledActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *disabledActionRowTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonHighlightedColor;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonNormalColor;
@property (nonatomic, readonly) UIColor *headerSecondaryButtonHighlightedColor;
@property (nonatomic, readonly) UIColor *headerSecondaryButtonNormalColor;
@property (nonatomic, readonly) UIColor *highlightedActionRowTextColor;
@property (nonatomic, readonly) UIColor *highlightedTintColor;
@property (nonatomic, readonly) bool isDarkTheme;
@property (nonatomic, readonly) bool isVibrantTheme;
@property (nonatomic, readonly) UIFont *largeTitleFont;
@property (nonatomic, readonly) UIFont *largeTitleFontStatic;
@property (nonatomic, readonly) UIColor *lightTextColor;
@property (nonatomic, readonly) UIFont *mediumBodyFont;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundPressedColor;
@property (nonatomic, readonly) UIFont *rowButtonFont;
@property (nonatomic, readonly) UIColor *rowColor;
@property (nonatomic, readonly) UIFont *rowGlyphButtonFont;
@property (nonatomic, readonly) UIFont *sectionHeaderButtonFont;
@property (nonatomic, readonly) UIFont *sectionHeaderFont;
@property (nonatomic, readonly) UIColor *selectedRowColor;
@property (nonatomic, readonly) UIColor *separatorLineColor;
@property (nonatomic, readonly) UIFont *smallAttributionFont;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) unsigned long long themeType;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic) bool useSmallFont;

+ (id)_currentTheme:(unsigned long long)arg1;
+ (void)addThemeChangedListener:(id)arg1;
+ (id)currentTheme;
+ (void)setTheme:(unsigned long long)arg1;
+ (void)setTintColorProvider:(id /* block */)arg1;
+ (void)setUseSmallFont:(bool)arg1;
+ (id)themeWithThemeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addThemeChangedListener:(id)arg1;
- (unsigned long long)_currentSystemTheme;
- (id)_initWithThemeType:(unsigned long long)arg1;
- (bool)_isInSpotlightContext;
- (void)_notifyAllListenersOfThemeChange:(id)arg1 visitedSet:(id)arg2 subListenerMethod:(int (*)arg3 subListenerSelector:(SEL)arg4;
- (void)_notifyAllListenersOfTintChange:(id)arg1 visitedSet:(id)arg2;
- (void)_setTheme:(unsigned long long)arg1;
- (void)_setTintColorProvider:(id /* block */)arg1;
- (void)_tintColorDidChange;
- (id)attributionFont;
- (id)backgroundColor;
- (id)bodyFont;
- (id)boldBodyFont;
- (id)brandTitleFont;
- (id)disabledActionRowBackgroundColor;
- (id)disabledActionRowTextColor;
- (id)headerPrimaryButtonHighlightedColor;
- (id)headerPrimaryButtonNormalColor;
- (id)headerSecondaryButtonHighlightedColor;
- (id)headerSecondaryButtonNormalColor;
- (id)highlightedActionRowTextColor;
- (id)highlightedTintColor;
- (id)iconFontToMatch:(id)arg1;
- (id)init;
- (bool)isDarkTheme;
- (bool)isVibrantTheme;
- (id)largeTitleFont;
- (id)largeTitleFontStatic;
- (id)lightTextColor;
- (id)mediumBodyFont;
- (id)normalActionRowBackgroundColor;
- (id)normalActionRowBackgroundPressedColor;
- (id)rowButtonFont;
- (id)rowColor;
- (id)rowGlyphButtonFont;
- (id)sectionHeaderButtonFont;
- (id)sectionHeaderFont;
- (id)selectedRowColor;
- (id)separatorLineColor;
- (void)setUseSmallFont:(bool)arg1;
- (id)smallAttributionFont;
- (id)textColor;
- (unsigned long long)themeType;
- (id)tintColor;
- (id)titleFont;
- (bool)useSmallFont;

@end