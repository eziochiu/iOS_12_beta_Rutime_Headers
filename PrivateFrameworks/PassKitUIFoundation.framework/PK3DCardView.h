/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PK3DCardView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate> {
    SCNMaterial * _cardMaterial;
    <PK3DLiveCardViewDelegate> * _delegate;
    int  _design;
    void _lastRollPitch;
    bool  _motionEnabled;
    bool  _renderedOnce;
    SCNView * _sceneView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PK3DLiveCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedMotionManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)setDelegate:(id)arg1;
- (void)setMotionEnabled:(bool)arg1;
- (void)setRollPitch;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;

@end
