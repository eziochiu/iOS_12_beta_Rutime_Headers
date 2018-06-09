/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewerRelativeDevicePose : NSObject <NSCoding, NSCopying> {
    _UIMotionEffectAcceleratedOutputRange * _acceleratedOutputRange;
    double  _planarRotationAngle;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _viewerOffset;
}

@property (nonatomic) double planarRotationAngle;
@property (nonatomic) struct UIOffset { double x1; double x2; } viewerOffset;

- (void).cxx_destruct;
- (struct UIOffset { double x1; double x2; })_acceleratedOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg1 accelerationBoostFactor:(struct CGPoint { double x1; double x2; })arg2;
- (id)_acceleratedOutputRange;
- (void)_reset;
- (void)_setAcceleration:(struct CGPoint { double x1; double x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)planarRotationAngle;
- (void)setPlanarRotationAngle:(double)arg1;
- (void)setViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })viewerOffset;

@end
