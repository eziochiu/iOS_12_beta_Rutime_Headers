/* made by EzioChiu.
 */

@protocol UIFocusedInterfaceActionPressDelegate <NSObject>

@required

- (UIInterfaceAction *)focusedInterfaceAction;
- (void)handlePressedFocusedInterfaceAction:(UIInterfaceAction *)arg1;

@end
