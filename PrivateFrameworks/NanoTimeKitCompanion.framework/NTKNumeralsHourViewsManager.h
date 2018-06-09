/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsHourViewsManager : NSObject {
    bool  _adjustingForStatusIndicator;
    bool  _areComplicationsOff;
    CLKDevice * _device;
    bool  _hasUpperComplication;
    NSArray * _hourViews;
    long long  _visibleComplicationSlot;
    long long  _visibleHour;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_currentHourViewPlacementForEditMode:(long long)arg1 faceConfiguration:(id)arg2;
- (double)_hourAlphaForEditMode:(long long)arg1;
- (id)_hourViewForHour:(long long)arg1 loadIfNeeded:(bool)arg2;
- (void)_update12AdjustmentForStatusIndicator;
- (id)_visibleHourView;
- (void)addHourViewsToSuperview:(id)arg1;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 faceConfiguration:(id)arg4;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (void)configureForEditMode:(long long)arg1;
- (id)initWithStyleFromFaceConfiguration:(id)arg1 forDevice:(id)arg2;
- (bool)needHourAnimationForChangeToHour:(long long)arg1 toFaceConfiguration:(id)arg2;
- (void)removeHourViews;
- (void)setAdjustsForStatusIndicator:(bool)arg1 animated:(bool)arg2;
- (void)updateVisibleHour:(long long)arg1 targetUtilitySlot:(long long)arg2 faceConfiguration:(id)arg3 animationProgress:(double)arg4;

@end
