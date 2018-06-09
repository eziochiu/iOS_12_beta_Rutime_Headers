/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInputInternal : NSObject {
    AVCaptureDevice * device;
    <AVCallbackCancellation> * deviceOpenCallbackInvoker;
    NSArray * ports;
    bool  ready;
    bool  unifiedAutoExposureDefaultsEnabled;
    AVWeakReference * weakReference;
}

- (void)dealloc;

@end
