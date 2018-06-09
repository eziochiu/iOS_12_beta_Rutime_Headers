/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_6_1_1; } x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; } * m_callback;
    int  m_delayCallbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didEnd:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_6_1_1; } x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; }*)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)metadataLoaded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;

@end
