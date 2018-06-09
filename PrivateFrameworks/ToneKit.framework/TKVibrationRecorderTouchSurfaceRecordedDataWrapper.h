/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {
    bool  _displayLinkHasRefreshedAtLeastOnce;
    <NSCopying> * _displayLinkManagerObserverToken;
    bool  _isWarmUpModeEnabled;
    unsigned long long  _maximumFramesPerSecondRate;
    void * _recordedData;
    unsigned long long  _recordedDataCursor;
    unsigned long long  _recordedDataElementsCount;
    double  _vibrationPatternDidStartTimestamp;
    double  _vibrationPatternMaximumDuration;
    double  _warmUpModeDidStartTimestamp;
}

- (void).cxx_destruct;
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1;
- (void)_recordFinalDataWithNormalizedTouchLocation:(struct CGPoint { double x1; double x2; })arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3;
- (void)_updateMaximumFramesPerSecondRate:(id)arg1;
- (void)dealloc;
- (void)didStopRecording;
- (bool)getNormalizedTouchLocation:(struct CGPoint { double x1; double x2; }*)arg1 touchPhase:(int*)arg2 forTimeInterval:(double)arg3;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)recordNormalizedTouchLocation:(struct CGPoint { double x1; double x2; })arg1 touchPhase:(int)arg2;

@end
