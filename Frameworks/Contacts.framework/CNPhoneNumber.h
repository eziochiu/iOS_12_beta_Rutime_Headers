/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneNumber : NSObject <CNObjectValidation, CNUIURLDestinationID, NSCopying, NSSecureCoding> {
    NSString * _initialCountryCode;
    struct __CFPhoneNumber { } * _phoneNumberRef;
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *digits;
@property (nonatomic, readonly, copy) NSString *formattedInternationalStringValue;
@property (nonatomic, readonly, copy) NSString *formattedStringValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *initialCountryCode;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (struct __CFPhoneNumber { }*)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;
+ (id)defaultCountryCode;
+ (id)new;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (unsigned long long)samePersonPhoneNumberComparisonMatchCount;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalStringValue;
- (id)formattedStringValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)initialCountryCode;
- (bool)isEqual:(id)arg1;
- (bool)isLikePhoneNumber:(id)arg1;
- (bool)isLikePhoneNumberForSamePerson:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)lastFourDigits;
- (struct __CFPhoneNumber { }*)nts_lazyPhoneNumberRef;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)stringValue;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;
- (id)unformattedInternationalStringValue;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_URLDestinationID;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pkFormattedStringValue;

@end
