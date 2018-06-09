/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate> {
    struct __CFArray { } * _addresses;
    struct __CFString { } * _countryCode;
    struct __CFArray { } * _identifiers;
    NSString * _searchTerm;
    struct __CFArray { } * _uids;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)property;

- (struct __CFArray { }*)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray {}**)arg2 identifiers:(const struct __CFArray {}**)arg3;
- (void)dealloc;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end
