/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableDataSource : NSObject {
    id  _cellReuseSource;
    long long  _columnCount;
    SUVariableCellConfigurationCache * _configurationCache;
    long long  _preferringUserInteractionCount;
}

@property (nonatomic) id cellReuseSource;
@property (nonatomic) long long columnCount;
@property (nonatomic, readonly) SUImageCache *imageCache;
@property (nonatomic, readonly) ISURLOperationPool *imagePool;
@property (nonatomic, readonly) long long numberOfSections;
@property (getter=isPreferringUserInteraction, nonatomic, readonly) bool preferringUserInteraction;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly) long long tableViewStyle;

- (void)beginPreferringUserInteraction;
- (id)cachedConfigurationForClass:(Class)arg1 index:(long long)arg2;
- (bool)canDeleteIndexPath:(id)arg1;
- (bool)canDoubleTapIndexPath:(id)arg1;
- (bool)canSelectIndexPath:(id)arg1;
- (id)cellContextForConfigurationClass:(Class)arg1;
- (id)cellForIndexPath:(id)arg1;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)cellReuseSource;
- (long long)columnCount;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (void)dealloc;
- (bool)deleteIndexPath:(id)arg1;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (void)endPreferringUserInteraction;
- (id)headerViewForSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (double)heightForPlaceholderCells;
- (id)imageCache;
- (id)imagePool;
- (id)init;
- (bool)isPreferringUserInteraction;
- (long long)numberOfColumnsInSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (void)reloadData;
- (void)resetCaches;
- (void)resetLayoutCaches;
- (long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)sectionIndexTitles;
- (void)setCellReuseSource:(id)arg1;
- (void)setColumnCount:(long long)arg1;
- (long long)tableViewStyle;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;

@end
