/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSkiData : NSObject <NSCopying, NSSecureCoding> {
    NSDate * fEndDate;
    unsigned long long  fRecordId;
    double  fRunAvgSpeed;
    double  fRunDistance;
    double  fRunElevationDescent;
    double  fRunMaxSpeed;
    double  fRunSlope;
    NSUUID * fSessionId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) double runAvgSpeed;
@property (nonatomic, readonly) double runDistance;
@property (nonatomic, readonly) double runElevationDescent;
@property (nonatomic, readonly) double runMaxSpeed;
@property (nonatomic, readonly) double runSlope;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void)convertToSkiEntry:(struct CLSkiEntry { unsigned long long x1; unsigned char x2[16]; unsigned char x3[16]; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 runDistance:(double)arg6 runAvgSpeed:(double)arg7 runMaxSpeed:(double)arg8 runSlope:(double)arg9 runElevationDescent:(double)arg10;
- (id)initWithSessionId:(id)arg1;
- (id)initWithSkiEntry:(const struct CLSkiEntry { unsigned long long x1; unsigned char x2[16]; unsigned char x3[16]; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg1;
- (unsigned long long)recordId;
- (double)runAvgSpeed;
- (double)runDistance;
- (double)runElevationDescent;
- (double)runMaxSpeed;
- (double)runSlope;
- (id)sessionId;
- (id)sourceId;
- (id)startDate;

@end
