/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWorkout : NSObject <NSCopying, NSSecureCoding> {
    bool  _isUserInitiated;
    NSDate * fEndDate;
    bool  fIsUserInitiated;
    long long  fLocationType;
    NSUUID * fSessionId;
    NSDate * fStartDate;
    long long  fType;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool isUserInitiated;
@property (nonatomic, readonly) long long locationType;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long type;

+ (int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1;
+ (long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)arg1;
+ (long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)arg1;
+ (long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1;
+ (bool)isAvailable;
+ (bool)supportsSecureCoding;
+ (bool)workoutIsTypePedestrian:(long long)arg1;
+ (bool)workoutIsTypeRunning:(long long)arg1;
+ (bool)workoutIsTypeWalking:(long long)arg1;
+ (id)workoutLocationName:(long long)arg1;
+ (long long)workoutLocationTypeFromCMWorkoutType:(long long)arg1;
+ (id)workoutName:(long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (bool)isUserInitiated;
- (long long)locationType;
- (id)sessionId;
- (void)setIsUserInitiated:(bool)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setWorkoutType:(long long)arg1;
- (id)startDate;
- (long long)type;

@end
