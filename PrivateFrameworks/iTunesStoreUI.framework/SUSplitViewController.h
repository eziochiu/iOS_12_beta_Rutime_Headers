/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSplitViewController : SUViewController {
    NSURL * _displayedURL;
    UIViewController * _firstViewController;
    NSString * _mainTitle;
    SUGradient * _placeholderGradient;
    SUPlaceholderViewController * _placeholderViewController;
    UIViewController * _secondViewController;
    SUShadow * _splitShadow;
    SUSplitView * _splitView;
    SUStructuredPage * _structuredPage;
    bool  _usesSharedPlaceholder;
    bool  _viewIsReady;
}

@property (nonatomic, retain) NSURL *displayedURL;
@property (nonatomic, retain) UIViewController *firstViewController;
@property (nonatomic) long long layoutType;
@property (nonatomic, retain) NSString *mainTitle;
@property (nonatomic) double minimumPaneSize;
@property (nonatomic, retain) UIViewController *secondViewController;
@property (nonatomic) double splitPosition;
@property (nonatomic, copy) SUShadow *splitShadow;
@property (nonatomic) bool usesSharedPlaceholder;
@property (getter=isVertical, nonatomic) bool vertical;
@property (nonatomic) bool viewIsReady;

+ (bool)isValidSplitPositionValue:(id)arg1;
+ (bool)isValidSplitTypeString:(id)arg1;

- (void)_loadingDidChangeNotification:(id)arg1;
- (void)_navigationItemDidChangeNotification:(id)arg1;
- (id)_newGradientWithValue:(id)arg1;
- (id)_newViewControllerFromDictionary:(id)arg1;
- (void)_reloadLoadingState;
- (void)_reloadTitle;
- (void)_reloadView;
- (void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2;
- (void)_reloadWithStorePageDictionary:(id)arg1;
- (void)_setPlaceholderVisible:(bool)arg1;
- (void)_setStructuredPage:(id)arg1;
- (void)_setViewController:(id*)arg1 toValue:(id)arg2;
- (id)_splitView;
- (void)addChildViewController:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)displayedURL;
- (id)firstViewController;
- (id)init;
- (bool)isSkLoaded;
- (bool)isVertical;
- (long long)layoutType;
- (void)loadView;
- (id)mainTitle;
- (double)minimumPaneSize;
- (id)newRotationController;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)secondViewController;
- (void)setDisplayedURL:(id)arg1;
- (void)setFirstViewController:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setMinimumPaneSize:(double)arg1;
- (void)setSecondViewController:(id)arg1;
- (void)setSkLoading:(bool)arg1;
- (void)setSplitPosition:(double)arg1;
- (void)setSplitPositionAndLayoutTypeFromValue:(id)arg1;
- (void)setSplitShadow:(id)arg1;
- (void)setSplitTypeString:(id)arg1;
- (void)setUsesSharedPlaceholder:(bool)arg1;
- (void)setVertical:(bool)arg1;
- (void)setViewIsReady:(bool)arg1;
- (bool)shouldExcludeFromNavigationHistory;
- (double)splitPosition;
- (id)splitPositionString;
- (id)splitShadow;
- (id)splitTypeString;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (id)storePageProtocol;
- (bool)usesSharedPlaceholder;
- (bool)viewIsReady;

@end
