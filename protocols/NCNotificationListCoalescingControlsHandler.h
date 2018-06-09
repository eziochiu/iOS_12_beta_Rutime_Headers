/* made by EzioChiu.
 */

@protocol NCNotificationListCoalescingControlsHandler <NSObject>

@required

- (NSString *)coalescingIdentifier;
- (unsigned long long)groupingSection;
- (<NCNotificationListCoalescingControlsHandlerDelegate> *)handlerDelegate;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (void)setCoalescingIdentifier:(NSString *)arg1;
- (void)setGroupingSection:(unsigned long long)arg1;
- (void)setHandlerDelegate:(id <NCNotificationListCoalescingControlsHandlerDelegate>)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;

@end
