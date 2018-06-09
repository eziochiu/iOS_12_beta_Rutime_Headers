/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPTravelEstimates : NSObject <NSSecureCoding> {
    NSMeasurement * _distanceRemaining;
    double  _timeRemaining;
}

@property (nonatomic, readonly, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, readonly) double timeRemaining;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)distanceRemaining;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2;
- (double)timeRemaining;

@end
