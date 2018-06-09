/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactStoreDataSource : NSObject <CNContactDataSource> {
    CNContactStoreSnapshot * _currentSnapshot;
    bool  _fetchUnified;
    CNContactStoreFilter * _filter;
    NSArray * _keysToFetch;
    bool  _loadingSnapshot;
    CNManagedConfiguration * _managedConfiguration;
    CNContact * _meContact;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenFrame;
    NSDictionary * _sectionHeadersDictionary;
    CNContactStore * _store;
    CNContactFormatter * contactFormatter;
    <CNContactDataSourceDelegate> * delegate;
}

@property (nonatomic, readonly) unsigned int abSortOrder;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, readonly) bool canReload;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, retain) CNContactStoreSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (nonatomic) bool fetchUnified;
@property (nonatomic, copy) CNContactStoreFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, readonly) NSArray *indexSectionsArray;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic, readonly) NSDictionary *localizedSectionHeaders;
@property (nonatomic, readonly) NSDictionary *localizedSectionIndices;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, copy) CNContact *meContact;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenFrame;
@property (nonatomic, readonly) NSDictionary *sectionHeadersDictionary;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (nonatomic, readonly) long long sortOrder;
@property (nonatomic, retain) CNContactStore *store;
@property (readonly) Class superclass;

+ (bool)isErrorPossiblyRelatedToExtraStores:(id)arg1;
+ (id)keyPathsForValuesAffectingEffectiveFilter;

- (void).cxx_destruct;
- (void)_reloadSynchronously:(bool)arg1;
- (unsigned int)abSortOrder;
- (id)addressBook;
- (bool)canReload;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(bool)arg2 keysToFetch:(id)arg3;
- (id)contactFormatter;
- (id)contactMatchInfos;
- (void)contactStoreDidChange:(id)arg1;
- (void)contactStoreMeContactDidChange:(id)arg1;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSnapshot;
- (void)dealloc;
- (id)delegate;
- (id)displayName;
- (id)effectiveFilter;
- (bool)fetchUnified;
- (id)filter;
- (id)indexPathForContact:(id)arg1;
- (id)indexSections;
- (id)indexSectionsArray;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 screenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)invalidate;
- (bool)isLoading;
- (id)keysToFetch;
- (id)localizedSectionHeaders;
- (id)localizedSectionIndices;
- (id)managedConfiguration;
- (id)meContact;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredForNameMeContactIdentifier;
- (id)preferredForNameMeContactWithKeysToFetch:(id)arg1;
- (void)reload;
- (void)reloadAsynchronously;
- (void)reset;
- (void)resetPreferredForNameMeContact;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenFrame;
- (id)sectionHeadersDictionary;
- (id)sections;
- (void)setContactFormatter:(id)arg1;
- (void)setCurrentSnapshot:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchUnified:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setMeContact:(id)arg1;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (void)setStore:(id)arg1;
- (long long)sortOrder;
- (id)store;

@end
