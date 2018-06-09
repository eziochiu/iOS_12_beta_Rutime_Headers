/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMRecordedAccelerometerData : CMAccelerometerData {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _accelerationValue;
    unsigned long long  _identifier;
    double  _startDateValue;
    double  _timestampValue;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (struct { double x1; double x2; double x3; })acceleration;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMAccel100 { float x1; float x2; float x3; unsigned long long x4; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (void)resetWithData:(struct CMAccel100 { float x1; float x2; float x3; unsigned long long x4; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (id)startDate;
- (double)timestamp;

@end
