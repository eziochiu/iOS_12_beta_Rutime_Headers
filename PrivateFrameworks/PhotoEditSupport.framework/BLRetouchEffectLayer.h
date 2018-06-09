/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchEffectLayer : BLRetouchLayer {
    float  _amount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _area;
    NSMutableArray * _brushStrokes;
    struct CGContext { } * _edgeDetectContextRef;
    float  _edgeDetectSize;
    struct CGContext { } * _layerMask;
    struct { 
        unsigned char blue; 
        unsigned char green; 
        unsigned char red; 
        unsigned char alpha; 
    }  _samplePixel;
    bool  _startFilled;
    bool  _strokeInProgress;
}

@property (nonatomic) float amount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } area;
@property (nonatomic, copy) NSMutableArray *brushStrokes;
@property (nonatomic, retain) struct CGContext { }*layerMask;
@property (nonatomic, readonly) bool strokeInProgress;

- (void).cxx_destruct;
- (float)amount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })area;
- (id)brushStrokes;
- (void)clearMask;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doDrawBrushAtLocation:(struct CGPoint { double x1; double x2; })arg1 opacity:(float)arg2 erase:(bool)arg3 magicEdges:(bool)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6 firstPoint:(bool)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawBrushAtLocation:(struct CGPoint { double x1; double x2; })arg1 opacity:(float)arg2 erase:(bool)arg3 magicEdges:(bool)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6;
- (struct CGContext { }*)edgeDetectContextRefForSize:(float)arg1;
- (void)fillMask;
- (void)fillMaskWithValue:(double)arg1;
- (bool)hasAmount;
- (bool)hasLayerMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)init;
- (bool)isAffectingOutput;
- (id)layerData;
- (struct CGContext { }*)layerMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (struct CGContext { }*)newContextWithEffect:(struct CGContext { }*)arg1;
- (struct CGImage { }*)newImageFromContextWithEffect:(struct CGContext { }*)arg1;
- (struct CGImage { }*)newMaskImage;
- (void)performFill;
- (void)releaseMask;
- (void)setAmount:(float)arg1;
- (void)setArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBrushStrokes:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLayerData:(id)arg1;
- (void)setLayerMask:(struct CGContext { }*)arg1;
- (bool)solidBrush;
- (void)strokeDidFinish;
- (bool)strokeInProgress;

@end
