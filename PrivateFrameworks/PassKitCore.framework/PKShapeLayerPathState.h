/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKShapeLayerPathState : NSObject {
    double  _strokeEndT0;
    double  _strokeEndT1;
    double  _strokeStartT0;
    double  _strokeStartT1;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithShapeLayer:(id)arg1;
- (id)initWithShapeLayer:(id)arg1 reverse:(bool)arg2;
- (id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2;
- (id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4;
- (double)progressForShapeLayer:(id)arg1;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(id /* block */)arg3;
- (double)strokeEndAtProgress:(double)arg1;
- (double)strokeStartAtProgress:(double)arg1;

@end
