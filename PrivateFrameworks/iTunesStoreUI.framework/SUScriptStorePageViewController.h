/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptStorePageViewController : SUScriptViewController {
    NSArray * _initialURLStrings;
}

@property (readonly) NSArray *URLStrings;
@property (retain) id URLs;
@property id alwaysDispatchesScrollEvents;
@property bool doubleTapEnabled;
@property bool flashesScrollIndicators;
@property (readonly) long long indicatorStyleGray;
@property (readonly) long long indicatorStyleWhite;
@property id inputViewObeysDOMFocus;
@property long long loadingIndicatorStyle;
@property (retain) id loadingTextColor;
@property (retain) id loadingTextShadowColor;
@property id loadsWhenHidden;
@property (retain) id placeholderBackgroundStyle;
@property (readonly) id rootObject;
@property bool scrollingEnabled;
@property (retain) SUScriptSegmentedControl *segmentedControl;
@property bool shouldInvalidateForLowMemory;
@property bool shouldLoadProgressively;
@property id shouldShowFormAccessory;
@property bool showsBackgroundShadow;
@property id showsHorizontalScrollIndicator;
@property id showsVerticalScrollIndicator;
@property (retain) NSNumber *timeoutInterval;
@property (retain) NSString *userInfo;

+ (bool)copyURLStrings:(id*)arg1 forValue:(id)arg2;
+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)URLStrings;
- (id)URLs;
- (id)_className;
- (id)_copyURLsFromURLStrings:(id)arg1;
- (bool)_isSegmentedControlValid:(id)arg1;
- (id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2;
- (void)_setURLs:(id)arg1;
- (void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2;
- (id)_storePageViewController;
- (id)alwaysDispatchesScrollEvents;
- (void)applyURLStrings:(id)arg1 toViewController:(id)arg2;
- (id)attributeKeys;
- (void)dealloc;
- (bool)doubleTapEnabled;
- (bool)flashesScrollIndicators;
- (long long)indicatorStyleGray;
- (long long)indicatorStyleWhite;
- (id)init;
- (id)initWithURLStrings:(id)arg1;
- (id)inputViewObeysDOMFocus;
- (id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2;
- (long long)loadingIndicatorStyle;
- (id)loadingTextColor;
- (id)loadingTextShadowColor;
- (id)loadsWhenHidden;
- (id)newNativeViewController;
- (id)placeholderBackgroundStyle;
- (void)reloadWithCallback:(id)arg1;
- (id)rootObject;
- (id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2;
- (id)scriptAttributeKeys;
- (bool)scrollingEnabled;
- (id)segmentedControl;
- (void)setAlwaysDispatchesScrollEvents:(id)arg1;
- (void)setDoubleTapEnabled:(bool)arg1;
- (void)setFlashesScrollIndicators:(bool)arg1;
- (void)setInputViewObeysDOMFocus:(id)arg1;
- (void)setLoadingIndicatorStyle:(long long)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingTextShadowColor:(id)arg1;
- (void)setLoadsWhenHidden:(id)arg1;
- (void)setNativeViewController:(id)arg1;
- (void)setPlaceholderBackgroundStyle:(id)arg1;
- (void)setScrollEdgeInsetsWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (void)setScrollingEnabled:(bool)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setShouldInvalidateForLowMemory:(bool)arg1;
- (void)setShouldLoadProgressively:(bool)arg1;
- (void)setShouldShowFormAccessory:(id)arg1;
- (void)setShowsBackgroundShadow:(bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(id)arg1;
- (void)setShowsVerticalScrollIndicator:(id)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldInvalidateForLowMemory;
- (bool)shouldLoadProgressively;
- (id)shouldShowFormAccessory;
- (bool)showsBackgroundShadow;
- (id)showsHorizontalScrollIndicator;
- (id)showsVerticalScrollIndicator;
- (id)timeoutInterval;
- (id)userInfo;

@end
