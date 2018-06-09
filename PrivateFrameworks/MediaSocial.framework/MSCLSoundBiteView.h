/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSoundBiteView : UIView <MSCLProximityObserver> {
    UIView * _backgroundView;
    <MSCLSoundBiteViewDelegate> * _delegate;
    bool  _detectedFaceProximity;
    MSCLSoundBiteViewButton * _explicitToggleButton;
    bool  _isExplicit;
    bool  _isObservingProximity;
    long long  _mode;
    UIButton * _playButton;
    float  _playbackProgress;
    UIImageView * _playbackProgressImageView;
    UILabel * _promptExplicitLabel;
    UILabel * _promptLabel;
    UIButton * _recordButton;
    double  _recordingTimeLabelWidth;
    CUShutterButton * _stopRecordingIndicator;
    UILabel * _timeLabel;
    UIView * _waveformBackgroundView;
    MSCLWaveformImageProducer * _waveformImageProducer;
    UIImageView * _waveformImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLSoundBiteViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExplicit;
@property (nonatomic) long long mode;
@property (nonatomic) float playbackProgress;
@property (nonatomic, copy) NSString *promptString;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timeString;

- (void).cxx_destruct;
- (void)_playButtonAction:(id)arg1;
- (void)_recordButtonTouchDown:(id)arg1;
- (void)_recordButtonTouchUp:(id)arg1;
- (void)_sendFaceProximityDidBegin;
- (void)_sendFaceProximityDidEnd;
- (bool)_showsPlaybackProgress;
- (void)_toggleExplicit:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExplicit;
- (void)layoutSubviews;
- (long long)mode;
- (float)playbackProgress;
- (id)promptString;
- (void)proximityCoordinatorStateDidChange:(id)arg1;
- (void)reserveSpaceForRecordingTimes:(long long)arg1 timeFormat:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExplictButtonTitle:(id)arg1;
- (void)setExplictPromptString:(id)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setPromptString:(id)arg1;
- (void)setTimeString:(id)arg1;
- (void)setWaveformImageUsingProducer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeString;
- (void)tintColorDidChange;

@end
