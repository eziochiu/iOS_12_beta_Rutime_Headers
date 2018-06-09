/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKEmbossedColorPickerButton : _PKInkColorButton {
    UIImageView * _embossImageView;
    _PKHueSpectrumView * _hueSpectrumView;
    CAShapeLayer * _selectedColorLayer;
}

@property (nonatomic, retain) UIImageView *embossImageView;
@property (nonatomic, retain) _PKHueSpectrumView *hueSpectrumView;
@property (nonatomic, retain) CAShapeLayer *selectedColorLayer;

- (void).cxx_destruct;
- (id)embossImageView;
- (id)hueSpectrumView;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (void)layoutSubviews;
- (id)selectedColorLayer;
- (void)setEmbossImageView:(id)arg1;
- (void)setHueSpectrumView:(id)arg1;
- (void)setSelectedColorLayer:(id)arg1;

@end
