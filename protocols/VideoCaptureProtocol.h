/* made by EzioChiu.
 */

@protocol VideoCaptureProtocol

@required

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (NSString *)getCameraUID;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (int)setCameraWithUID:(NSString *)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@optional

- (void)addStickerWithURL:(NSURL *)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 identifier:(NSString *)arg3;
- (unsigned int)previewSlot;
- (bool)setAnimoji:(NSString *)arg1;
- (bool)setMemoji:(NSData *)arg1;

@end
