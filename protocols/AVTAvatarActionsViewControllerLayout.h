/* made by EzioChiu.
 */

@protocol AVTAvatarActionsViewControllerLayout

@required

- (double)actionButtonsViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actionButtonsViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarContainerViewFrame;
- (long long)buttonCount;
- (struct CGSize { double x1; double x2; })containerSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 buttonCount:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userInfoFrame;

@end
