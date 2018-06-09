/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> > { 
        struct VideoFullscreenInterfaceAVKit {} *m_ptr; 
    }  _fullscreenInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; /* Warning: unhandled struct encoding: '{Ref<WebCore::PlaybackSessionInterfaceAVKit' */ struct x6; }*fullscreenInterface; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::RunLoop> >=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{VideoFullscreenInterfaceAVKit}}{FloatRect={FloatPoint=ff}{FloatSize=ff}}BBBBBBBBBBBBBBBBBBBBBB} */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct VideoFullscreenModel {} *x9; struct VideoFullscreenChangeObserver {} *x10; struct RetainPtr<UIWindow> { void *x_11_1_1; } x11; struct RetainPtr<UIViewController> { void *x_12_1_1; } x12; struct RetainPtr<UIView> { void *x_13_1_1; } x13; struct RetainPtr<UIView> { void *x_14_1_1; } x14; struct RetainPtr<UIWindow> { void *x_15_1_1; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x_16_1_1; } x16; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x17; }*)fullscreenInterface;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2;
- (bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)setFullscreenInterface:(struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct VideoFullscreenModel {} *x9; struct VideoFullscreenChangeObserver {} *x10; struct RetainPtr<UIWindow> { void *x_11_1_1; } x11; struct RetainPtr<UIViewController> { void *x_12_1_1; } x12; struct RetainPtr<UIView> { void *x_13_1_1; } x13; struct RetainPtr<UIView> { void *x_14_1_1; } x14; struct RetainPtr<UIWindow> { void *x_15_1_1; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x_16_1_1; } x16; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x17; }*)arg1;

@end
