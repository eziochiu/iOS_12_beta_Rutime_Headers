/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding> {
    id /* block */  _callback;
    unsigned long long  _deviceSet;
    _CDContextualPredicate * _dismissalPolicy;
    NSString * _identifier;
    bool  _isDeserialized;
    bool  _mustWake;
    _CDContextualPredicate * _predicate;
}

@property (copy) id /* block */ callback;
@property (nonatomic) unsigned long long deviceSet;
@property (nonatomic, retain) _CDContextualPredicate *dismissalPolicy;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isDeserialized;
@property (nonatomic) bool mustWake;
@property (nonatomic, retain) _CDContextualPredicate *predicate;

+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(id /* block */)arg3;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(id /* block */)arg3;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(bool)arg5 callback:(id /* block */)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceSet;
- (id)dismissalPolicy;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(bool)arg5 callback:(id /* block */)arg6;
- (bool)isDeserialized;
- (bool)isEqual:(id)arg1;
- (bool)mustWake;
- (id)predicate;
- (void)setCallback:(id /* block */)arg1;
- (void)setDeviceSet:(unsigned long long)arg1;
- (void)setDismissalPolicy:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDeserialized:(bool)arg1;
- (void)setMustWake:(bool)arg1;
- (void)setPredicate:(id)arg1;

@end
