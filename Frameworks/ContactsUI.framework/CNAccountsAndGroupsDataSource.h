/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsDataSource : NSObject {
    CNContactStoreFilter * _filter;
    bool  _hidesSearchableSources;
    CNAccountsAndGroupsItem * _rootItem;
    NSArray * _sections;
    CNContactStoreFilter * _serverFilter;
    CNContactStore * _store;
}

@property (nonatomic, copy) CNContactStoreFilter *filter;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic, retain) CNAccountsAndGroupsItem *rootItem;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, readonly) CNContactStoreFilter *serverFilter;
@property (nonatomic, retain) CNContactStore *store;
@property (getter=isTrivial, nonatomic, readonly) bool trivial;

- (void).cxx_destruct;
- (void)_applyFilter;
- (void)_reloadSections;
- (id)filter;
- (bool)hidesSearchableSources;
- (id)initWithStore:(id)arg1;
- (bool)isTrivial;
- (void)reload;
- (id)rootItem;
- (id)sections;
- (id)serverFilter;
- (void)setFilter:(id)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setRootItem:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setServerFilterForItem:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
