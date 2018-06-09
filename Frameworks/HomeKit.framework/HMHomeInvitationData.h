/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeInvitationData : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSUUID * _identifier;
    long long  _invitationState;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic) long long invitationState;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (id)homeInvitationStateDescription:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3;
- (long long)invitationState;
- (void)setEndDate:(id)arg1;
- (void)setInvitationState:(long long)arg1;
- (id)startDate;

@end
