/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    double  mAngle;
    bool  mHasAngle;
    bool  mHasOriginType;
    bool  mHasPathEditMode;
    bool  mHasRotationCenter;
    int  mOriginType;
    NSString * mPath;
    int  mPathEditMode;
    NSString * mPointsTypes;
    struct CGPoint { 
        double x; 
        double y; 
    }  mRotationCenter;
}

- (double)angle;
- (void)dealloc;
- (bool)hasAngle;
- (bool)hasOriginType;
- (bool)hasPath;
- (bool)hasPathEditMode;
- (bool)hasRotationCenter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)originType;
- (id)path;
- (int)pathEditMode;
- (id)pointsTypes;
- (struct CGPoint { double x1; double x2; })rotationCenter;
- (void)setAngle:(double)arg1;
- (void)setOriginType:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setPathEditMode:(int)arg1;
- (void)setPointsTypes:(id)arg1;
- (void)setRotationCenter:(struct CGPoint { double x1; double x2; })arg1;

@end
