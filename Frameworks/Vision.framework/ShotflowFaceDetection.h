/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface ShotflowFaceDetection : NSObject {
    float  _area;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    float  _confidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _defaultBox;
    int  _mergesCount;
    float  _rotationAngle;
    int  _scale;
    float  _yawAngle;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } box;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } boxCenter;
@property (nonatomic) float confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } defaultBox;
@property (nonatomic, readonly) float distanceToDefaultBox;
@property (nonatomic) int mergesCount;
@property (nonatomic) float rotationAngle;
@property (nonatomic) int scale;
@property (nonatomic, readonly) float smartDistance;
@property (nonatomic) float yawAngle;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (struct CGPoint { double x1; double x2; })boxCenter;
- (float)confidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultBox;
- (float)distanceToDefaultBox;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7;
- (bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;
- (bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (int)mergesCount;
- (float)overlap:(id)arg1;
- (float)rotationAngle;
- (int)scale;
- (void)setBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfidence:(float)arg1;
- (void)setDefaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMergesCount:(int)arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setScale:(int)arg1;
- (void)setYawAngle:(float)arg1;
- (float)smartDistance;
- (float)yawAngle;

@end
