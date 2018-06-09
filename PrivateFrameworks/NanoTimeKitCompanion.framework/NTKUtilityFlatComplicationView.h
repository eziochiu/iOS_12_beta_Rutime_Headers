/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView {
    NTKColoringLabel * _activeLabel;
    UIView<NTKComplicationImageView> * _imageView;
    NTKColoringLabel * _label;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateLabelMaxWidth;
- (double)_widthThatFits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
