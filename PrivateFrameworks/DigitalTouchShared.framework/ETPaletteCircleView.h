/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPaletteCircleView : UIView {
    bool  _selected;
    UIView * _selectionMarker;
}

@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) UIView *selectionMarker;

+ (double)paletteCircleDiameter;
+ (id)selectionMarkerColor;
+ (double)selectionMarkerDiameter;

- (void).cxx_destruct;
- (void)_updateSelectionMarkerFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)selectionMarker;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
