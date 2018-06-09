/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSDictionary * _state;
}

@property (nonatomic, readonly) double backOffTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long escrowCount;
@property (nonatomic, readonly) unsigned long long failedAttemptCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lockState;
@property (nonatomic, readonly) bool permanentlyBlocked;
@property (nonatomic, readonly) bool recoveryEnabled;
@property (nonatomic, readonly) bool recoveryPossible;
@property (nonatomic, readonly) bool recoveryRequired;
@property (nonatomic, readonly) bool shouldWipe;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)backOffTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)escrowCount;
- (unsigned long long)failedAttemptCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;
- (bool)isEffectivelyLocked;
- (bool)isEqual:(id)arg1;
- (long long)lockState;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)permanentlyBlocked;
- (id)publicDescription;
- (bool)recoveryEnabled;
- (bool)recoveryPossible;
- (bool)recoveryRequired;
- (bool)shouldWipe;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
