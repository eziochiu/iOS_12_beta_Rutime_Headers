/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay> {
    CLKComplicationTemplate * _complicationTemplate;
    CLKDevice * _device;
    UIColor * _foregroundColor;
    UIView * _highlightView;
    UIView * _platter;
    UIColor * _platterColor;
    NSDate * _timeTravelDate;
    bool  _useRoundedFontDesign;
    bool  _usesMediumLayout;
    bool  _usesMultiColor;
    bool  _wantsPlatter;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *platterColor;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) bool useRoundedFontDesign;
@property (nonatomic) bool usesMediumLayout;
@property (nonatomic) bool usesMultiColor;
@property (nonatomic) bool wantsPlatter;

+ (id)_alarmImageProviderMedium:(bool)arg1;
+ (id)_stopwatchImageProviderMedium:(bool)arg1;
+ (id)_timerImageProviderMedium:(bool)arg1;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (id)mediumViewForComplicationType:(unsigned long long)arg1;
+ (id)viewForComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (id)_fontForDynamicFontSize:(long long)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; struct UIEdgeInsets { double x_13_1_1; double x_13_1_2; double x_13_1_3; double x_13_1_4; } x13; })_layoutConstants;
- (id)_mediumStackFontForText:(id)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_updateColorChange;
- (void)_updateForTemplateChange;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelViewColor:(id)arg1;
- (void)_updateLabelsForFontChange;
- (long long)_variableFontSizeForText:(id)arg1;
- (id)complicationTemplate;
- (id)device;
- (id)displayObserver;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)platterColor;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setComplicationTemplate:(id)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPlatterColor:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setUseRoundedFontDesign:(bool)arg1;
- (void)setUsesMediumLayout:(bool)arg1;
- (void)setUsesMultiColor:(bool)arg1;
- (void)setWantsPlatter:(bool)arg1;
- (id)timeTravelDate;
- (bool)useRoundedFontDesign;
- (bool)usesMediumLayout;
- (bool)usesMultiColor;
- (bool)wantsPlatter;

@end
