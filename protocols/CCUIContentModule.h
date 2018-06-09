/* made by EzioChiu.
 */

@protocol CCUIContentModule <NSObject>

@required

- (UIViewController<CCUIContentModuleContentViewController> *)contentViewController;

@optional

- (UIViewController *)backgroundViewController;
- (void)setContentModuleContext:(CCUIContentModuleContext *)arg1;

@end
