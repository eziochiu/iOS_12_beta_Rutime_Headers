/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTScenarioTriggerStayedLate : RTScenarioTrigger {
    double  _secondsLate;
}

@property (nonatomic, readonly) double secondsLate;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecondsLate:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)secondsLate;

@end
