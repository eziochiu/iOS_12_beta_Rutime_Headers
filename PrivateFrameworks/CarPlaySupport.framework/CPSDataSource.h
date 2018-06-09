/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource> {
    Class  _cellClass;
    id /* block */  _cellConfigureBlock;
    long long  _rowAnimation;
    UITableView * _tableView;
}

@property (nonatomic) Class cellClass;
@property (nonatomic, copy) id /* block */ cellConfigureBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic) long long rowAnimation;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (Class)cellClass;
- (id /* block */)cellConfigureBlock;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSectionsAtIndexes:(id)arg1;
- (id)init;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSectionsAtIndexes:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (long long)rowAnimation;
- (void)setCellClass:(Class)arg1;
- (void)setCellConfigureBlock:(id /* block */)arg1;
- (void)setRowAnimation:(long long)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
