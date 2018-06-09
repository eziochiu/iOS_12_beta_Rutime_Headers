/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView {
    <TKVibrationRecorderTouchSurfaceDelegate> * _delegate;
    <NSCopying> * _displayLinkManagerObserverToken;
    bool  _isRecordingModeEnabled;
    bool  _isReplayModeEnabled;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper * _recordedDataWrapper;
    double  _replayModeWasEnteredStartTime;
    bool  _shouldIgnoreCurrentTouch;
    double  _vibrationPatternMaximumDuration;
    TLVibrationPattern * _vibrationPatternToReplay;
}

@property (nonatomic) <TKVibrationRecorderTouchSurfaceDelegate> *delegate;

- (void).cxx_destruct;
- (void)_recordTouchLocation:(struct CGPoint { double x1; double x2; })arg1 touchPhase:(int)arg2;
- (void)_updateTouchLocationForReplayMode:(id)arg1;
- (void)currentVibrationComponentShouldEnd;
- (void)dealloc;
- (id)delegate;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)exitRecordingMode;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
