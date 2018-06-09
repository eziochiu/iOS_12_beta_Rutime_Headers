/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface _RCCaptureInputDeviceSession : NSObject {
    RCCaptureInputDevice * _captureInputDevice;
    RCCaptureSession * _captureSession;
    bool  _captureSessionWasActivated;
    NSMutableArray * _sessionFinishedBlocks;
    id /* block */  _sessionPreparedBlock;
    bool  _useStartSoundEffect;
}

@property (nonatomic, readonly) RCCaptureInputDevice *captureInputDevice;
@property (nonatomic, retain) RCCaptureSession *captureSession;
@property (nonatomic) bool captureSessionWasActivated;
@property (nonatomic, copy) id /* block */ sessionPreparedBlock;
@property (nonatomic) bool useStartSoundEffect;

- (void).cxx_destruct;
- (void)addSessionFinishedBlock:(id /* block */)arg1;
- (id)captureInputDevice;
- (id)captureSession;
- (bool)captureSessionWasActivated;
- (void)dealloc;
- (id)description;
- (id)initWithCaptureInputDevice:(id)arg1;
- (void)invokeSessionFinishedBlocksWithError:(id)arg1;
- (id /* block */)sessionPreparedBlock;
- (void)setCaptureSession:(id)arg1;
- (void)setCaptureSessionWasActivated:(bool)arg1;
- (void)setSessionPreparedBlock:(id /* block */)arg1;
- (void)setUseStartSoundEffect:(bool)arg1;
- (bool)useStartSoundEffect;

@end
