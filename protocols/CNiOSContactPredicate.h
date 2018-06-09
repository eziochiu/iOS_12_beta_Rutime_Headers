/* made by EzioChiu.
 */

@protocol CNiOSContactPredicate <NSObject, NSCopying>

@required

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 matchInfos:(id*)arg3 environment:(CNContactsEnvironment *)arg4 error:(struct __CFError {}**)arg5;
- (<CNEncodedFetchCursor> *)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 environment:(CNContactsEnvironment *)arg3 error:(id*)arg4;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;

@end
