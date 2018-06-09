/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    NSDateFormatter * _dateFormatter;
    NSMutableIndexSet * _expandedIndexSet;
    long long  _firstStringIndex;
    SKUIProductPageTableExpandableHeaderView * _headerView;
    NSArray * _releaseNotes;
    SKUILayoutCache * _textLayoutCache;
}

@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) long long firstStringIndex;
@property (nonatomic, copy) NSArray *releaseNotes;
@property (nonatomic, retain) SKUILayoutCache *textLayoutCache;

- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)colorScheme;
- (long long)firstStringIndex;
- (id)headerViewForTableView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (long long)numberOfRowsInSection;
- (id)releaseNotes;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFirstStringIndex:(long long)arg1;
- (void)setReleaseNotes:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textLayoutCache;

@end
