/* made by EzioChiu.
 */

@protocol NUIContainerStackViewDelegate <NUIContainerViewDelegate>

@optional

- (long long)containerStackView:(NUIContainerStackView *)arg1 alignmentForArrangedSubview:(UIView *)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(NUIContainerStackView *)arg1 minimumDirectionalSpacingAdjecentToArrangedSubview:(UIView *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(NUIContainerStackView *)arg1 minimumSpacingAdjecentToArrangedSubview:(UIView *)arg2;

@end
