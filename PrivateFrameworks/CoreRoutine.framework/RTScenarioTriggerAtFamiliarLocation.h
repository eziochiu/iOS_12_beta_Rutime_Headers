/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTScenarioTriggerAtFamiliarLocation : RTScenarioTrigger {
    RTLocationOfInterest * _locationOfInterest;
}

@property (nonatomic, readonly) RTLocationOfInterest *locationOfInterest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationOfInterest;

@end
