/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryAnalogFaceView : NTKAnalogFaceView <NTKUtilityComplicationFactoryDelegate, NTKVictoryAnalogBackgroundViewDelegate> {
    NTKVictoryAnalogBackgroundView * _backgroundView;
    NTKRoundedCornerOverlayView * _cornerView;
    NTKUtilityComplicationFactory * _utilityComplicationFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColor:(id)arg1 toComplicationView:(id)arg2;
- (void)_applyComplicationViewColor:(id)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (struct CGPoint { double x1; double x2; })_contentCenterOffset;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (double)_keylineEdgeGapForState:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (void)_prepareTimeViewForReuse:(id)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeTravelCaptionLabelMaxWidth;
- (struct CGPoint { double x1; double x2; })_timeTravelStatusModuleCenter;
- (void)_unloadSnapshotContentViews;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)logoTappedFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;

@end
