/* made by EzioChiu.
 */

@protocol TKTonePickerStyleProvider <NSObject>

@required

- (UIView *)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (UIView *)newBackgroundViewForSelectedTonePickerCell:(bool)arg1;
- (UIColor *)tonePickerCellBackgroundColor;
- (UIColor *)tonePickerCellHighlightedTextColor;
- (UIColor *)tonePickerCellTextColor;
- (UIFont *)tonePickerCellTextFont;
- (UIColor *)tonePickerHeaderTextColor;
- (UIFont *)tonePickerHeaderTextFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tonePickerHeaderTextPaddingInsets;
- (UIColor *)tonePickerHeaderTextShadowColor;
- (struct UIOffset { double x1; double x2; })tonePickerHeaderTextShadowOffset;
- (long long)tonePickerTableViewSeparatorStyle;
- (bool)tonePickerUsesOpaqueBackground;
- (bool)wantsCustomTonePickerHeaderView;

@optional

- (long long)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
- (UIColor *)tonePickerCustomTableSeparatorColor;
- (bool)tonePickerHeaderTextShouldBeUppercase;

@end