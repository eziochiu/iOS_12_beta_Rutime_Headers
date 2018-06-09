/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARQATracer : NSObject <ARInternalSessionObserver, ARReplaySensorDelegate> {
    NSMutableData * _dataBuffer;
    <ARQATracerDelegate> * _delegate;
    bool  _forceQuitApp;
    unsigned long long  _frameIndex;
    NSOutputStream * _framesStreamToFile;
    bool  _isTracing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _recordScreen;
    UILabel * _replayFrameLabel;
    ARScreenRecording * _screenRecorder;
    NSMutableDictionary * _traceHeader;
    NSString * _traceOutputFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARQATracerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceQuitApp;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool recordScreen;
@property (nonatomic, retain) UILabel *replayFrameLabel;
@property (nonatomic, retain) ARScreenRecording *screenRecorder;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *traceOutputFilePath;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (void)addFrameLabel:(id)arg1;
- (id)createTraceOutputDirectory;
- (id)delegate;
- (void)flushDataBufferToFile;
- (bool)forceQuitApp;
- (id)init;
- (struct CGPoint { double x1; double x2; })offset;
- (void)receiveDefaults;
- (bool)recordScreen;
- (id)replayFrameLabel;
- (void)replaySensorDidFinishReplayingData;
- (id)screenRecorder;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceQuitApp:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRecordScreen:(bool)arg1;
- (void)setReplayFrameLabel:(id)arg1;
- (void)setScreenRecorder:(id)arg1;
- (void)setTraceOutputFilePath:(id)arg1;
- (void)start:(id)arg1;
- (void)stop;
- (id)traceOutputFilePath;
- (void)update:(id)arg1;
- (void)writeJSONObjectToStream:(id)arg1 prefix:(id)arg2;
- (void)writeStringToOutputStream:(id)arg1;

@end
