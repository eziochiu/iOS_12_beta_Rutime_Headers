/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageGeometry : NSObject <NSCopying> {
    long long  _inputOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputRect;
    long long  _userOrientation;
}

@property (nonatomic) long long appliedOrientation;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } appliedTransform;
@property (nonatomic, readonly) long long inputOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputRect;
@property (getter=isMirrored, nonatomic, readonly) bool mirrored;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputRect;
@property (getter=isSizeInverted, nonatomic, readonly) bool sizeInverted;
@property (nonatomic) long long userOrientation;

+ (id)geometryWithInputSize:(struct CGSize { double x1; double x2; })arg1 initialOrientation:(long long)arg2;
+ (id)geometryWithOutputSize:(struct CGSize { double x1; double x2; })arg1 appliedOrientation:(long long)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_basisRect:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (long long)appliedOrientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })appliedTransform;
- (void)applyOrientation:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })denormalizeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 basis:(long long)arg2;
- (id)description;
- (void)flipHorizontally;
- (void)flipVertically;
- (id)init;
- (id)initWithInputSize:(struct CGSize { double x1; double x2; })arg1 inputOrientation:(long long)arg2;
- (long long)inputOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputRectForOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMirrored;
- (bool)isSizeInverted;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 basis:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputRectForInputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)rotateClockwise;
- (void)rotateCounterClockwise;
- (void)setAppliedOrientation:(long long)arg1;
- (void)setUserOrientation:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromOrientation:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToOrientation:(long long)arg1;
- (long long)userOrientation;

@end
