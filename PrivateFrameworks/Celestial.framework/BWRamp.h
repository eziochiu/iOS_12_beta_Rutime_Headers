/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRamp : NSObject {
    int  _currentIteration;
    float  _currentValue;
    int  _durationInIterations;
    float  _exponentialConvergenceFraction;
    float  _exponentialSnapFraction;
    bool  _isRamping;
    bool  _isRampingUp;
    int  _shape;
    float  _startValue;
    float  _targetValue;
}

@property (nonatomic, readonly) float currentValue;
@property (nonatomic, readonly) bool isRamping;

+ (void)initialize;

- (float)currentValue;
- (id)init;
- (bool)isRamping;
- (void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4;
- (float)updateRampForNexIteration;

@end
