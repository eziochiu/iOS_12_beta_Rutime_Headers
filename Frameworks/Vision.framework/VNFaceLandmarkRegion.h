/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkRegion : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBoundingBox;
    unsigned long long  _pointCount;
}

@property unsigned long long pointCount;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (unsigned long long)hash;
- (id)initWithFaceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pointCount;
- (void)setPointCount:(unsigned long long)arg1;

@end
