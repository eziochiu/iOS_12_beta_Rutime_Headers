/* made by EzioChiu.
 */

@protocol OKPageViewControllerProxyExport <JSExport>

@required

- (OKWidgetView *)addWidgetViewWithTemplateName:(NSString *)arg1 name:(NSString *)arg2 andSettings:(NSDictionary *)arg3;
- (struct CGPoint { double x1; double x2; })convertPointWithMotionAndParallax:(struct CGPoint { double x1; double x2; })arg1 andZPosition:(double)arg2;

@optional

- (OKWidgetView *)addWidgetViewWithTemplateName:(NSString *)arg1 name:(NSString *)arg2 andSettings:(NSDictionary *)arg3 __JS_EXPORT_AS__widgetFromTemplate:(id)arg4;
- (struct CGPoint { double x1; double x2; })convertPointWithMotionAndParallax:(struct CGPoint { double x1; double x2; })arg1 andZPosition:(double)arg2 __JS_EXPORT_AS__convertPointWithMotionAndParallax:(id)arg3;

@end
