/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAppleIDContactInfo : NSObject <NSSecureCoding> {
    NSString * _firstName;
    NSString * _lastName;
    NSArray * _validatedEmailAddresses;
    NSArray * _validatedPhoneNumbers;
}

@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSArray *validatedEmailAddresses;
@property (nonatomic, retain) NSArray *validatedPhoneNumbers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactInfo:(id)arg1;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setValidatedEmailAddresses:(id)arg1;
- (void)setValidatedPhoneNumbers:(id)arg1;
- (id)validatedEmailAddresses;
- (id)validatedPhoneNumbers;

@end
