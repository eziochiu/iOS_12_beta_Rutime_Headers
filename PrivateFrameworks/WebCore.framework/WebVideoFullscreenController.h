/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebVideoFullscreenController : NSObject {
    struct RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext> > { 
        struct VideoFullscreenControllerContext {} *m_ptr; 
    }  _context;
    struct RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> > { 
        struct HTMLVideoElement {} *m_ptr; 
    }  _videoElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFinishFullscreen:(struct VideoFullscreenControllerContext { int (**x1)(); int (**x2)(); int (**x3)(); int (**x4)(); int (**x5)(); struct atomic<unsigned int> { unsigned int x_6_1_1; } x6; struct HashSet<WebCore::PlaybackSessionModelClient *, WTF::PtrHash<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *> > { struct HashTable<WebCore::PlaybackSessionModelClient *, WebCore::PlaybackSessionModelClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *> > { struct PlaybackSessionModelClient {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_7_1_1; } x7; struct HashSet<WebCore::VideoFullscreenModelClient *, WTF::PtrHash<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *> > { struct HashTable<WebCore::VideoFullscreenModelClient *, WebCore::VideoFullscreenModelClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *> > { struct VideoFullscreenModelClient {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_8_1_1; } x8; }*)arg1;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (void)exitFullscreen;
- (id)init;
- (void)requestHideAndExitFullscreen;
- (void)setVideoElement:(struct HTMLVideoElement { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl, WTF::DumbPtrTraits<WebCore::QualifiedName::QualifiedNameImpl> > { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData, WTF::DumbPtrTraits<WebCore::ElementData> > { struct ElementData {} *x_13_1_1; } x13; int (**x14)(); struct ScriptExecutionContext {} *x15; unsigned int x16; int (**x17)(); int (**x18)(); int (**x19)(); int (**x20)(); int (**x21)(); int (**x22)(); int (**x23)(); int (**x24)(); int (**x25)(); int (**x26)(); int (**x27)(); int (**x28)(); struct WeakPtrFactory<WebCore::HTMLMediaElement> { struct RefPtr<WTF::WeakReference<WebCore::HTMLMediaElement>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::HTMLMediaElement> > > { struct WeakReference<WebCore::HTMLMediaElement> {} *x_1_2_1; } x_29_1_1; } x29; }*)arg1;
- (struct HTMLVideoElement { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl, WTF::DumbPtrTraits<WebCore::QualifiedName::QualifiedNameImpl> > { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData, WTF::DumbPtrTraits<WebCore::ElementData> > { struct ElementData {} *x_13_1_1; } x13; int (**x14)(); struct ScriptExecutionContext {} *x15; unsigned int x16; int (**x17)(); int (**x18)(); int (**x19)(); int (**x20)(); int (**x21)(); int (**x22)(); int (**x23)(); int (**x24)(); int (**x25)(); int (**x26)(); int (**x27)(); int (**x28)(); struct WeakPtrFactory<WebCore::HTMLMediaElement> { struct RefPtr<WTF::WeakReference<WebCore::HTMLMediaElement>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::HTMLMediaElement> > > { struct WeakReference<WebCore::HTMLMediaElement> {} *x_1_2_1; } x_29_1_1; } x29; }*)videoElement;

@end
