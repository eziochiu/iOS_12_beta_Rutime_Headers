/* made by EzioChiu.
 */

@protocol NUIContainerGridViewDelegate <NUIContainerViewDelegate>

@optional

- (long long)containerGridView:(NUIContainerGridView *)arg1 horizontalAlignmentForArrangedSubview:(UIView *)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })containerGridView:(NUIContainerGridView *)arg1 minimumDirectionalSpacingAdjecentToArrangedSubview:(UIView *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerGridView:(NUIContainerGridView *)arg1 minimumSpacingAdjecentToArrangedSubview:(UIView *)arg2;
- (long long)containerGridView:(NUIContainerGridView *)arg1 verticalAlignmentForArrangedSubview:(UIView *)arg2;

@end
