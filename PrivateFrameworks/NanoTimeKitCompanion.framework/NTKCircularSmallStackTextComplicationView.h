/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView {
    NTKColoringLabel * _firstLineLabel;
    NTKColoringLabel * _secondLineLabel;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelColors;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setUsesMultiColor:(bool)arg1;

@end
