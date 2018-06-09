/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface TCSContactsDataSource : NSObject <TCSContactsObserver> {
    NSMutableSet * _contactIdentifiers;
    CNContactStore * _contactStore;
    TCSContacts * _contacts;
    <TCSContactsDataSourceDelegate> * _delegate;
    int  _firstUnlockToken;
    NSArray * _sortedContacts;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) TCSContacts *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TCSContactsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sortedContacts;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)_contactArray:(id)arg1 differsFromArray:(id)arg2;
- (void)_handleContactStoreDidChange:(id)arg1;
- (void)_handleDeviceFirstUnlock;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_notifyDelegateContactsChanged;
- (void)_notifyDelegateRecencyChanged;
- (id)_sortedContactsArrayFromArray:(id)arg1;
- (id)_unsortedContactsArray;
- (void)_updateSortedContactsAndNotifyIfChanged:(bool)arg1;
- (long long)addContact:(id)arg1;
- (id)contactStore;
- (id)contacts;
- (void)dealloc;
- (id)delegate;
- (void)destinationsDidChange:(id)arg1;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2;
- (bool)isContactWhitelisted:(id)arg1;
- (void)recencyDidChange:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSortedContacts:(id)arg1;
- (id)sortedContacts;

@end
