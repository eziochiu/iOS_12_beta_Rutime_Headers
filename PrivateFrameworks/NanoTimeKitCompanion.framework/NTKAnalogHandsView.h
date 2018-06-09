/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogHandsView : UIView <NTKTimeView> {
    bool  _animatingToNewDate;
    NSTimer * _animationUpdateTimer;
    NSCalendar * _calendar;
    NTKColoringImageView * _colorTransitionSecondHandLargeCircleView;
    NTKColoringImageView * _colorTransitionSecondHandLowerView;
    NTKColoringImageView * _colorTransitionSecondHandSmallCircleView;
    NTKColoringImageView * _colorTransitionSecondHandUpperView;
    long long  _dataMode;
    CLKDevice * _device;
    NSNumber * _displayLinkToken;
    bool  _frozen;
    CALayer * _hourHandTransitionBodyLayer;
    CALayer * _hourHandTransitionStemLayer;
    NTKHandView * _hourHandView;
    NTKHandView * _hourHandView_clientSide;
    UIColor * _inlayColor;
    CALayer * _minuteHandDot;
    CALayer * _minuteHandTransitionBodyLayer;
    CALayer * _minuteHandTransitionPegLayer;
    CALayer * _minuteHandTransitionStemLayer;
    NTKHandView * _minuteHandView;
    NTKHandView * _minuteHandView_clientSide;
    NSDate * _overrideDate;
    NTKHandView * _secondHandView;
    NTKHandView * _secondHandView_clientSide;
    bool  _shouldRestoreSecondHandAfterScrubbing;
    bool  _showDebugClientSideHands;
    double  _timeOffset;
    bool  _timeScrubbing;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKHandView *hourHandView;
@property (nonatomic, readonly) NTKHandView *hourHandView_clientSide;
@property (nonatomic, retain) UIColor *inlayColor;
@property (nonatomic, retain) CALayer *minuteHandDot;
@property (nonatomic, retain) NTKHandView *minuteHandView;
@property (nonatomic, readonly) NTKHandView *minuteHandView_clientSide;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic, retain) NTKHandView *secondHandView;
@property (nonatomic, readonly) NTKHandView *secondHandView_clientSide;
@property (nonatomic) bool shouldRestoreSecondHandAfterScrubbing;
@property (nonatomic) bool showDebugClientSideHands;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeScrubbing;

+ (long long)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)_accessibilityInvalidateElements;
- (void)_addHourMinuteHandsTransitionLayers;
- (bool)_canRunTimeAnimation;
- (void)_deregisterFromDisplayLinkManager;
- (bool)_dontRepointDebugHands;
- (void)_enumerateHandViews:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (void)_handleDisplayLink;
- (void)_removeColorTransitionViews;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_repointDebugHandsToCurrentTime;
- (void)_significantTimeChanged;
- (void)_startNewTimeAnimation;
- (void)_stopTimeAnimation;
- (void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applySecondHandColor:(id)arg1;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (id)calendar;
- (long long)dataMode;
- (void)dealloc;
- (id)device;
- (void)didMoveToWindow;
- (id)displayTime;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)hourHandView;
- (id)hourHandView_clientSide;
- (id)initForDevice:(id)arg1;
- (id)inlayColor;
- (bool)isFrozen;
- (void)layoutSubviews;
- (id)minuteHandDot;
- (id)minuteHandView;
- (id)minuteHandView_clientSide;
- (id)overrideDate;
- (void)scrubToDate:(id)arg1 animated:(bool)arg2;
- (id)secondHandView;
- (id)secondHandView_clientSide;
- (void)setDataMode:(long long)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHourHandView:(id)arg1;
- (void)setInlayColor:(id)arg1;
- (void)setMinuteHandDot:(id)arg1;
- (void)setMinuteHandView:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setSecondHandView:(id)arg1;
- (void)setShouldRestoreSecondHandAfterScrubbing:(bool)arg1;
- (void)setShowDebugClientSideHands:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setupDefaultMinuteHandDotIfNecessary;
- (bool)shouldRestoreSecondHandAfterScrubbing;
- (bool)showDebugClientSideHands;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)timeScrubbing;

@end
