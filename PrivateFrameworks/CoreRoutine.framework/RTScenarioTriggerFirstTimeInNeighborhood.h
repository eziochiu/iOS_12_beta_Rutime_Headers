/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTScenarioTriggerFirstTimeInNeighborhood : RTScenarioTrigger {
    NSString * _neighborhood;
}

@property (nonatomic, readonly) NSString *neighborhood;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNeighborhood:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)neighborhood;

@end
