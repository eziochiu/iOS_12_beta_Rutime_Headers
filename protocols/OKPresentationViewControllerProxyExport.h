/* made by EzioChiu.
 */

@protocol OKPresentationViewControllerProxyExport <JSExport>

@required

- (struct CGPoint { double x1; double x2; })convertLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 toPage:(OKPageViewController *)arg2;
- (struct CGPoint { double x1; double x2; })convertLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 toWidget:(id <OKWidgetProtocol>)arg2;

@optional

- (struct CGPoint { double x1; double x2; })convertLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 toPage:(OKPageViewController *)arg2 __JS_EXPORT_AS__convertLocationInWindowToPage:(id)arg3;
- (struct CGPoint { double x1; double x2; })convertLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 toWidget:(id <OKWidgetProtocol>)arg2 __JS_EXPORT_AS__convertLocationInWindowToWidget:(id)arg3;

@end
