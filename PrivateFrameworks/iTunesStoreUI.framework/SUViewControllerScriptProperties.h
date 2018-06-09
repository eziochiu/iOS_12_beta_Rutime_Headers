/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUViewControllerScriptProperties : NSObject <NSCoding, NSCopying> {
    bool  _alwaysDispatchesScrollEvents;
    UIColor * _backgroundColor;
    NSDictionary * _contextDictionary;
    bool  _doubleTapEnabled;
    bool  _embedded;
    bool  _flashesScrollIndicators;
    bool  _inputViewObeysDOMFocus;
    long long  _loadingIndicatorStyle;
    UIColor * _loadingTextColor;
    UIColor * _loadingTextShadowColor;
    SUGradient * _placeholderBackgroundGradient;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollContentInsets;
    bool  _scrollingDisabled;
    bool  _shouldLoadProgressively;
    bool  _shouldShowFormAccessory;
    bool  _showsBackgroundShadow;
    bool  _showsHorizontalScrollIndicator;
    bool  _showsVerticalScrollIndicator;
    UIColor * _topExtensionColor;
    bool  _usesBlurredBackground;
}

@property (nonatomic) bool alwaysDispatchesScrollEvents;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, copy) NSDictionary *contextDictionary;
@property (getter=isDoubleTapEnabled, nonatomic) bool doubleTapEnabled;
@property (getter=isEmbedded, nonatomic) bool embedded;
@property (nonatomic) bool flashesScrollIndicators;
@property (nonatomic) bool inputViewObeysDOMFocus;
@property (nonatomic) long long loadingIndicatorStyle;
@property (nonatomic, retain) UIColor *loadingTextColor;
@property (nonatomic, retain) UIColor *loadingTextShadowColor;
@property (nonatomic, retain) SUGradient *placeholderBackgroundGradient;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollContentInsets;
@property (getter=isScrollingDisabled, nonatomic) bool scrollingDisabled;
@property (nonatomic) bool shouldLoadProgressively;
@property (nonatomic) bool shouldShowFormAccessory;
@property (nonatomic) bool showsBackgroundShadow;
@property (nonatomic) bool showsHorizontalScrollIndicator;
@property (nonatomic) bool showsVerticalScrollIndicator;
@property (nonatomic, retain) UIColor *topExtensionColor;
@property (nonatomic) bool usesBlurredBackground;

- (bool)alwaysDispatchesScrollEvents;
- (id)backgroundColor;
- (id)contextDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)flashesScrollIndicators;
- (id)initWithCoder:(id)arg1;
- (bool)inputViewObeysDOMFocus;
- (bool)isDoubleTapEnabled;
- (bool)isEmbedded;
- (bool)isScrollingDisabled;
- (long long)loadingIndicatorStyle;
- (id)loadingTextColor;
- (id)loadingTextShadowColor;
- (id)placeholderBackgroundGradient;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollContentInsets;
- (void)setAlwaysDispatchesScrollEvents:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContextDictionary:(id)arg1;
- (void)setDoubleTapEnabled:(bool)arg1;
- (void)setEmbedded:(bool)arg1;
- (void)setFlashesScrollIndicators:(bool)arg1;
- (void)setInputViewObeysDOMFocus:(bool)arg1;
- (void)setLoadingIndicatorStyle:(long long)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingTextShadowColor:(id)arg1;
- (void)setPlaceholderBackgroundGradient:(id)arg1;
- (void)setScrollContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollingDisabled:(bool)arg1;
- (void)setShouldLoadProgressively:(bool)arg1;
- (void)setShouldShowFormAccessory:(bool)arg1;
- (void)setShowsBackgroundShadow:(bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setTopExtensionColor:(id)arg1;
- (void)setUsesBlurredBackground:(bool)arg1;
- (bool)shouldLoadProgressively;
- (bool)shouldShowFormAccessory;
- (bool)showsBackgroundShadow;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;
- (id)topExtensionColor;
- (bool)usesBlurredBackground;

@end
