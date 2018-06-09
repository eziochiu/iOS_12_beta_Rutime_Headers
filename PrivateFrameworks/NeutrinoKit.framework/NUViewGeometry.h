/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NUViewGeometry : NSObject {
    double  _angle;
    double  _backingScale;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    bool  _flipped;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    double  _maximumScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
}

@property (nonatomic) double angle;
@property (nonatomic) double backingScale;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingCropRect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (getter=isFlipped, nonatomic) bool flipped;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageBounds;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) double maximumScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewImageSize;

- (double)angle;
- (double)backingScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingCropRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsWithScale:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetBoundsForCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)isFlipped;
- (double)maximumScale;
- (struct CGPoint { double x1; double x2; })origin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })proposedBoundsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setAngle:(double)arg1;
- (void)setBackingScale:(double)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlipped:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaximumScale:(double)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewImageSize;

@end
