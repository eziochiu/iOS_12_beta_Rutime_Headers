/* made by EzioChiu.
 */

@protocol WKWebViewContentProvider <NSObject>

@required

- (void)web_computedContentInsetDidChange;
- (UIView *)web_contentView;
- (void)web_countStringMatches:(NSString *)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_findString:(NSString *)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(WKWebView *)arg2;
- (void)web_setContentProviderData:(NSData *)arg1 suggestedFilename:(NSString *)arg2;
- (void)web_setFixedOverlayView:(UIView *)arg1;
- (void)web_setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;

@optional

- (NSData *)web_dataRepresentation;
- (bool)web_isBackground;
- (void)web_scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)web_scrollViewDidScroll:(UIScrollView *)arg1;
- (void)web_scrollViewDidZoom:(UIScrollView *)arg1;
- (void)web_scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (NSString *)web_suggestedFilename;

@end
