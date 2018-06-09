/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformRenderer : UIViewController <CAAnimationDelegate, RCWaveformDataSourceObserver> {
    bool  _activeDisplayLinkRequired;
    double  _cachedContentWidth;
    NSMutableArray * _cachedSegmentArray;
    bool  _contentWidthDirty;
    double  _dataPointWidth;
    RCWaveformDataSource * _dataSource;
    CADisplayLink * _displayLink;
    NSTimer * _displayLinkTerminationTimer;
    bool  _frequentUpdatesSegmentUpdatesExpectedHint;
    struct { 
        double beginTime; 
        double endTime; 
    }  _highlightTimeRange;
    bool  _isCompactView;
    bool  _isEditMode;
    bool  _isOverview;
    bool  _isPlayback;
    bool  _isRecordWaveform;
    bool  _needsVisibleRangeRendering;
    bool  _paused;
    struct { 
        double beginTime; 
        double endTime; 
    }  _renderedTimeRange;
    bool  _renderedTimeRangeIsApproximatedWaveform;
    <RCWaveformRendererDelegate> * _rendererDelegate;
    double  _spacingWidth;
    struct { 
        double beginTime; 
        double endTime; 
    }  _visibleTimeRange;
}

@property (getter=isActiveDisplayLinkRequired, nonatomic) bool activeDisplayLinkRequired;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic) double dataPointWidth;
@property (nonatomic, retain) RCWaveformDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool frequentUpdatesSegmentUpdatesExpectedHint;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; } highlightTimeRange;
@property (nonatomic) bool isCompactView;
@property (nonatomic) bool isEditMode;
@property (nonatomic) bool isOverview;
@property (nonatomic) bool isPlayback;
@property (nonatomic) bool isRecordWaveform;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) <RCWaveformRendererDelegate> *rendererDelegate;
@property (nonatomic) double spacingWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct { double x1; double x2; } visibleTimeRange;

- (void).cxx_destruct;
- (void)_cancelScheduledTerminateDisplayLink;
- (void)_clearRenderingState;
- (bool)_currentViewportRequiresRenderingNewSegments;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_draw:(id)arg1;
- (double)_nonCachedContentWidth;
- (void)_performOrDispatchToMainThread:(id /* block */)arg1;
- (void)_performScheduledTerminateDisplayLink;
- (double)_pixelOffsetForTime:(double)arg1;
- (double)_pixelsPerSecond;
- (double)_pixelsPerSecondWithVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(struct { double x1; double x2; })arg2 isApproximatedWaveform:(bool)arg3;
- (void)_renderVisibleTimeRangeImmediately;
- (void)_scheduleTerminateDisplayLink;
- (void)_setNeedsRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_startRendering;
- (void)_startUpdating;
- (void)_stopRendering;
- (void)_stopUpdating;
- (double)_timeForPixelOffset:(double)arg1;
- (double)_timeForPixelOffset:(double)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (struct { double x1; double x2; })_timeRangeToRenderForVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (id)_updateCachedSegmentArray:(id)arg1 withTimeRange:(struct { double x1; double x2; })arg2;
- (struct { double x1; double x2; })_updateRenderTimeRange:(struct { double x1; double x2; })arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)contentWidth;
- (double)dataPointWidth;
- (id)dataSource;
- (void)dealloc;
- (bool)frequentUpdatesSegmentUpdatesExpectedHint;
- (struct { double x1; double x2; })highlightTimeRange;
- (double)horizontalOffsetAtTime:(double)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isActiveDisplayLinkRequired;
- (bool)isCompactView;
- (bool)isEditMode;
- (bool)isOverview;
- (bool)isPaused;
- (bool)isPlayback;
- (bool)isRecordWaveform;
- (void)loadView;
- (double)pointsPerSecondWithVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (id)rasterizeTimeRange:(struct { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)rendererDelegate;
- (void)setActiveDisplayLinkRequired:(bool)arg1;
- (void)setDataPointWidth:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFrequentUpdatesSegmentUpdatesExpectedHint:(bool)arg1;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (void)setIsCompactView:(bool)arg1;
- (void)setIsEditMode:(bool)arg1;
- (void)setIsOverview:(bool)arg1;
- (void)setIsPlayback:(bool)arg1;
- (void)setIsRecordWaveform:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRendererDelegate:(id)arg1;
- (void)setSpacingWidth:(double)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (double)spacingWidth;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct { double x1; double x2; })visibleTimeRange;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
