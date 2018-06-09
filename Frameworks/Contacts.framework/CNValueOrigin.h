/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding> {
    NSString * _donationIdentifier;
    NSString * _localizedApplicationName;
}

@property (nonatomic, readonly, copy) NSString *donationIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedApplicationName;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)donationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedApplicationName;

// Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation

+ (id)localizedApplicationNameForBundleIdentifier:(id)arg1;

- (id)initWithDonationOrigin:(id)arg1;

@end