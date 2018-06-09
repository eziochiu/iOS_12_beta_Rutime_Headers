/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserView : UIView {
    double  _bottomBarOffset;
    UIView * _contentContainerView;
    bool  _contentReadyForDisplay;
    _SFCrashBanner * _crashBanner;
    double  _crashBannerOffset;
    WKWebView * _currentWebView;
    <SFBrowserViewDelegate> * _delegate;
    bool  _hasReceivedTouchEvents;
    double  _minimalUITopOffset;
    _SFNavigationBar * _navigationBar;
    unsigned long long  _navigationBarBehavior;
    _SFLinkPreviewHeader * _previewHeader;
    UIView * _scrollToTopView;
    bool  _shouldUseScrollToTopView;
    UIView * _statusBarBackgroundView;
    _SFBrowserToolbar * _toolbar;
    double  _topBarHeight;
}

@property (nonatomic) double bottomBarOffset;
@property (nonatomic, readonly) UIView *contentContainerView;
@property (nonatomic, retain) _SFCrashBanner *crashBanner;
@property (nonatomic) double crashBannerOffset;
@property (nonatomic, readonly) WKWebView *currentWebView;
@property (nonatomic) <SFBrowserViewDelegate> *delegate;
@property (nonatomic, readonly) bool hasReceivedTouchEvents;
@property (nonatomic) double minimalUITopOffset;
@property (nonatomic, retain) _SFNavigationBar *navigationBar;
@property (nonatomic) unsigned long long navigationBarBehavior;
@property (nonatomic, readonly) double navigationBarOffset;
@property (nonatomic, retain) _SFLinkPreviewHeader *previewHeader;
@property (nonatomic, readonly) UIView *scrollToTopView;
@property (nonatomic) bool shouldUseScrollToTopView;
@property (nonatomic, retain) UIView *statusBarBackgroundView;
@property (nonatomic, retain) _SFBrowserToolbar *toolbar;
@property (nonatomic) double topBarHeight;

- (void).cxx_destruct;
- (void)addWebView:(id)arg1;
- (double)bottomBarOffset;
- (id)contentContainerView;
- (id)crashBanner;
- (double)crashBannerOffset;
- (id)currentWebView;
- (id)delegate;
- (bool)hasReceivedTouchEvents;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)minimalUITopOffset;
- (id)navigationBar;
- (unsigned long long)navigationBarBehavior;
- (double)navigationBarOffset;
- (id)previewHeader;
- (id)scrollToTopView;
- (void)setBottomBarOffset:(double)arg1;
- (void)setContentReadyForDisplay;
- (void)setCrashBanner:(id)arg1;
- (void)setCrashBannerOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimalUITopOffset:(double)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarBehavior:(unsigned long long)arg1;
- (void)setPreviewHeader:(id)arg1;
- (void)setShouldUseScrollToTopView:(bool)arg1;
- (void)setStatusBarBackgroundView:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setTopBarHeight:(double)arg1;
- (bool)shouldUseScrollToTopView;
- (id)statusBarBackgroundView;
- (id)toolbar;
- (double)topBarHeight;
- (void)updateDismissButtonStyle:(long long)arg1;
- (void)updateNavigationBarTintColor:(id)arg1;
- (void)updatePreviewHeader;
- (void)updateToolbarTintColor:(id)arg1;

@end
