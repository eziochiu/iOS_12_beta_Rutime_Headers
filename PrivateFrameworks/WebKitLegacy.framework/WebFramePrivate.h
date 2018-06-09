/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFramePrivate : NSObject {
    struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct Ref<WebCore::WindowProxy, WTF::DumbPtrTraits<WebCore::WindowProxy> > { struct WindowProxy {} *x_3_1_1; } x3; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; struct Frame {} *x5; struct Page {} *x6; struct RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> > { struct Settings {} *x_7_1_1; } x7; struct FrameTree { struct Frame {} *x_8_1_1; struct Frame {} *x_8_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_8_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_8_1_4; struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> > { struct Frame {} *x_5_2_1; } x_8_1_5; struct Frame {} *x_8_1_6; struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> > { struct Frame {} *x_7_2_1; } x_8_1_7; struct Frame {} *x_8_1_8; unsigned int x_8_1_9; unsigned long long x_8_1_10; } x8; } * coreFrame;
    bool  includedInWebKitStatistics;
    id  internalLoadDelegate;
    bool  isCommitting;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  provisionalURL;
    struct unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> > { 
        struct __compressed_pair<WebScriptDebugger *, std::__1::default_delete<WebScriptDebugger> > { 
            struct WebScriptDebugger {} *__value_; 
        } __ptr_; 
    }  scriptDebugger;
    bool  shouldCreateRenderers;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  url;
    WebFrameView * webFrameView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setWebFrameView:(id)arg1;

@end
