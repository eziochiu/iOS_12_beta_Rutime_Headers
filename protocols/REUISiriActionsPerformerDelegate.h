/* made by EzioChiu.
 */

@protocol REUISiriActionsPerformerDelegate <NSObject>

@required

- (void)siriActionsPerformer:(REUISiriActionsPerformer *)arg1 didFailWithError:(NSError *)arg2;
- (bool)siriActionsPerformer:(REUISiriActionsPerformer *)arg1 wantsToPresentViewController:(UIViewController *)arg2;
- (void)siriActionsPerformerDidSucceed:(REUISiriActionsPerformer *)arg1;
- (UIImage *)siriActionsPerformerWantsAlertBackgroundImage:(REUISiriActionsPerformer *)arg1;

@end
