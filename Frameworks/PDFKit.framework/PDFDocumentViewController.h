/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentViewController : UIPageViewController <PDFDocumentPageChangeDelegate, PDFPageBackgroundManagerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    PDFDocumentViewControllerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromPDFPageViewController:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPDFPageViewController:(id)arg2;
- (id)_pageViewController:(id)arg1 nextViewController:(int)arg2 forViewController:(id)arg3;
- (id)_pageViewControllerCreate:(int)arg1;
- (void)_updateCurrentPageViewController:(id)arg1;
- (double)autoScaleFactor;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int*)arg2;
- (void)clearTextSelectionHandles;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPage:(id)arg2;
- (id)currentPage;
- (void)dealloc;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)document;
- (void)enableTextSelectionHandles;
- (id)findPageViewControllerForPageIndex:(long long)arg1;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (void)goToPage:(id)arg1 direction:(long long)arg2 animated:(bool)arg3;
- (bool)hasBackgroundImage;
- (id)initWithPDFView:(id)arg1 andNavigationOrientation:(long long)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4;
- (double)maxScaleFactor;
- (double)minScaleFactor;
- (id)pageForPoint:(struct CGPoint { double x1; double x2; })arg1 nearest:(bool)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViews;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (double)scaleFactor;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selection;
- (void)setAutoScales:(bool)arg1;
- (void)setDisplaysRTL:(bool)arg1;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (void)setScaleFactor:(double)arg1;
- (void)setScrollViewScrollEnabled:(bool)arg1;
- (void)setSelection:(id)arg1;
- (void)updateScrollViews;
- (void)viewWillLayoutSubviews;
- (void)willForceUpdate;

@end
