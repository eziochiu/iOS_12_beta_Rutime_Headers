/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsAnalogFaceView : NTKAnalogFaceView {
    bool  _areAllComplicationsOff;
    struct NSNumber { Class x1; } * _clockTimerToken;
    NTKUtilityComplicationFactory * _complicationFactory;
    bool  _complicationPositionNeedsUpdate;
    unsigned long long  _faceColor;
    NTKNumeralsHourViewsManager * _hourViewsManager;
    unsigned long long  _selectedStyle;
    NTKEditOptionPickerView * _stylePickerView;
    long long  _utilitySlot;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFaceColor:(unsigned long long)arg1 toComplicationView:(id)arg2;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyStyle:(unsigned long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterStyleEditing;
- (long long)_complicationPlacementForCurrentHour;
- (long long)_complicationPlacementForHour:(long long)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForStyleEditing;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (long long)_currentHour;
- (void)_displayLinkFired;
- (void)_enumerateComplicationViewsWithBlock:(id /* block */)arg1;
- (id)_faceConfiguration;
- (id)_faceCurrentDate;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleTimeChange;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (bool)_isInTimeTravel;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForFullScreenEditingReducedForOutsideLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForStyleEditing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadHoursManagerIfNecessary;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needComplicationAnimationForChangeToHour:(long long)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_prepareForHourChangeWithSecondsUntilChange:(double)arg1;
- (void)_prepareForStatusChange:(bool)arg1;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (double)_secondHandAlphaForEditMode:(long long)arg1;
- (long long)_styleIndexForStyle:(unsigned long long)arg1;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (struct CGPoint { double x1; double x2; })_timeTravelStatusModuleCenter;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateAreAllComplicationsOffState;
- (void)_updateComplicationAndHourNodePlacementsWithToHour:(long long)arg1 duration:(double)arg2;
- (void)_updateComplicationPositionWithAnimationProgress:(double)arg1;
- (void)dealloc;
- (void)endScrubbingAnimated:(bool)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end
