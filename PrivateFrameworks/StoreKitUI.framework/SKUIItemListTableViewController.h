/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate> {
    SKUIItemArtworkContext * _artworkContext;
    SKUIClientContext * _clientContext;
    <SKUIItemListTableDelegate> * _delegate;
    bool  _delegateWantsCanRemove;
    bool  _delegateWantsDidRemove;
    bool  _delegateWantsWillDisplay;
    bool  _didLoadMore;
    NSMutableIndexSet * _hiddenIconIndexSet;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageBoundingSize;
    SKUIItemCollectionController * _itemCollectionController;
    SKUIItemList * _itemList;
    SSVLoadURLOperation * _loadMoreOperation;
    bool  _loadsMoreItems;
    NSOperationQueue * _operationQueue;
    bool  _requestedLoadMore;
    double  _rowHeight;
    long long  _selectionStyle;
    long long  _separatorStyle;
    bool  _suspended;
    SKUIUber * _uber;
}

@property (nonatomic, retain) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, retain) SKUIResourceLoader *artworkLoader;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIItemListTableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize { double x1; double x2; } imageBoundingSize;
@property (nonatomic, retain) SKUIItemList *itemList;
@property (nonatomic) bool loadsMoreItems;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) double rowHeight;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) long long separatorStyle;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, retain) SKUIUber *uber;
@property (nonatomic, readonly) NSString *visibleMetricsImpressions;

- (void).cxx_destruct;
- (void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2;
- (id)_itemCollectionController;
- (void)_loadRemainingItemsWithPriority:(long long)arg1;
- (void)addItems:(id)arg1;
- (id)artworkContext;
- (id)artworkLoader;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1;
- (id)iconDataConsumer;
- (struct CGSize { double x1; double x2; })imageBoundingSize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSuspended;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)itemList;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (void)itemTableView:(id)arg1 didRemoveCell:(id)arg2;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)loadView;
- (bool)loadsMoreItems;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)operationQueue;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (double)rowHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)selectionStyle;
- (long long)separatorStyle;
- (void)setArtworkContext:(id)arg1;
- (void)setArtworkLoader:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemArtworkContext:(id)arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)setItemList:(id)arg1;
- (void)setLoadsMoreItems:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUber:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)uber;
- (void)unhideIcons;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemRangeForItemCollectionController:(id)arg1;
- (id)visibleMetricsImpressions;

@end
