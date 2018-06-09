/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBContainerKeyView : UIKBKeyView {
    UIKBKeyView * _keyView;
}

- (void)changeBackgroundToActiveIfNecessary;
- (void)changeBackgroundToEnabled;
- (id)contentsKeyView;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawFrame;
- (id)factory;
- (bool)hasRendered;
- (long long)imageOrientationForLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)key;
- (id)keyplane;
- (id)layerForRenderFlags:(long long)arg1;
- (void)prepareForDisplay;
- (id)renderConfig;
- (bool)requiresSublayers;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFactory:(id)arg1;
- (void)setNeedsDisplay;
- (void)setRenderConfig:(id)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
