/* made by EzioChiu.
 */

@protocol CNContactActionDelegate <NSObject>

@required

- (void)action:(CNContactAction *)arg1 dismissViewController:(UIViewController *)arg2 sender:(id)arg3;
- (void)action:(CNContactAction *)arg1 prepareChildContactViewController:(CNContactContentViewController *)arg2 sender:(id)arg3;
- (void)action:(CNContactAction *)arg1 presentViewController:(UIViewController *)arg2 sender:(id)arg3;
- (void)action:(CNContactAction *)arg1 pushViewController:(UIViewController *)arg2 sender:(id)arg3;
- (void)actionDidFinish:(CNContactAction *)arg1;
- (void)actionDidUpdate:(CNContactAction *)arg1;
- (void)actionWasCanceled:(CNContactAction *)arg1;
- (CNContactViewCache *)contactViewCache;

@end
