/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUView : UIView <CLKUIQuadViewDelegate> {
    EAGLContext * _context;
    CLKDevice * _device;
    NUGLQuad * _quad;
    CLKUIQuadView * _quadView;
    NUScene * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NUScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (id)scene;
- (void)setAnimationFrameInterval:(int)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setScene:(id)arg1;
- (id)snapshot;
- (id)snapshot:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)startAnimation;
- (void)stopAnimation;

@end
