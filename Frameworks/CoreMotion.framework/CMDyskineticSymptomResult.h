/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    float  _percentLikely;
    float  _percentOffWrist;
    float  _percentUnlikely;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) float percentLikely;
@property (nonatomic, readonly) float percentOffWrist;
@property (nonatomic, readonly) float percentUnlikely;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentOffWrist:(float)arg3 percentDyskinesiaUnlikely:(float)arg4 percentDyskinesiaLikely:(float)arg5;
- (float)percentLikely;
- (float)percentOffWrist;
- (float)percentUnlikely;
- (id)startDate;

@end
