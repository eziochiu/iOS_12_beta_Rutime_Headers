/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMockContactsLogger : NSObject <CNContactsLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)XPCConnectionWasInterrupted;
- (void)XPCConnectionWasInvalidated;
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)changingMeContact:(id /* block */)arg1;
- (void)clearingChangeHistory:(id /* block */)arg1;
- (void)contactsAccessWasGranted:(bool)arg1;
- (void)deletingContact:(id)arg1;
- (void)didFetchContacts:(id)arg1 error:(id)arg2;
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3;
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3;
- (void)fetchingChangeHistory:(id /* block */)arg1;
- (void)fetchingContactCount:(id /* block */)arg1;
- (void)fetchingContactIdentifierWithMatchingDictionary:(id /* block */)arg1;
- (void)fetchingContactWithUserActivity:(id /* block */)arg1;
- (void)fetchingContacts:(id /* block */)arg1;
- (void)fetchingContactsBatch:(id /* block */)arg1;
- (void)fetchingContainers:(id /* block */)arg1;
- (void)fetchingDefaultContainerIdentifier:(id /* block */)arg1;
- (void)fetchingGroups:(id /* block */)arg1;
- (void)fetchingMeContactIdentifier:(id /* block */)arg1;
- (void)internalError:(id)arg1;
- (void)noAccessToContactsWithError:(id)arg1;
- (void)registeringForChangeHistory:(id /* block */)arg1;
- (void)requestingAccessForContacts:(id /* block */)arg1;
- (void)saveRequestFailed:(id)arg1;
- (void)saveRequestInvalid:(id)arg1;
- (void)saving:(id /* block */)arg1;
- (void)serviceError:(id)arg1;
- (void)servicingContactsRequest:(id /* block */)arg1;
- (void)tccAccessPreflightWasDenied;
- (void)tccAccessRequestWasDenied;
- (void)unregisteringForChangeHistory:(id /* block */)arg1;
- (void)updatingContact:(id)arg1;

@end
