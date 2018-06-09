/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalQuadView : CLKUIQuadView {
    bool  _drawableSizeNeedsUpdate;
    struct CLKUIQuadSize { 
        int width; 
        int height; 
    }  _quadSize;
    CLKUIMetalQuadRenderer * _renderer;
}

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_discardContents;
- (void)_display;
- (void)_handleQuadArrayChange:(id)arg1;
- (void)_updateDrawableSizeIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)metalLayer;

@end
