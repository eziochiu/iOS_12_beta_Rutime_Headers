/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContact : NSObject <NSSecureCoding> {
    NSString * _emailAddress;
    NSPersonNameComponents * _name;
    CNPhoneNumber * _phoneNumber;
    CNPostalAddress * _postalAddress;
    NSString * _supplementarySubLocality;
}

@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSPersonNameComponents *name;
@property (nonatomic, retain) CNPhoneNumber *phoneNumber;
@property (nonatomic, retain) CNPostalAddress *postalAddress;
@property (nonatomic, retain) NSString *supplementarySubLocality;

+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)cnMutableContact;
- (id)dictionaryRepresentation;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCNContact:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContact:(id)arg1;
- (id)name;
- (id)phoneNumber;
- (id)postalAddress;
- (void)setEmailAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setSupplementarySubLocality:(id)arg1;
- (id)supplementarySubLocality;

@end
