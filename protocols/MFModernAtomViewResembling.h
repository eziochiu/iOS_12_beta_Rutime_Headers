/* made by EzioChiu.
 */

@protocol MFModernAtomViewResembling <NSObject>

@required

- (struct CGPoint { double x1; double x2; })baselinePoint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)hidesVIPIndicator;
- (bool)isPrimaryAddressAtom;
- (void)performBuildInAnimationFromTextColor:(UIColor *)arg1 withDuration:(double)arg2;
- (unsigned long long)presentationOptions;
- (double)scale;
- (bool)separatorHidden;
- (bool)separatorIsLeftAligned;
- (int)separatorStyle;
- (void)setHidesVIPIndicator:(bool)arg1;
- (void)setIsPrimaryAddressAtom:(bool)arg1;
- (void)setPresentationOptions:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setSeparatorIsLeftAligned:(bool)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTitleFont:(UIFont *)arg1;
- (UIFont *)titleFont;

@end
