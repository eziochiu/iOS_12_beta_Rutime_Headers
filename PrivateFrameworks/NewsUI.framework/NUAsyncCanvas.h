/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAsyncCanvas : NSObject {
    NUCanvas * _canvas;
    NSObject<OS_dispatch_queue> * _layoutQueue;
}

@property (nonatomic, readonly) NUCanvas *canvas;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;

- (void).cxx_destruct;
- (id)canvas;
- (id)initWithCanvas:(id)arg1;
- (id)initWithCanvas:(id)arg1 layoutQueue:(id)arg2;
- (void)layoutInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)layoutInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2 completion:(id /* block */)arg3;
- (id)layoutQueue;

@end
