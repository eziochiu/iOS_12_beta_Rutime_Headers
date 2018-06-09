/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCreativeCameraButton : UIButton {
    long long  _layoutStyle;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    bool  _useCompactLayout;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (setter=useCompactLayout:, nonatomic) bool useCompactLayout;

- (void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1;
- (void)_updateImages;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isActive;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (bool)useCompactLayout;
- (void)useCompactLayout:(bool)arg1;

@end
