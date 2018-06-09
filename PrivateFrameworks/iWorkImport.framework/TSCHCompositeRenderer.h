/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCompositeRenderer : TSCHRenderer <TSCHCompositeRendering> {
    TSCHRenderer * mEventHandler;
    NSArray * mSubRenderers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *renderers;
@property (readonly) Class superclass;

+ (void)p_delegateSelector:(SEL)arg1 toRenderer:(id)arg2 transparencyLayer:(int)arg3 inContext:(struct CGContext { }*)arg4;
+ (void)renderTSCHCompositeRendering:(id)arg1 intoContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (void).cxx_destruct;
- (void)didBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)didEndTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithChartRep:(id)arg1 withSubRenderers:(id)arg2;
- (bool)needsAnySeparateLayers;
- (void)p_delegateSelectorToRenderers:(SEL)arg1 transparencyLayer:(int)arg2 inContext:(struct CGContext { }*)arg3;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)renderers;
- (id)transparencyLayers;
- (void)willBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)willEndTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;

@end
