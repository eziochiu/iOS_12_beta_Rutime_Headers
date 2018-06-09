/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKAstronomyRotationModelObserver, NTKAstronomyVistaViewObserver, NTKTimeView, UIGestureRecognizerDelegate> {
    long long  _animatingToViewMode;
    NTKAstronomyVistaView * _astronomyVistaView;
    struct NSNumber { Class x1; } * _clockTimerToken;
    NSDate * _crownDate;
    NTKDigitalTimeLabel * _digitalTimeLabel;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelSmallInUpperRightCornerStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitalTimeLabelZoomEndingCenter;
    NTKDigitialUtilitarianFaceViewComplicationFactory * _faceViewComplicationFactory;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _initialCoordinate;
    UITapGestureRecognizer * _interactiveModeTapGesture;
    unsigned int  _isAnimatingViewMode;
    unsigned int  _isContentLoaded;
    unsigned int  _isFlying;
    unsigned int  _isHandlingCrownEvents;
    unsigned int  _isLocationCurrent;
    NTKAstronomyLocationDot * _locationDot;
    struct NSString { Class x1; } * _locationManagerToken;
    NSDate * _overrideDate;
    NTKColoringLabel * _overrideDateLabel;
    NTKColoringLabel * _phaseLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _phaseLabelDefaultFrame;
    NTKDelayedBlock * _physicalButtonDelayedBlock;
    long long  _previousDataMode;
    void _previousTranslation;
    float  _recentMovement;
    NTKAstronomyRotationModel * _rotationModel;
    NSDateFormatter * _scrubDateFormatter;
    NTKColoringLabel * _scrubLabel;
    UIImageView * _spheroidLabels;
    UIPanGestureRecognizer * _spheroidPanGesture;
    double  _supplementalFontLineHeightPlusDescender;
    UITapGestureRecognizer * _supplementalModeDoubleTapGesture;
    unsigned long long  _vista;
    NTKDelayedBlock * _wheelDelayedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prewarmForDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_animateTransitionToViewMode:(long long)arg1;
- (void)_applyDataMode;
- (void)_applyDataModeAnimated:(bool)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyViewMode:(long long)arg1;
- (void)_applyVista:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_asyncUpdateLocale;
- (void)_asyncUpdateTime;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (void)_bringForegroundViewsToFront;
- (bool)_canEnterInteractiveMode;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_date;
- (id)_detachedComplicationDisplays;
- (id)_digitalTimeLabelStyle:(long long)arg1;
- (void)_disableCrown;
- (void)_enableCrownForAstronomyVista:(unsigned long long)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleInteractiveModeGesture:(id)arg1;
- (void)_handleSpheroidPanGesture:(id)arg1;
- (void)_handleSupplementalModeGesture:(id)arg1;
- (void)_hideLocationDot;
- (void)_interpolateFromPose:(const struct NTKAstronomyFaceViewAnimationPose { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg1 toPose:(const struct NTKAstronomyFaceViewAnimationPose { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2 progress:(float)arg3;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_layoutPhaseLabel;
- (void)_layoutSpheroidLabel:(int)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_physicalButtonDelayedBlockFired;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)_setAstronomyFaceViewModeDefault;
- (void)_setAstronomyFaceViewModeInteractive;
- (void)_setAstronomyFaceViewModeNonInteractive;
- (void)_setAstronomyFaceViewModeSupplemental;
- (void)_setIsAnimatingViewMode:(bool)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldHideStatusBarForViewMode:(long long)arg1;
- (void)_showLocationDotIfNeeded;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_updateDigitalTimeLabelStylesForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateLocaleAnimated:(bool)arg1;
- (void)_updateLocation:(id)arg1 lastLocation:(id)arg2;
- (void)_updateTimeAnimated:(bool)arg1;
- (bool)_usesCustomZoom;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)_wheelDelayedBlockFired;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (void)layoutSubviews;
- (void)rotationModelStoppedByDecelerating:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setViewMode:(long long)arg1;

@end
