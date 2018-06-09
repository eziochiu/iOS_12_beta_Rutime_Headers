/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal : NSObject {
    long long  _faceID;
    bool  _hasLeftEyeBounds;
    bool  _hasLeftEyeClosedConfidence;
    bool  _hasRightEyeBounds;
    bool  _hasRightEyeClosedConfidence;
    bool  _hasRollAngle;
    bool  _hasSmileConfidence;
    bool  _hasYawAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leftEyeBounds;
    int  _leftEyeClosedConfidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rightEyeBounds;
    int  _rightEyeClosedConfidence;
    double  _rollAngle;
    int  _smileConfidence;
    double  _yawAngle;
}

@property (nonatomic) long long faceID;
@property (nonatomic) bool hasLeftEyeBounds;
@property (nonatomic) bool hasLeftEyeClosedConfidence;
@property (nonatomic) bool hasRightEyeBounds;
@property (nonatomic) bool hasRightEyeClosedConfidence;
@property (nonatomic) bool hasRollAngle;
@property (nonatomic) bool hasSmileConfidence;
@property (nonatomic) bool hasYawAngle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftEyeBounds;
@property (nonatomic) int leftEyeClosedConfidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightEyeBounds;
@property (nonatomic) int rightEyeClosedConfidence;
@property (nonatomic) double rollAngle;
@property (nonatomic) int smileConfidence;
@property (nonatomic) double yawAngle;

- (long long)faceID;
- (bool)hasLeftEyeBounds;
- (bool)hasLeftEyeClosedConfidence;
- (bool)hasRightEyeBounds;
- (bool)hasRightEyeClosedConfidence;
- (bool)hasRollAngle;
- (bool)hasSmileConfidence;
- (bool)hasYawAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeBounds;
- (int)leftEyeClosedConfidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeBounds;
- (int)rightEyeClosedConfidence;
- (double)rollAngle;
- (void)setFaceID:(long long)arg1;
- (void)setHasLeftEyeBounds:(bool)arg1;
- (void)setHasLeftEyeClosedConfidence:(bool)arg1;
- (void)setHasRightEyeBounds:(bool)arg1;
- (void)setHasRightEyeClosedConfidence:(bool)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (void)setHasSmileConfidence:(bool)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setLeftEyeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEyeClosedConfidence:(int)arg1;
- (void)setRightEyeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRightEyeClosedConfidence:(int)arg1;
- (void)setRollAngle:(double)arg1;
- (void)setSmileConfidence:(int)arg1;
- (void)setYawAngle:(double)arg1;
- (int)smileConfidence;
- (double)yawAngle;

@end
