/* made by EzioChiu.
 */

@protocol FBSceneHostAppearance <NSObject>

@required

- (unsigned long long)appearanceStyle;
- (UIColor *)backgroundColorWhileHosting;
- (UIColor *)backgroundColorWhileNotHosting;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })hostViewTransform;
- (unsigned long long)hostedLayerTypes;
- (bool)isClippingDisabled;
- (bool)isHosting;
- (double)level;
- (NSString *)minificationFilterName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (unsigned long long)renderingMode;
- (void)setAppearanceStyle:(unsigned long long)arg1;
- (void)setBackgroundColorWhileHosting:(UIColor *)arg1;
- (void)setBackgroundColorWhileNotHosting:(UIColor *)arg1;
- (void)setClippingDisabled:(bool)arg1;
- (void)setHostViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setHostedLayerTypes:(unsigned long long)arg1;
- (void)setMinificationFilterName:(NSString *)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;

@end
