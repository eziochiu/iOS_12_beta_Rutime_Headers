/* made by EzioChiu.
 */

@protocol SXWebContentNavigationManager <NSObject>

@required

- (unsigned long long)actionForRequest:(NSURLRequest *)arg1;
- (void)addObserver:(id <SXWebContentNavigationObserver>)arg1;
- (void)commitViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1 extension:(NSString *)arg2;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1 scheme:(NSString *)arg2;
- (void)removeObserver:(id <SXWebContentNavigationObserver>)arg1;
- (bool)shouldPreviewRequest:(NSURLRequest *)arg1;

@end
