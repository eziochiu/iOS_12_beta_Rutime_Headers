/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFAddressBookPropertySearchOperation : _MFAddressBookSearchOperation

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;
+ (int)property;

- (struct __CFArray { }*)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray {}**)arg2 identifiers:(const struct __CFArray {}**)arg3;
- (struct __CFArray { }*)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray {}**)arg2 identifiers:(const struct __CFArray {}**)arg3 properties:(const struct __CFArray {}**)arg4;

@end
