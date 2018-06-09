/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNEmailAddressDonationValue : CNDonationValue {
    NSString * _emailAddress;
    NSString * _label;
}

@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly, copy) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)updatePropertyListRepresentation:(id)arg1;

@end
