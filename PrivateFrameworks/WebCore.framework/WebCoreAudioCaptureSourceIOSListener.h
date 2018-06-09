/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    struct CoreAudioCaptureSourceFactoryIOS { int (**x1)(); struct RealtimeMediaSource {} *x2; struct RetainPtr<WebCoreAudioCaptureSourceIOSListener> { void *x_3_1_1; } x3; } * _callback;
}

- (void)handleInterruption:(id)arg1;
- (id)initWithCallback:(struct CoreAudioCaptureSourceFactoryIOS { int (**x1)(); struct RealtimeMediaSource {} *x2; struct RetainPtr<WebCoreAudioCaptureSourceIOSListener> { void *x_3_1_1; } x3; }*)arg1;
- (void)invalidate;
- (void)sessionMediaServicesWereReset:(id)arg1;

@end
