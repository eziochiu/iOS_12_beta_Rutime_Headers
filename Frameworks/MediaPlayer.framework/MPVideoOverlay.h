/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoOverlay : UIView <MPDetailSliderDelegate, MPVideoOverlay> {
    bool  _controlsAutohideDisabled;
    <MPVideoOverlayDelegate> * _delegate;
    unsigned long long  _desiredParts;
    unsigned long long  _disabledParts;
    long long  _interfaceOrientation;
    MPAVItem * _item;
    double  _lastTickTime;
    MPAVController * _player;
    MPDetailSlider * _scrubControl;
    NSMutableDictionary * _tickTimeEvents;
    <MPVideoControllerProtocol> * _videoViewController;
    unsigned long long  _visibleParts;
    bool  _wantsTick;
}

@property (nonatomic) bool allowsWirelessPlayback;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVideoOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic, readonly, retain) UINavigationBar *navigationBar;
@property (nonatomic) bool navigationBarHidden;
@property (nonatomic, retain) MPAVController *player;
@property (readonly) Class superclass;
@property (nonatomic) <MPVideoControllerProtocol> *videoViewController;
@property (nonatomic) unsigned long long visibleParts;

- (void).cxx_destruct;
- (double)_duration;
- (void)_endSliderTracking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (double)_playableDuration;
- (void)_tickNotification:(id)arg1;
- (bool)allowsWirelessPlayback;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (id)navigationBar;
- (bool)navigationBarHidden;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (id)player;
- (void)registerForPlayerNotifications;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (void)unregisterForPlayerNotifications;
- (bool)updateTimeBasedValues;
- (id)videoViewController;
- (unsigned long long)visibleParts;

@end
