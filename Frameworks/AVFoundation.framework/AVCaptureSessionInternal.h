/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionInternal : NSObject {
    AVCaptureDevice * adjustingDeviceActiveFormat;
    bool  adjustingVideoDeviceHDREnabled;
    bool  authorizedToUseCameraInMultipleForegroundAppLayout;
    bool  automaticallyConfiguresApplicationAudioSession;
    bool  automaticallyConfiguresCaptureDeviceForWideColor;
    int  beginConfigRefCount;
    NSMutableArray * committedAVCaptureSessionConfigurations;
    NSMutableArray * connections;
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    bool  figCaptureSessionRunning;
    bool  figCaptureSessionStarted;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    NSMutableArray * inputs;
    bool  interrupted;
    AVCaptureSessionConfiguration * liveAVCaptureSessionConfiguration;
    struct OpaqueCMClock { } * masterClock;
    bool  notifiesOnMainThread;
    NSMutableArray * outputs;
    bool  resetVideoZoomFactorAndMinMaxFrameDurations;
    AVRunLoopCondition * runLoopCondition;
    bool  running;
    id  serverConnectionDiedNotificationToken;
    NSObject<OS_dispatch_semaphore> * serverConnectionDiedSemaphore;
    FigCaptureSessionConfiguration * sessionConfig;
    NSString * sessionPreset;
    NSError * stopError;
    bool  usesApplicationAudioSession;
    bool  videoInputDeviceUsed;
    NSHashTable * videoPreviewLayers;
    bool  waitingForFigCaptureSessionConfigurationToBecomeLive;
    bool  waitingForFigCaptureSessionToStart;
    bool  waitingForFigCaptureSessionToStop;
    AVWeakReference * weakReference;
}

@end
