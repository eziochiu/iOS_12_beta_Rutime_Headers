/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _altDSID;
    long long  _certificateStatus;
    bool  _didMatchEmail;
    bool  _didMatchPhone;
    NSString * _matchedValue;
    NSDate * _validUntilDate;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) long long certificateStatus;
@property (nonatomic, readonly) bool didMatchEmail;
@property (nonatomic, readonly) bool didMatchPhone;
@property (nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) NSString *matchedValue;
@property (nonatomic, readonly) NSDate *validUntilDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)altDSID;
- (long long)certificateStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didMatchEmail;
- (bool)didMatchPhone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPersonInfo:(id)arg1;
- (bool)isStale;
- (id)matchedValue;
- (id)validUntilDate;

@end
