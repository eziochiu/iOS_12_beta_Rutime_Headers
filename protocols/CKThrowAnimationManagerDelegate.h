/* made by EzioChiu.
 */

@protocol CKThrowAnimationManagerDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })throwAnimationKeyboardFrame:(CKThrowAnimationManager *)arg1;
- (void)throwAnimationManager:(CKThrowAnimationManager *)arg1 canNowSendMessages:(NSArray *)arg2;
- (double)throwAnimationManagerAccessoryViewHeight:(CKThrowAnimationManager *)arg1;
- (CKMessageEntryView *)throwAnimationManagerEntryView:(CKThrowAnimationManager *)arg1;
- (void)throwAnimationManagerPrepareForThrowAnimation:(CKThrowAnimationManager *)arg1 context:(id <CKSendAnimationContext>)arg2;
- (double)throwAnimationManagerTopHeaderHeight:(CKThrowAnimationManager *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })throwAnimationWindowFrame:(CKThrowAnimationManager *)arg1;

@end
