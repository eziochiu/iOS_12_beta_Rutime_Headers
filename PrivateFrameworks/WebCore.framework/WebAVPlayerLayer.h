/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerLayer : CALayer {
    struct RetainPtr<WebAVPlayerController> { 
        void *m_ptr; 
    }  _avPlayerController;
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> > { 
        struct VideoFullscreenInterfaceAVKit {} *m_ptr; 
    }  _fullscreenInterface;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _modelVideoLayerFrame;
    NSDictionary * _pixelBufferAttributes;
    bool  _readyForDisplay;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _videoGravity;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _videoSublayer;
}

@property (nonatomic) struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; /* Warning: unhandled struct encoding: '{Ref<WebCore::PlaybackSessionInterfaceAVKit' */ struct x6; }*fullscreenInterface; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::RunLoop> >=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{VideoFullscreenInterfaceAVKit}}{FloatRect={FloatPoint=ff}{FloatSize=ff}}BBBBBBBBBBBBBBBBBBBBBB} */
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } modelVideoLayerFrame;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isReadyForDisplay, nonatomic) bool readyForDisplay;
@property struct CGSize { double x1; double x2; } videoDimensions;
@property (nonatomic, retain) NSString *videoGravity;
@property (nonatomic, retain) CALayer *videoSublayer;

+ (id)keyPathsForValuesAffectingVideoRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct VideoFullscreenModel {} *x9; struct VideoFullscreenChangeObserver {} *x10; struct RetainPtr<UIWindow> { void *x_11_1_1; } x11; struct RetainPtr<UIViewController> { void *x_12_1_1; } x12; struct RetainPtr<UIView> { void *x_13_1_1; } x13; struct RetainPtr<UIView> { void *x_14_1_1; } x14; struct RetainPtr<UIWindow> { void *x_15_1_1; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x_16_1_1; } x16; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x17; }*)fullscreenInterface;
- (id)init;
- (bool)isReadyForDisplay;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })modelVideoLayerFrame;
- (id)pixelBufferAttributes;
- (id)playerController;
- (void)resolveBounds;
- (void)setFullscreenInterface:(struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct VideoFullscreenModel {} *x9; struct VideoFullscreenChangeObserver {} *x10; struct RetainPtr<UIWindow> { void *x_11_1_1; } x11; struct RetainPtr<UIViewController> { void *x_12_1_1; } x12; struct RetainPtr<UIView> { void *x_13_1_1; } x13; struct RetainPtr<UIView> { void *x_14_1_1; } x14; struct RetainPtr<UIWindow> { void *x_15_1_1; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x_16_1_1; } x16; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x17; }*)arg1;
- (void)setModelVideoLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setReadyForDisplay:(bool)arg1;
- (void)setVideoDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoSublayer:(id)arg1;
- (struct CGSize { double x1; double x2; })videoDimensions;
- (id)videoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;
- (id)videoSublayer;

@end
