/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSString * _countryCode;
    NSString * _digits;
    CNPhoneNumber * _phoneNumber;
    NSString * _prefixHint;
    bool  _returnsMultipleResults;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *digits;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CNPhoneNumber *phoneNumber;
@property (nonatomic, readonly, copy) NSString *prefixHint;
@property (nonatomic, readonly) bool returnsMultipleResults;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (id)description;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2 returnMultipleResults:(bool)arg3;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(bool)arg2;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(bool)arg2 prefixHint:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (id)prefixHint;
- (bool)returnsMultipleResults;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;
- (id)shortDebugDescription;

@end
