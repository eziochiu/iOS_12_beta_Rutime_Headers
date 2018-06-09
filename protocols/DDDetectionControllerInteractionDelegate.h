/* made by EzioChiu.
 */

@protocol DDDetectionControllerInteractionDelegate <NSObject>

@optional

- (void)action:(DDAction *)arg1 didDismissAlertController:(UIAlertController *)arg2;
- (void)actionDidFinish:(DDAction *)arg1;
- (void)actionWillStart:(DDAction *)arg1;

@end
