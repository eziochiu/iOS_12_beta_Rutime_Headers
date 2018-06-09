/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    bool  automaticallyAdjustsMirroring;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  captureDeviceTransform;
    int  changeSeed;
    bool  chromaNoiseReductionEnabled;
    AVCaptureConnection * connection;
    bool  depthDataDeliveryEnabled;
    bool  depthDataDeliverySupported;
    bool  disableActions;
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    NSObject<OS_dispatch_queue> * figCaptureSessionSyncQueue;
    bool  filterRenderingEnabled;
    NSString * gravity;
    unsigned int  imageQueueSlot;
    bool  isPaused;
    bool  isPresentationLayer;
    bool  mirrored;
    double  oddScreenScale;
    double  oddScreenWidth;
    long long  orientation;
    double  previewRotationDegrees;
    struct CGSize { 
        double width; 
        double height; 
    }  previewSize;
    double  rollAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  sensorSize;
    NSString * sensorToPreviewVTScalingMode;
    AVCaptureSession * session;
    NSString * sinkID;
    CALayer * sublayer;
    bool  unoptimizedFilterRenderingEnabled;
    NSArray * videoPreviewFilters;
    bool  visible;
    AVWeakReference * weakReference;
}

@end
