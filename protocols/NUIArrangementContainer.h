/* made by EzioChiu.
 */

@protocol NUIArrangementContainer <NSObject>

@required

- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id <NUIArrangementItem>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id <NUIArrangementItem>)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@optional

- (double)displayScale;
- (long long)effectiveUserInterfaceLayoutDirection;
- (bool)supportsAsynchronousMeasurement;

@end
