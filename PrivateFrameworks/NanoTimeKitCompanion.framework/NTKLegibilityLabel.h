/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLegibilityLabel : UILabel <NTKLegibilityView> {
    bool  _legibilityEnabled;
    double  _sBlur;
    UIColor * _sColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool legibilityEnabled;
@property (nonatomic) double shadowBlur;
@property (nonatomic, retain) UIColor *shadowColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsFromFonts;
- (void)_updateShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)legibilityEnabled;
- (void)setLegibilityEnabled:(bool)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (double)shadowBlur;
- (id)shadowColor;

@end
