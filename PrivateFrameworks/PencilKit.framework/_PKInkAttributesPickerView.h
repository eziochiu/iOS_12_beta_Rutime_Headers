/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkAttributesPickerView : UIControl <_PKColorAlphaSliderDelegate> {
    _PKColorAlphaSlider * _colorAlphaSlider;
    PKInk * _ink;
    _PKInkAttributesOpacityLabel * _opacityLabel;
    UIView * _separatorView;
    _PKInkThicknessPicker * _thicknessPicker;
}

@property (nonatomic, retain) _PKColorAlphaSlider *colorAlphaSlider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKInk *ink;
@property (nonatomic, retain) _PKInkAttributesOpacityLabel *opacityLabel;
@property (nonatomic, retain) UIView *separatorView;
@property (readonly) Class superclass;
@property (nonatomic, retain) _PKInkThicknessPicker *thicknessPicker;

+ (double)representableOpacityForOpacity:(double)arg1;

- (void).cxx_destruct;
- (void)_showOpacityLabel:(bool)arg1 animated:(bool)arg2;
- (id)colorAlphaSlider;
- (void)colorAlphaSlider:(id)arg1 didBeginSliding:(bool)arg2;
- (id)initWithInk:(id)arg1;
- (id)ink;
- (void)layoutSubviews;
- (id)opacityLabel;
- (void)opacityValueChanged:(id)arg1;
- (id)separatorView;
- (void)setColorAlphaSlider:(id)arg1;
- (void)setInk:(id)arg1;
- (void)setOpacityLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setThicknessPicker:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thicknessPicker;
- (void)thicknessValueChanged:(id)arg1;

@end
