/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarDateTimeItemView : UIStatusBarItemView {
    NSString * _dateTimeString;
    bool  _useCustomFadeAnimation;
}

@property (nonatomic, copy) NSString *dateTimeString;
@property (nonatomic) bool useCustomFadeAnimation;

+ (const char *)_cStringFromData:(struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1;

- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (id)dateTimeString;
- (double)extraRightPadding;
- (void)setDateTimeString:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUseCustomFadeAnimation:(bool)arg1;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (bool)shouldTintContentImage;
- (long long)textStyle;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (bool)useCustomFadeAnimation;

@end
