/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKImageRenderer : NSObject {
    long long  _cancelCount;
    <PKRendererControllerProtocol> * _rendererController;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) long long cancelCount;
@property (nonatomic, retain) <PKRendererControllerProtocol> *rendererController;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (void)_fuzzTestUnzippedData:(id)arg1;

- (void).cxx_destruct;
- (void)buildStrokeRenderCacheForDrawing:(id)arg1;
- (void)cancel;
- (long long)cancelCount;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMetal:(bool)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMetal:(bool)arg3 renderQueue:(id)arg4;
- (void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)renderDrawing:(id)arg1 completion:(id /* block */)arg2;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (id)rendererController;
- (void)resume;
- (double)scale;
- (void)setCancelCount:(long long)arg1;
- (void)setRendererController:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
