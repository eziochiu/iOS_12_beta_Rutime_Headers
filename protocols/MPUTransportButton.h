/* made by EzioChiu.
 */

@protocol MPUTransportButton <NSObject>

@required

+ (UIControl<MPUTransportButton> *)transportButton;

- (bool)adjustsImageWhenHighlighted;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setTransportButtonImageViewContentMode:(long long)arg1;
- (MPUTransportButtonEventHandler *)transportButtonEventHandler;
- (long long)transportButtonImageViewContentMode;
- (bool)wantsCustomHighlightAppearance;

@end
