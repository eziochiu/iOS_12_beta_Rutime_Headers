/* made by EzioChiu.
 */

@protocol _UIAtomTextViewAtomLayout <NSObject>

@required

- (bool)isEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (long long)selectionStyle;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionStyle:(long long)arg1 animated:(bool)arg2;

@optional

- (long long)baseWritingDirection;

@end
