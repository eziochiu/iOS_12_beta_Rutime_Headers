/* made by EzioChiu.
 */

@protocol OKWidgetViewDelegate <NSObject>

@required

- (void)evaluateScript:(void *)arg1 withInfoDictionary:(void *)arg2 andCompletionBlock:(void *)arg3 forWidgetView:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, OKWidgetView *
- (OKPageView *)pageViewForWidgetView:(OKWidgetView *)arg1;
- (void)widgetView:(OKWidgetView *)arg1 addHighSpeedOperations:(NSArray *)arg2 andConsumingOperations:(NSArray *)arg3;
- (void)widgetViewCancelAllOperations:(OKWidgetView *)arg1;
- (void)widgetViewCancelAllOperations:(OKWidgetView *)arg1 withIdentifier:(NSString *)arg2;
- (NSString *)widgetViewResolution:(OKWidgetView *)arg1;

@end
