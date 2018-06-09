/* made by EzioChiu.
 */

@protocol UIShareUIAccessoryPlugIn <NSObject>

@required

+ (id)shareSheetPlugInWithPresentingHost:(id <UIShareUIAccessoryHosting>)arg1 URLs:(NSArray *)arg2;

- (NSArray *)URLs;
- (void)commitPendingChanges;
- (<UIShareUIAccessoryHosting> *)host;
- (UIViewController<UIShareUIAccessoryPresenting> *)inlineAccessoryViewController;

@end
