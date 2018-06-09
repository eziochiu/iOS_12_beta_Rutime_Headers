/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying> {
    NSMutableDictionary * _cachedFonts;
    NSString * _cachedUniqueIdentifier;
    bool  _canShowBreadcrumbs;
    bool  _hasBusyBackground;
    double  _height;
    long long  _idiom;
    bool  _isTintColorBlack;
    long long  _legibilityStyle;
    UIColor * _tintColor;
}

@property (nonatomic) bool canShowBreadcrumbs;
@property (nonatomic, readonly, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(bool)arg4;
- (void)_cacheImage:(id)arg1 named:(id)arg2;
- (void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5;
- (id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3;
- (id)_cachedImageNamed:(id)arg1;
- (void)_drawText:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;
- (double)_roundDimension:(double)arg1;
- (bool)_shouldUseBoldFontForStyle:(long long)arg1;
- (id)accessibilityHUDImageNamed:(id)arg1;
- (long long)activityIndicatorStyleWithSyncActivity:(bool)arg1;
- (double)baselineOffsetForStyle:(long long)arg1;
- (double)batteryAccessoryMargin;
- (id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(bool)arg3;
- (id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(bool)arg2;
- (double)bluetoothBatteryExtraPadding;
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;
- (bool)canShowBreadcrumbs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(int)arg2 style:(unsigned long long)arg3;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(bool)arg4;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(double)arg2;
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize { double x1; double x2; })arg7 textHeight:(double)arg8;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2 withBlock:(id /* block */)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForBluetoothBatteryInsides;
- (id)expandedNameForImageName:(id)arg1;
- (id)generateUniqueIdentifier;
- (double)height;
- (long long)idiom;
- (id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 shouldCache:(bool)arg10;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(bool)arg4;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(bool)arg4 idiom:(long long)arg5;
- (double)leftEdgePadding;
- (long long)legibilityStyle;
- (id)makeTextFontForStyle:(long long)arg1;
- (double)middlePadding;
- (struct CGPoint { double x1; double x2; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)proportionalFontForFont:(id)arg1;
- (double)rightEdgePadding;
- (double)scale;
- (void)setCanShowBreadcrumbs:(bool)arg1;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 shouldCache:(bool)arg6;
- (double)shadowPadding;
- (double)sizeForMoonMaskVisible:(bool)arg1;
- (double)standardPadding;
- (bool)supportsShowingBuildVersion;
- (id)textColorForStyle:(long long)arg1;
- (id)textFontForStyle:(long long)arg1;
- (id)textForNetworkType:(int)arg1;
- (double)textOffsetForStyle:(long long)arg1;
- (id)tintColor;
- (id)uncachedImageNamed:(id)arg1;
- (id)uniqueIdentifier;
- (id)untintedImageNamed:(id)arg1;
- (bool)usesVerticalLayout;

@end
