/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBRenderFactory10Key : UIKBRenderFactory

+ (bool)_isActiveKeyplaneSwitchKey:(id)arg1;

- (id)_preferredScriptFontForRendering:(int)arg1;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (struct CGPoint { double x1; double x2; })abcKeyTextOffset;
- (id)activeControlKeyTraits;
- (double)capitalAbcSymbolSize;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyTraits;
- (id)defaultKeyDividerColorName;
- (struct CGPoint { double x1; double x2; })dictationKeyTextOffset;
- (id)displayContentsForKey:(id)arg1;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)arg1 key:(id)arg2 onKeyplane:(id)arg3;
- (struct CGPoint { double x1; double x2; })globeKeyTextOffset;
- (double)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)lightHighQualityEnabledBlendForm;
- (struct CGPoint { double x1; double x2; })longVowelSignKeyTextOffset;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint { double x1; double x2; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x1; double x2; })numberPadKeySecondaryTextOffset;
- (struct CGPoint { double x1; double x2; })numberPadVBarSecondaryTextOffset;
- (int)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)arg1;
- (id)shiftedControlKeyTraits;
- (id)shiftedWhiteControlKeyTraits;
- (bool)shouldShowBottomRowEdge;
- (bool)shouldShowTopRowEdge;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })topEdgeAdjustmentInsets;
- (bool)useRoundCorner;

@end
