/* made by EzioChiu.
 */

@protocol AXUIAlertStyleProvider <NSObject>

@required

- (struct CGSize { double x1; double x2; })alertBackgroundSizeForType:(unsigned long long)arg1;
- (int)alertBackgroundStyleForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertContentEdgeInsetsForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertEdgeInsetsForType:(unsigned long long)arg1;
- (double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
- (int)alertPositionForType:(unsigned long long)arg1;
- (bool)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
- (UIColor *)alertSubtitleTextColorForType:(unsigned long long)arg1;
- (UIFont *)alertSubtitleTextFontForType:(unsigned long long)arg1;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
- (UIColor *)alertTextColorForType:(unsigned long long)arg1;
- (UIFont *)alertTextFontForType:(unsigned long long)arg1;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;

@optional

- (double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alertBackgroundImageCapInsetsForType:(unsigned long long)arg1;
- (UIImage *)alertBackgroundImageForType:(unsigned long long)arg1;

@end
