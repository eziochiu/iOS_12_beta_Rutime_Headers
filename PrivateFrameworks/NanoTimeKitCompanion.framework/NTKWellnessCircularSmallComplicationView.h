/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView {
    NSMutableArray * _ringsFillFractions;
    NTKRingsAndDotsView * _ringsView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (double)_ringDiameter;
- (double)_ringGapWidth;
- (double)_ringStrokeWidth;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateColors;
- (void)_updateForTemplateChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setUsesMultiColor:(bool)arg1;

@end
