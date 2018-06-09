/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWKWebItemViewController : QLItemViewController <QLPrintingProtocol, QLScrubViewDataSource, QLScrubViewDelegate, UIScrollViewDelegate, WKNavigationDelegate> {
    id /* block */  _completionHandler;
    bool  _fullScreen;
    NSCache * _indexToThumbnailsCache;
    NSLayoutConstraint * _leftConstraint;
    NSOperationQueue * _operationQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageSize;
    <QLWebKitPaginator> * _paginator;
    NSString * _previewContentType;
    WBUPrintPageRenderer * _renderer;
    NSLayoutConstraint * _rightConstraint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewTopOffset;
    QLScrubView * _scrubView;
    NSLayoutConstraint * _scrubberRightConstraint;
    long long  _thumbnailCount;
    <QLWebKitThumbnailGenerator> * _thumbnailGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *indexToThumbnailsCache;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

+ (bool)providesCustomPrinter;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_addThumbnailToCache:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_hideScrubberIfNeeded:(bool)arg1;
- (void)_prepareThumbnailView;
- (void)_registerRemoteProxy;
- (id)_renderer;
- (void)_scrollToPage:(long long)arg1;
- (void)_showScrubberIfNeeded:(bool)arg1 reloadThumbnails:(bool)arg2;
- (id)_thumbnailAtIndex:(unsigned long long)arg1;
- (void)_updateConstraintConstants:(bool)arg1;
- (void)_updateScrubberForTraitCollection:(id)arg1 animated:(bool)arg2 reloadThumbnailsIfNeeded:(bool)arg3;
- (void)_updateScrubberVisibilityAnimated:(bool)arg1;
- (void)_updateScrubberVisibilityAnimated:(bool)arg1 reloadThumbnailsIfNeeded:(bool)arg2;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(id)arg1;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)automaticallyUpdateScrollViewIndicatorInset;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (unsigned long long)currentPageNumber;
- (id)indexToThumbnailsCache;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadView;
- (long long)numberOfPagesInScrubView:(id)arg1;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)operationQueue;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (id)printer;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrubView;
- (void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (void)scrubView:(id)arg1 thumbnailForPage:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 withCompletionBlock:(id /* block */)arg4;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setIndexToThumbnailsCache:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setWebView:(id)arg1;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;
- (id)transitioningView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
