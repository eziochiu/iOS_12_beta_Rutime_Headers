/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKRendererTile : CALayer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _drawingFrame;
    long long  _level;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    bool  _outOfDate;
    long long  _renderCount;
    NSArray * _renderedStrokes;
    <PKRendererControllerProtocol> * _rendererController;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingFrame;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property bool outOfDate;
@property (readonly) long long renderCount;
@property (nonatomic, retain) NSArray *renderedStrokes;
@property <PKRendererControllerProtocol> *rendererController;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameForLevel:(long long)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
+ (double)tileSizeForLevel:(long long)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingFrame;
- (id)initWithLevel:(long long)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 drawingScale:(double)arg3;
- (long long)level;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)outOfDate;
- (long long)renderCount;
- (id)renderedStrokes;
- (id)rendererController;
- (void)setOutOfDate:(bool)arg1;
- (void)setRenderedStrokes:(id)arg1;
- (void)setRendererController:(id)arg1;
- (void)update;
- (void)updateFrameForScale:(double)arg1;

@end
