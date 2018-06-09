/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBaseLayerStack : NSObject {
    struct CGImage { } * _brushImageRef;
    double  _brushSize;
    double  _brushSoftness;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _flippedViewToMaskTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _inverseFlippedViewToMaskTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _inverseViewToMaskTransform;
    NSMutableArray * _layers;
    int  _maskLongEdgeSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maskSize;
    bool  _shouldNotify;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _viewToMaskTransform;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } flippedViewToMaskTransform;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } inverseFlippedViewToMaskTransform;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } inverseViewToMaskTransform;
@property (nonatomic, readonly) NSMutableArray *layers;
@property (nonatomic) int maskLongEdgeSize;
@property (nonatomic) struct CGSize { double x1; double x2; } maskSize;
@property (nonatomic) bool shouldNotify;
@property (nonatomic) NSDictionary *strokesDataDictionary;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } viewToMaskTransform;
@property (nonatomic, retain) UIImage *workingImage;
@property (nonatomic, retain) BLPixelImageBuffer *workingImageBuffer;
@property (nonatomic) double workingImageScaleFactor;

- (void).cxx_destruct;
- (struct CGImage { }*)brushImageRefWithSize:(float)arg1 softness:(float)arg2;
- (void)dealloc;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flippedViewToMaskTransform;
- (bool)haveLayerMask;
- (id)imageLayer;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inverseFlippedViewToMaskTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inverseViewToMaskTransform;
- (id)layers;
- (double)maskArea;
- (int)maskLongEdgeSize;
- (struct CGSize { double x1; double x2; })maskSize;
- (struct CGImage { }*)newImageForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (bool)readyToDraw;
- (void)setFlippedViewToMaskTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMaskLongEdgeSize:(int)arg1;
- (void)setMaskSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldNotify:(bool)arg1;
- (void)setStrokesDataDictionary:(id)arg1;
- (void)setViewToMaskTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWorkingImage:(id)arg1;
- (void)setWorkingImageBuffer:(id)arg1;
- (void)setWorkingImageScaleFactor:(double)arg1;
- (bool)shouldNotify;
- (id)strokesDataDictionary;
- (double)timestamp;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })viewToMaskTransform;
- (id)workingImage;
- (id)workingImageBuffer;
- (double)workingImageScaleFactor;

@end
