/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {
    struct OpaqueFigSubtitleCALayerInternal { struct OpaqueFigPlayer {} *x1; id x2; unsigned char x3; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x4; void*x5; void*x6; BOOL x7; void*x8; void*x9; struct CGPoint { double x_10_1_1; double x_10_1_2; } x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; } * layerInternal;
}

@property (nonatomic, copy) NSString *captionRenderingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOverscanSubtitleSupportEnabled, nonatomic) bool overscanSubtitleSupportEnabled;
@property (readonly) Class superclass;

+ (id)defaultActionForKey:(id)arg1;

- (void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addPositionAnimation:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)addAnimations:(id)arg1 forKey:(id)arg2;
- (id)captionRenderingStrategy;
- (void)clear;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)finalize;
- (void)handleNeedsLayoutNotification;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isOverscanSubtitleSupportEnabled;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)removeAnimationsForKey:(id)arg1;
- (void)setCaptionRenderingStrategy:(id)arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (void)setPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;

@end
