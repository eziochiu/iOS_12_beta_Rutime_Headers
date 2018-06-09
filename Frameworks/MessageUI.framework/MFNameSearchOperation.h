/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFNameSearchOperation : _MFAddressBookSearchOperation <ABPredicateDelegate> {
    struct __CFArray { } * _addresses;
    struct __CFArray { } * _identifiers;
    struct __CFArray { } * _properties;
    struct __CFArray { } * _uids;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;

- (struct __CFArray { }*)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray {}**)arg2 identifiers:(const struct __CFArray {}**)arg3 properties:(const struct __CFArray {}**)arg4;
- (void)dealloc;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end