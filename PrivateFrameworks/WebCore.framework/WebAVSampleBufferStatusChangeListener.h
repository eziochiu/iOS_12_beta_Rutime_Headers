/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct MediaPlayerPrivateMediaStreamAVFObjC { int (**x1)(); int (**x2)(); int (**x3)(); int (**x4)(); struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> > > { struct WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebCore::MediaStreamPrivate, WTF::DumbPtrTraits<WebCore::MediaStreamPrivate> > { struct MediaStreamPrivate {} *x_7_1_1; } x7; struct RefPtr<WebCore::MediaStreamTrackPrivate, WTF::DumbPtrTraits<WebCore::MediaStreamTrackPrivate> > { struct MediaStreamTrackPrivate {} *x_8_1_1; } x8; struct RetainPtr<WebAVSampleBufferStatusChangeListener> { void *x_9_1_1; } x9; struct RetainPtr<AVSampleBufferDisplayLayer> { void *x_10_1_1; } x10; struct RetainPtr<CALayer> { void *x_11_1_1; } x11; struct unique_ptr<PAL::Clock, std::__1::default_delete<PAL::Clock> > { struct __compressed_pair<PAL::Clock *, std::__1::default_delete<PAL::Clock> > { struct Clock {} *x_1_2_1; } x_12_1_1; } x12; } * _parent;
}

- (void)beginObservingLayers;
- (void)dealloc;
- (id)initWithParent:(struct MediaPlayerPrivateMediaStreamAVFObjC { int (**x1)(); int (**x2)(); int (**x3)(); int (**x4)(); struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> > > { struct WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebCore::MediaStreamPrivate, WTF::DumbPtrTraits<WebCore::MediaStreamPrivate> > { struct MediaStreamPrivate {} *x_7_1_1; } x7; struct RefPtr<WebCore::MediaStreamTrackPrivate, WTF::DumbPtrTraits<WebCore::MediaStreamTrackPrivate> > { struct MediaStreamTrackPrivate {} *x_8_1_1; } x8; struct RetainPtr<WebAVSampleBufferStatusChangeListener> { void *x_9_1_1; } x9; struct RetainPtr<AVSampleBufferDisplayLayer> { void *x_10_1_1; } x10; struct RetainPtr<CALayer> { void *x_11_1_1; } x11; struct unique_ptr<PAL::Clock, std::__1::default_delete<PAL::Clock> > { struct __compressed_pair<PAL::Clock *, std::__1::default_delete<PAL::Clock> > { struct Clock {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObservingLayers;

@end
