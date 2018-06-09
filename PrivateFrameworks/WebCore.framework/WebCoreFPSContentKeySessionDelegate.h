/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {
    struct CDMInstanceFairPlayStreamingAVFObjC { int (**x1)(); unsigned int x2; struct WeakPtrFactory<WebCore::CDMInstanceFairPlayStreamingAVFObjC> { struct RefPtr<WTF::WeakReference<WebCore::CDMInstanceFairPlayStreamingAVFObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::CDMInstanceFairPlayStreamingAVFObjC> > > { struct WeakReference<WebCore::CDMInstanceFairPlayStreamingAVFObjC> {} *x_1_2_1; } x_3_1_1; } x3; struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > { struct SharedBuffer {} *x_4_1_1; } x4; bool x5; struct RetainPtr<NSURL> { void *x_6_1_1; } x6; struct RetainPtr<AVContentKeySession> { void *x_7_1_1; } x7; struct RetainPtr<AVContentKeyRequest> { void *x_8_1_1; } x8; struct RetainPtr<WebCoreFPSContentKeySessionDelegate> { void *x_9_1_1; } x9; struct Vector<WTF::RetainPtr<NSData>, 0, WTF::CrashOnOverflow, 16> { struct RetainPtr<NSData> {} *x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; } x10; struct CDMInstanceClient {} *x11; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; } * _parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (id)initWithParent:(struct CDMInstanceFairPlayStreamingAVFObjC { int (**x1)(); unsigned int x2; struct WeakPtrFactory<WebCore::CDMInstanceFairPlayStreamingAVFObjC> { struct RefPtr<WTF::WeakReference<WebCore::CDMInstanceFairPlayStreamingAVFObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::CDMInstanceFairPlayStreamingAVFObjC> > > { struct WeakReference<WebCore::CDMInstanceFairPlayStreamingAVFObjC> {} *x_1_2_1; } x_3_1_1; } x3; struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > { struct SharedBuffer {} *x_4_1_1; } x4; bool x5; struct RetainPtr<NSURL> { void *x_6_1_1; } x6; struct RetainPtr<AVContentKeySession> { void *x_7_1_1; } x7; struct RetainPtr<AVContentKeyRequest> { void *x_8_1_1; } x8; struct RetainPtr<WebCoreFPSContentKeySessionDelegate> { void *x_9_1_1; } x9; struct Vector<WTF::RetainPtr<NSData>, 0, WTF::CrashOnOverflow, 16> { struct RetainPtr<NSData> {} *x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; } x10; struct CDMInstanceClient {} *x11; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (void)invalidate;

@end
