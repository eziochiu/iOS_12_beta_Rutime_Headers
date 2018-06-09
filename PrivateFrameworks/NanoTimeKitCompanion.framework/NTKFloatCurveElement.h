/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFloatCurveElement : NSObject {
    long long  _curve;
    double  _floatValue;
    double  _fraction;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic) long long curve;
@property (nonatomic) double floatValue;
@property (nonatomic) double fraction;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (long long)curve;
- (double)floatValue;
- (double)fraction;
- (id)initWithFloatValue:(double)arg1 fraction:(double)arg2;
- (void)setCurve:(long long)arg1;
- (void)setFloatValue:(double)arg1;
- (void)setFraction:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;

@end
