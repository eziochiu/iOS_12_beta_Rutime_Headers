/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding> {
    HKClinicalAccount * _account;
    NSNumber * _alternateCredentialPersistentID;
    bool  _wasRelogin;
}

@property (nonatomic, readonly) HKClinicalAccount *account;
@property (nonatomic, copy) NSNumber *alternateCredentialPersistentID;
@property (nonatomic, readonly) bool wasRelogin;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)alternateCredentialPersistentID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 wasRelogin:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAlternateCredentialPersistentID:(id)arg1;
- (bool)wasRelogin;

@end
