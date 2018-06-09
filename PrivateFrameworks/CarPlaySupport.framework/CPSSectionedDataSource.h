/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate> {
    bool  _limitingWithSections;
    long long  _maxVisibleSection;
    long long  _numberOfVisibleItemsInLastSection;
    NSMutableArray * _sections;
    CPSessionConfiguration * _sessionConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, retain) CPSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2;
- (id)_sanitizedSectionIndexTitleForTitle:(id)arg1;
- (void)appendSection:(id)arg1;
- (void)deleteSectionAtIndex:(unsigned long long)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSections:(id)arg1;
- (void)insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isLimitingLists;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (id)sessionConfiguration;
- (void)sessionConfiguration:(id)arg1 limitedUserInterfacesChanged:(unsigned long long)arg2;
- (void)setSections:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSections:(id)arg1;

@end
