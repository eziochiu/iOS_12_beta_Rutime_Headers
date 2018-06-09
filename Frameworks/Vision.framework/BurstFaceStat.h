/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface BurstFaceStat : NSObject <NSCopying> {
    int  FCRBlinkFeaturesSize;
    int  FCRLeftEyeFeaturesOffset;
    int  FCRRightEyeFeaturesOffset;
    NSMutableArray * FCRSmileAndBlinkFeatures;
    int  FCRSmileFeaturesOffset;
    int  FCRSmileFeaturesSize;
    bool  _hasPitchAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hwFaceRect;
    bool  _isSyncedWithImage;
    float  _pitchAngle;
    int  faceId;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  faceRect;
    float  faceScore;
    float  focusScore;
    bool  foundByFaceCore;
    int  framesSinceLast;
    bool  hasLeftEye;
    bool  hasRightEye;
    bool  hasRollAngle;
    bool  hasYawAngle;
    int  hwFaceId;
    float  leftEyeBlinkScore;
    bool  leftEyeOpen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  leftEyeRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  normalizedFaceRect;
    float  normalizedFocusScore;
    float  normalizedSigma;
    float  rightEyeBlinkScore;
    bool  rightEyeOpen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rightEyeRect;
    float  rollAngle;
    bool  smallFace;
    float  smileScore;
    bool  smiling;
    double  timestamp;
    float  yawAngle;
}

@property int FCRBlinkFeaturesSize;
@property int FCRLeftEyeFeaturesOffset;
@property int FCRRightEyeFeaturesOffset;
@property (retain) NSMutableArray *FCRSmileAndBlinkFeatures;
@property int FCRSmileFeaturesOffset;
@property int FCRSmileFeaturesSize;
@property int faceId;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property float faceScore;
@property float focusScore;
@property bool foundByFaceCore;
@property int framesSinceLast;
@property bool hasLeftEye;
@property bool hasPitchAngle;
@property bool hasRightEye;
@property bool hasRollAngle;
@property bool hasYawAngle;
@property int hwFaceId;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hwFaceRect;
@property bool isSyncedWithImage;
@property float leftEyeBlinkScore;
@property bool leftEyeOpen;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftEyeRect;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceRect;
@property float normalizedFocusScore;
@property float normalizedSigma;
@property float pitchAngle;
@property float rightEyeBlinkScore;
@property bool rightEyeOpen;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightEyeRect;
@property float rollAngle;
@property bool smallFace;
@property float smileScore;
@property bool smiling;
@property double timestamp;
@property float yawAngle;

- (void).cxx_destruct;
- (int)FCRBlinkFeaturesSize;
- (int)FCRLeftEyeFeaturesOffset;
- (int)FCRRightEyeFeaturesOffset;
- (id)FCRSmileAndBlinkFeatures;
- (int)FCRSmileFeaturesOffset;
- (int)FCRSmileFeaturesSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)faceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (float)faceScore;
- (float)focusScore;
- (bool)foundByFaceCore;
- (int)framesSinceLast;
- (bool)hasLeftEye;
- (bool)hasPitchAngle;
- (bool)hasRightEye;
- (bool)hasRollAngle;
- (bool)hasYawAngle;
- (int)hwFaceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hwFaceRect;
- (id)initWithFaceStat:(id)arg1;
- (bool)isSyncedWithImage;
- (float)leftEyeBlinkScore;
- (bool)leftEyeOpen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;
- (float)normalizedFocusScore;
- (float)normalizedSigma;
- (float)pitchAngle;
- (float)rightEyeBlinkScore;
- (bool)rightEyeOpen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeRect;
- (float)rollAngle;
- (void)setFCRBlinkFeaturesSize:(int)arg1;
- (void)setFCRLeftEyeFeaturesOffset:(int)arg1;
- (void)setFCRRightEyeFeaturesOffset:(int)arg1;
- (void)setFCRSmileAndBlinkFeatures:(id)arg1;
- (void)setFCRSmileFeaturesOffset:(int)arg1;
- (void)setFCRSmileFeaturesSize:(int)arg1;
- (void)setFaceId:(int)arg1;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceScore:(float)arg1;
- (void)setFocusScore:(float)arg1;
- (void)setFoundByFaceCore:(bool)arg1;
- (void)setFramesSinceLast:(int)arg1;
- (void)setHasLeftEye:(bool)arg1;
- (void)setHasPitchAngle:(bool)arg1;
- (void)setHasRightEye:(bool)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setHwFaceId:(int)arg1;
- (void)setHwFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsSyncedWithImage:(bool)arg1;
- (void)setLeftEyeBlinkScore:(float)arg1;
- (void)setLeftEyeOpen:(bool)arg1;
- (void)setLeftEyeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedFocusScore:(float)arg1;
- (void)setNormalizedSigma:(float)arg1;
- (void)setPitchAngle:(float)arg1;
- (void)setRightEyeBlinkScore:(float)arg1;
- (void)setRightEyeOpen:(bool)arg1;
- (void)setRightEyeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRollAngle:(float)arg1;
- (void)setSmallFace:(bool)arg1;
- (void)setSmileScore:(float)arg1;
- (void)setSmiling:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setYawAngle:(float)arg1;
- (bool)smallFace;
- (float)smileScore;
- (bool)smiling;
- (double)timestamp;
- (float)yawAngle;

@end
