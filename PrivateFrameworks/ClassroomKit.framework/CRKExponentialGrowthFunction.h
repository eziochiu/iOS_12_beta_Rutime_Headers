/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKExponentialGrowthFunction : NSObject <CRKGrowthFunction> {
    double  _growthRate;
}

@property (nonatomic, readonly) double growthRate;

- (double)evaluateWithValue:(double)arg1;
- (double)growthRate;
- (id)initWithGrowthRate:(double)arg1;

@end
