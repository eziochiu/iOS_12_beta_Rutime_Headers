/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSedentaryTimerData : NSObject <NSCopying, NSSecureCoding> {
    long long  fAlarmType;
    bool  fDidWake;
    double  fFiredDate;
    double  fStartDate;
}

@property (nonatomic, readonly) long long alarmType;
@property (nonatomic, readonly) bool didWake;
@property (nonatomic, readonly) NSDate *firedDate;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (long long)alarmType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didWake;
- (void)encodeWithCoder:(id)arg1;
- (id)firedDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(long long)arg3 didWake:(bool)arg4;
- (id)startDate;

@end
