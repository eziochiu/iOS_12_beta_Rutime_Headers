/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagEditorColorPickerCell : UICollectionViewCell {
    DOCTagColorPicker * _colorPickerView;
}

@property (nonatomic, readonly) UIGestureRecognizer *changeColorPanGestureRecognizer;
@property (nonatomic, retain) DOCTagColorPicker *colorPickerView;
@property (nonatomic, readonly) long long selectedColor;

- (void).cxx_destruct;
- (id)changeColorPanGestureRecognizer;
- (id)colorPickerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)selectedColor;
- (void)setColorPickerView:(id)arg1;

@end
