/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterpolatingMotionEffect : UIMotionEffect {
    double  _horizontalAccelerationBoostFactor;
    NSString * _keyPath;
    id  _maximumRelativeValue;
    id  _minimumRelativeValue;
    long long  _type;
    double  _verticalAccelerationBoostFactor;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, retain) id maximumRelativeValue;
@property (nonatomic, retain) id minimumRelativeValue;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (double)_horizontalAccelerationBoostFactor;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_setHorizontalAccelerationBoostFactor:(double)arg1;
- (void)_setKeyPath:(id)arg1;
- (void)_setType:(long long)arg1;
- (void)_setVerticalAccelerationBoostFactor:(double)arg1;
- (double)_verticalAccelerationBoostFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 type:(long long)arg2;
- (id)keyPath;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (id)maximumRelativeValue;
- (id)minimumRelativeValue;
- (void)setMaximumRelativeValue:(id)arg1;
- (void)setMinimumRelativeValue:(id)arg1;
- (long long)type;

@end
