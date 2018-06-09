/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageSaliencyObservation : VNPixelBufferObservation {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mHighlySalientRegion;
    struct CGSize { 
        double width; 
        double height; 
    }  _mOriginalImageSize;
    NSArray * _mSalientObjects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mSalientRegion;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } narrowedBoundingBox;
@property (nonatomic, readonly) NSArray *salientObjects;

+ (struct __CVBuffer { }*)create64x64FloatPixelBufferFromNSData:(id)arg1;
+ (id)createNSDataDumpFrom64x64FloatPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeBoundingBoxes;
- (void)_computeSalientObjects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CVBuffer { }*)createSaliencyImageAndReturnError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(struct __CVBuffer { }*)arg2 originalImageSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })narrowedBoundingBox;
- (id)salientObjects;

@end
