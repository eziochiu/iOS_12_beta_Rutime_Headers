/* made by EzioChiu.
 */

@protocol VTUIAudioSession

@required

- (int)audioSource;
- (float)averagePower;
- (bool)hasAudioRoute;
- (bool)hasCorrectAudioRoute;
- (bool)isRecording;
- (bool)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setDelegate:(id <VTUIAudioSessionDelegate>)arg1;
- (void)setEndpointerDelegate:(id <Endpointer>)arg1;
- (bool)startRecording;
- (void)stopRecording;
- (void)updateMeters;

@end
