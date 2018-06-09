/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaUberHeaderLegibilityOverlayView : UIView {
    UIColor * _bottomGradientColor;
    NSString * _bottomGradientType;
    MPUGradientView * _bottomGradientView;
    double  _radialGradientEdgeElevation;
    double  _radialGradientHeight;
    UIColor * _topGradientColor;
}

@property (nonatomic, retain) UIColor *bottomGradientColor;
@property (nonatomic, copy) NSString *bottomGradientType;
@property (nonatomic, retain) UIColor *topGradientColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateGradientLayers;
- (id)bottomGradientColor;
- (id)bottomGradientType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomGradientColor:(id)arg1;
- (void)setBottomGradientType:(id)arg1;
- (void)setTopGradientColor:(id)arg1;
- (id)topGradientColor;

@end
