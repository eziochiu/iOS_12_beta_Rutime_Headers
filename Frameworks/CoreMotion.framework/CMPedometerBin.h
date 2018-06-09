/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerBin : NSObject <NSSecureCoding> {
    double  _begin;
    double  _end;
    long long  _state;
    double  _valueOut;
}

@property (nonatomic, readonly) double begin;
@property (nonatomic, readonly) double center;
@property (nonatomic, readonly) double end;
@property (nonatomic, readonly) double lowerQuartile;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double upperQuartile;
@property (nonatomic, readonly) double valueOut;

+ (bool)supportsSecureCoding;

- (double)begin;
- (double)center;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)end;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (double)lowerQuartile;
- (long long)state;
- (double)upperQuartile;
- (double)valueOut;

@end
