/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformSelectionOverlay : UIView {
    RCUIConfiguration * _UIConfiguration;
    double  _assetCurrentTime;
    double  _assetDuration;
    bool  _barMatchesKnobRadius;
    RCTextLayer * _beginTimeLayer;
    bool  _beginTimeLayerOffsetForThumb;
    RCOverlayBarLayer * _beginTimeSelection;
    RCOverlayBarLayer * _currentTimeBar;
    <RCWaveformSelectionOverlayDelegate> * _delegate;
    bool  _displayingSelectionTimes;
    bool  _editingEnabled;
    bool  _enablePlayBarTracking;
    bool  _enableTimeTrackingInView;
    RCTextLayer * _endTimeLayer;
    bool  _endTimeLayerOffsetForThumb;
    RCOverlayBarLayer * _endTimeSelection;
    bool  _isRecording;
    double  _knobWidthMultiplier;
    CALayer * _middleSelectionOverlay;
    bool  _playBarOnly;
    double  _requestedAnimatedLayoutDuration;
    bool  _requestedNonAnimatedLayout;
    struct { 
        double beginTime; 
        double endTime; 
    }  _selectedTimeRange;
    double  _selectedTimeRangeMaximumDuration;
    double  _selectedTimeRangeMinimumDuration;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _selectionAreaInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionRect;
    bool  _sublayersCreated;
    double  _trackedAssetCurrentTime;
    NSMutableDictionary * _trackedTouches;
}

@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (nonatomic) double assetCurrentTime;
@property (nonatomic) double assetDuration;
@property (nonatomic) bool barMatchesKnobRadius;
@property (nonatomic, readonly) long long beginTimeIndicatorSelectionAffinity;
@property (nonatomic, readonly) double currentTimeIndicatorCoordinate;
@property (nonatomic) <RCWaveformSelectionOverlayDelegate> *delegate;
@property (getter=isDisplayingSelectionTimes, nonatomic) bool displayingSelectionTimes;
@property (getter=isEditingEnabled, nonatomic) bool editingEnabled;
@property (nonatomic) bool enablePlayBarTracking;
@property (nonatomic) bool enableTimeTrackingInView;
@property (nonatomic, readonly) long long endTimeIndicatorSelectionAffinity;
@property (nonatomic) bool isRecording;
@property (nonatomic) double knobWidthMultiplier;
@property (nonatomic) bool playBarOnly;
@property (nonatomic, readonly) struct { double x1; double x2; } selectedTimeRange;
@property (nonatomic) double selectedTimeRangeMaximumDuration;
@property (nonatomic) double selectedTimeRangeMinimumDuration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionRect;
@property (nonatomic) double trackedAssetCurrentTime;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (bool)__shouldDisplayBeginTimeText;
- (bool)__shouldDisplayEndTimeText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alternateBeginTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alternateEndTimeRectWithSizedTextLayer:(id)arg1;
- (void)_autoUpdateIsDisplayingSelectionTimes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_beginTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(bool*)arg2;
- (bool)_beginTrackingSelectionBar:(id)arg1 selectionBarType:(long long)arg2 withTouch:(id)arg3;
- (void)_clearStaleTouches;
- (void)_clearSublayers;
- (void)_createSublayersIfNeeded;
- (bool)_drawsSelectionForWidth:(double)arg1;
- (double)_effectiveSelectionWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_endTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(bool*)arg2;
- (id)_hitSelectionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_middleTimeRectWithFont:(id)arg1;
- (double)_minimumOverlaySelectionWidth;
- (double)_minimumOverlayWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionBoundsIncludingKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionHighlightBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionRectForSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)_setWantsAnimatedLayoutDuration:(double)arg1;
- (bool)_shouldDisplayBeginTimeText;
- (bool)_shouldDisplayEndTimeText;
- (bool)_shouldOffsetSelectionBarTypeForThumb:(long long)arg1;
- (id)_touchTrackingInfoForSelectionBarTye:(long long)arg1;
- (void)_updateSelectedTimeRangeForTrackedTouchesAnimated:(bool)arg1;
- (double)_xAdjustmentAmount;
- (double)assetCurrentTime;
- (double)assetDuration;
- (bool)barMatchesKnobRadius;
- (long long)beginTimeIndicatorSelectionAffinity;
- (double)currentTimeIndicatorCoordinate;
- (id)delegate;
- (bool)enablePlayBarTracking;
- (bool)enableTimeTrackingInView;
- (long long)endTimeIndicatorSelectionAffinity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 height:(double)arg2 selectionAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingSelectionTimes;
- (bool)isEditingEnabled;
- (bool)isRecording;
- (double)knobWidthMultiplier;
- (void)layoutSubviews;
- (bool)playBarOnly;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)reloadSelectionOffsets;
- (struct { double x1; double x2; })selectedTimeRange;
- (double)selectedTimeRangeMaximumDuration;
- (double)selectedTimeRangeMinimumDuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRect;
- (void)setAssetCurrentTime:(double)arg1;
- (void)setAssetDuration:(double)arg1;
- (void)setBarMatchesKnobRadius:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayingSelectionTimes:(bool)arg1;
- (void)setEditingEnabled:(bool)arg1;
- (void)setEnablePlayBarTracking:(bool)arg1;
- (void)setEnableTimeTrackingInView:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsRecording:(bool)arg1;
- (void)setKnobWidthMultiplier:(double)arg1;
- (void)setPlayBarOnly:(bool)arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 withAnimationDuration:(double)arg2;
- (void)setSelectedTimeRangeMaximumDuration:(double)arg1;
- (void)setSelectedTimeRangeMinimumDuration:(double)arg1;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackedAssetCurrentTime:(double)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)trackedAssetCurrentTime;

@end
