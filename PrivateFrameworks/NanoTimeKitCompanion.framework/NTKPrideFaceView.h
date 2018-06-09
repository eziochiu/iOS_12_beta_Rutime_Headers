/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPrideFaceView : NTKAVListingFaceBaseView {
    NTKPrideController * _controller;
    UIView * _cornerView;
    UIColor * _currentComplicationColor;
    NTKDigitialUtilitarianFaceViewComplicationFactory * _faceViewComplicationFactory;
    long long  _previousDataMode;
    NSString * _previousWakeListing;
    bool  _tapPromptedVideoChange;
    bool  _tapToPlayGestureEnabled;
    NTKComplicationDisplayWrapperView * _touchWrapper;
}

- (void).cxx_destruct;
- (double)_adjustmentForBottomTimeLayout;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_backlightDidTurnOff;
- (void)_backlightWillTurnOff;
- (void)_cleanupAfterEditing;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_currentPosterImageView;
- (id)_editingComplicationColor;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleOrdinaryScreenWake;
- (void)_handleSingleTap:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_performPreloadVideoTask;
- (id)_posterImageView;
- (id)_posterImageViewForStyle:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (void)_queueVideo:(id)arg1;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)_selectDefaultListing;
- (bool)_shouldFadeToTransitionView;
- (bool)_shouldPlayVideoOnScreenWake;
- (bool)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (bool)_timeLabelUsesLegibility;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationWithColor:(id)arg1;
- (void)_updatePaused;
- (id)_viewForEditOption:(id)arg1;
- (bool)_wantsTimeTravelStatusModule;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (bool)shouldChangeVariantForScreenWake;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)videoPlayerView;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end
