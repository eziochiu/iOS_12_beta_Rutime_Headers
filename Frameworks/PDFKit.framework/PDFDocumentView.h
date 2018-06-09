/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentView : UIView <PDFDocumentPageChangeDelegate, PDFPageBackgroundManagerDelegate> {
    PDFDocumentViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createPageView:(id)arg1;
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)arg1;
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)arg1;
- (void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(bool)arg2;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int*)arg2;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)clearTextSelectionHandles;
- (id)createPageViewForPageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRotatePageNotification:(id)arg1;
- (void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)document;
- (struct CGSize { double x1; double x2; })documentViewSize;
- (void)enableTextSelectionHandles;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (id)initWithPDFView:(id)arg1;
- (void)layoutDocumentView;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViews;
- (void)previewRotateShiftPages:(double)arg1;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (void)removePageViewForPageAtIndex:(unsigned long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateVisibility;
- (void)willForceUpdate;
- (void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;

@end
