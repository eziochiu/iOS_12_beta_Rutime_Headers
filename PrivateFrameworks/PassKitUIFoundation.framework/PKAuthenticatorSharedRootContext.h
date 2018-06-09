/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKAuthenticatorSharedRootContext : NSObject {
    LAContext * _LAContext;
    bool  _assumeUserIntentAvailable;
    NSLock * _lock;
}

@property (nonatomic) bool assumeUserIntentAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_initialUserIntentAvailabilityAssumption;
- (bool)assumeUserIntentAvailable;
- (void)dealloc;
- (id)externalizedContext;
- (id)init;
- (void)resetWithCompletion:(id /* block */)arg1;
- (void)setAssumeUserIntentAvailable:(bool)arg1;

@end
