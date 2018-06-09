/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation> {
    NSArray * _colorButtons;
    NSArray * _colorMatrix;
    <_PKColorPickerImplementationDelegate> * _colorPickerDelegate;
    UIColor * selectedColor;
}

@property (nonatomic, retain) NSArray *colorButtons;
@property (nonatomic, retain) NSArray *colorMatrix;
@property (nonatomic) <_PKColorPickerImplementationDelegate> *colorPickerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedColor;
@property (readonly) Class superclass;

+ (id)_representableColorForColor:(id)arg1;
+ (id)defaultColorMatrix;

- (void).cxx_destruct;
- (id)_boundedPointForPoint:(id)arg1;
- (id)_colorForPoint:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewWithPoint:(id)arg1;
- (id)_pointForCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_pointForColor:(id)arg1;
- (id)_pointFromButton:(id)arg1;
- (bool)circleModeForColorPickerCrosshairView:(id)arg1;
- (id)colorButtons;
- (id)colorForColorPickerCrosshairView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)colorMatrix;
- (void)colorPickerCrosshairViewShouldUpdateColor:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg1;
- (id)colorPickerDelegate;
- (void)didTapColorButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForColorPickerCrosshairView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })panningBoundsForColorPickerCrosshairView:(id)arg1;
- (id)representableColorForColor:(id)arg1;
- (id)selectedColor;
- (void)setColorButtons:(id)arg1;
- (void)setColorMatrix:(id)arg1;
- (void)setColorPickerDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;

@end
