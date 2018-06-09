/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVMediaCaptureSourceObserver : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    struct AVMediaCaptureSource { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; bool x3; struct WeakPtrFactory<WebCore::RealtimeMediaSource> { struct RefPtr<WTF::WeakReference<WebCore::RealtimeMediaSource>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::RealtimeMediaSource> > > { struct WeakReference<WebCore::RealtimeMediaSource> {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; int x7; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct Vector<std::__1::reference_wrapper<WebCore::RealtimeMediaSource::Observer>, 0, WTF::CrashOnOverflow, 16> { struct reference_wrapper<WebCore::RealtimeMediaSource::Observer> {} *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; } x9; struct IntSize { int x_10_1_1; int x_10_1_2; } x10; } * m_callback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addNotificationObservers;
- (void)beginSessionInterrupted:(id)arg1;
- (void)captureOutput:(/* Warning: unhandled struct encoding: '{AVCaptureOutput=#@}' */ struct AVCaptureOutput { Class x1; id x2; }*)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(/* Warning: unhandled struct encoding: '{AVCaptureConnection=#@}' */ struct AVCaptureConnection { Class x1; id x2; }*)arg3;
- (void)disconnect;
- (void)endSessionInterrupted:(id)arg1;
- (id)initWithCallback:(struct AVMediaCaptureSource { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; bool x3; struct WeakPtrFactory<WebCore::RealtimeMediaSource> { struct RefPtr<WTF::WeakReference<WebCore::RealtimeMediaSource>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::RealtimeMediaSource> > > { struct WeakReference<WebCore::RealtimeMediaSource> {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; int x7; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct Vector<std::__1::reference_wrapper<WebCore::RealtimeMediaSource::Observer>, 0, WTF::CrashOnOverflow, 16> { struct reference_wrapper<WebCore::RealtimeMediaSource::Observer> {} *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; } x9; struct IntSize { int x_10_1_1; int x_10_1_2; } x10; }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeNotificationObservers;
- (void)sessionRuntimeError:(id)arg1;

@end
