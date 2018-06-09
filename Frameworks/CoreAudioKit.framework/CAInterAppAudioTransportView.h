/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAInterAppAudioTransportView : UIView {
    bool  _connected;
    UIFont * _currentTimeLabelFont;
    double  _playTime;
    bool  _playing;
    bool  _recording;
    struct HostCallbackInfo { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * callBackInfo;
    UILabel * currentTimeLabel;
    bool  enabled;
    bool  inForeground;
    struct OpaqueAudioComponentInstance { } * outputUnit;
    UIColor * pauseButtonColor;
    UIColor * playButtonColor;
    CAUITransportButton * playPauseButton;
    NSTimer * pollingPlayerTimer;
    CAUITransportButton * recordButton;
    CAUITransportButton * rewindButton;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, retain) UIFont *currentTimeLabelFont;
@property (getter=isEnabled) bool enabled;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) UIColor *pauseButtonColor;
@property (nonatomic, retain) UIColor *playButtonColor;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, retain) UIColor *recordButtonColor;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic, retain) UIColor *rewindButtonColor;

- (void)appHasGoneForeground;
- (void)appHasGoneInBackground;
- (void)audioUnitPropertyChangedListener:(void*)arg1 unit:(struct OpaqueAudioComponentInstance { }*)arg2 propID:(unsigned int)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5;
- (bool)canPlay;
- (bool)canRecord;
- (bool)canRewind;
- (id)currentTimeLabelFont;
- (void)dealloc;
- (void)getHostCallbackInfo;
- (id)getPlayTimeString;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initialize;
- (bool)isConnected;
- (bool)isEnabled;
- (bool)isHostConnected;
- (bool)isPlaying;
- (bool)isRecording;
- (id)labelColor;
- (void)layoutSubviews;
- (id)pauseButtonColor;
- (id)playButtonColor;
- (void)pollHost;
- (id)recordButtonColor;
- (void)rewindAction:(id)arg1;
- (id)rewindButtonColor;
- (void)sendStateToRemoteHost:(unsigned int)arg1;
- (void)setCurrentTimeLabelFont:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setPauseButtonColor:(id)arg1;
- (void)setPlayButtonColor:(id)arg1;
- (void)setRecordButtonColor:(id)arg1;
- (void)setRewindButtonColor:(id)arg1;
- (void)startPollingPlayer;
- (void)stopPollingPlayer;
- (void)togglePlayback:(id)arg1;
- (void)toggleRecording:(id)arg1;
- (void)updateStatefromTransportCallBack;
- (void)updateTransportControls;

@end
