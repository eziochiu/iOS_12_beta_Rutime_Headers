/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation {
    <RCMutableRecording> * _destinationRecording;
    <RCRecording> * _sourceRecording;
}

@property (nonatomic, readonly) <RCMutableRecording> *destinationRecording;
@property (nonatomic, readonly) <RCRecording> *sourceRecording;

- (void).cxx_destruct;
- (id)destinationRecording;
- (id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(struct { double x1; double x2; })arg3 trimMode:(long long)arg4;
- (void)main;
- (id)sourceRecording;

@end
