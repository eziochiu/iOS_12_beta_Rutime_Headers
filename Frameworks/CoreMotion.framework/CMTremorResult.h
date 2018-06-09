/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    float  _percentMild;
    float  _percentModerate;
    float  _percentNone;
    float  _percentOffWrist;
    float  _percentSlight;
    float  _percentStrong;
    float  _percentUnknown;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) float percentMild;
@property (nonatomic, readonly) float percentModerate;
@property (nonatomic, readonly) float percentNone;
@property (nonatomic, readonly) float percentOffWrist;
@property (nonatomic, readonly) float percentSlight;
@property (nonatomic, readonly) float percentStrong;
@property (nonatomic, readonly) float percentUnknown;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentOffWrist:(float)arg3 percentUnknown:(float)arg4 percentNone:(float)arg5 percentSlight:(float)arg6 percentMild:(float)arg7 percentModerate:(float)arg8 percentStrong:(float)arg9;
- (float)percentMild;
- (float)percentModerate;
- (float)percentNone;
- (float)percentOffWrist;
- (float)percentSlight;
- (float)percentStrong;
- (float)percentUnknown;
- (id)startDate;

@end
