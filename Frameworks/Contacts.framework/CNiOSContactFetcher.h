/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSContactFetcher : NSObject {
    void * _addressBook;
    CNContactsEnvironment * _environment;
    CNContactFetchRequest * _fetchRequest;
    CNManagedConfiguration * _managedConfiguration;
    id /* block */  _personToContact;
}

@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, readonly) CNContactFetchRequest *fetchRequest;

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id*)arg6;
+ (id /* block */)linkedPeopleComparator;

- (void).cxx_destruct;
- (id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1;
- (void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2;
- (id)_contactsFromPeople:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3;
- (void*)addressBook;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2;
- (id)fetchRequest;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 environment:(id)arg3 managedConfiguration:(id)arg4;
- (id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 filteredForAccountIdentifiers:(id)arg4 outCNMatchInfos:(id*)arg5;

@end
