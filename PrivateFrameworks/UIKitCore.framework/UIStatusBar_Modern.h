/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBar_Modern : UIStatusBar_Base {
    _UIStatusBar * _statusBar;
}

@property (nonatomic, retain) _UIStatusBar *statusBar;

+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 simulateLegacyAppearance:(bool)arg3 activeStyleOverride:(int*)arg4;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(bool)arg3;
+ (Class)_implementationClass;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (bool)_canShowInOrientation:(long long)arg1;
- (id)_dataFromLegacyData:(const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1;
- (id)_effectiveDataFromData:(id)arg1 activeOverride:(int)arg2;
- (long long)_effectiveStyleFromStyle:(long long)arg1;
- (int)_implicitStyleOverrideForStyle:(long long)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 inProcessStateProvider:(id)arg3;
- (void)_requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(bool)arg3;
- (void)_requestStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 animationParameters:(id)arg4 forced:(bool)arg5;
- (void)_updateSemanticContentAttributeFromLegacyData:(const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1;
- (void)_updateWithData:(id)arg1 force:(bool)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (id)enabledPartIdentifiers;
- (void)forceUpdate:(bool)arg1;
- (void)forceUpdateData:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPartWithIdentifier:(id)arg1;
- (double)heightForOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isTranslucent;
- (void)jiggleLockIcon;
- (void)layoutSubviews;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setMode:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (id)statusBar;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg2 withActions:(int)arg3;

@end
