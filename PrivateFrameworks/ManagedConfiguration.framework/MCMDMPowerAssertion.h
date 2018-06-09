/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMPowerAssertion : MCPowerAssertion {
    UMUserSwitchBlockingTask * _blockingTask;
    NSDate * _creationDate;
    NSString * _reason;
}

@property (nonatomic, retain) UMUserSwitchBlockingTask *blockingTask;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *reason;

+ (id)_currentAssertions;
+ (id)_dateFormatter;
+ (id)assertionDescriptions;

- (void).cxx_destruct;
- (id)blockingTask;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (void)setBlockingTask:(id)arg1;

@end
