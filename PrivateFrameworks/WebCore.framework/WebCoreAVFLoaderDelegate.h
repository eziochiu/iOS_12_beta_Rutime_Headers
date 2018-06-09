/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_6_1_1; } x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; } * m_callback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_6_1_1; } x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; }*)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct MediaPlayer {} *x5; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_6_1_1; } x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; }*)arg1;

@end
