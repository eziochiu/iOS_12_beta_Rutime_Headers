/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate> {
    _PKColorPickerView * _colorPickerView;
    <PKColorPickerDelegate> * _delegate;
}

@property (nonatomic, retain) _PKColorPickerView *colorPickerView;
@property (nonatomic) <PKColorPickerDelegate> *delegate;
@property (nonatomic, retain) UIColor *selectedColor;

+ (id)_representableColorForColor:(id)arg1;

- (void).cxx_destruct;
- (void)_colorPickerViewDidChangeSelectedColor:(id)arg1;
- (void)_colorPickerViewUserDidTouchUpInside:(id)arg1;
- (id)colorPickerView;
- (id)delegate;
- (id)init;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)selectedColor;
- (void)setColorPickerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
