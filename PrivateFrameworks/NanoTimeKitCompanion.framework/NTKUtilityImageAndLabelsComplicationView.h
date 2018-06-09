/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView {
    NTKColoringLabel * _firstLabel;
    UIView<NTKComplicationImageView> * _imageView;
    NTKColoringLabel * _secondLabel;
}

@property (nonatomic, retain) NTKColoringLabel *firstLabel;
@property (nonatomic, retain) UIView<NTKComplicationImageView> *imageView;
@property (nonatomic, retain) NTKColoringLabel *secondLabel;

- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (double)_gapBetweenView:(id)arg1 nextView:(id)arg2;
- (bool)_isViewVisible:(id)arg1;
- (void)_layoutSubviewsHorizontally:(id)arg1;
- (void)_setLabelAttributedText:(id)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_setLabelTextProvider:(id)arg1;
- (void)_setSecondLabelText:(id)arg1;
- (bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)_updateFirstLabelMaxSize;
- (void)_updateWithImageProvider:(id)arg1;
- (double)_widthThatFits;
- (id)firstLabel;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)secondLabel;
- (void)setFirstLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSecondLabel:(id)arg1;

@end
