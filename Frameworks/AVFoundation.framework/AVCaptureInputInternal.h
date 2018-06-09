/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputInternal : NSObject {
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    NSObject<OS_dispatch_queue> * figCaptureSessionSyncQueue;
    AVCaptureSession * session;
}

- (void)dealloc;
- (id)init;

@end
