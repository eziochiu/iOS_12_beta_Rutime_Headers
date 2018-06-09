/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerViewController : UIViewController <MusicClientContextConsuming, MusicVerticalScrollingContainerCollectionViewCellDelegate, MusicVerticalScrollingContainerCollectionViewDelegate, MusicVerticalScrollingContainerItemContextDelegate, SKUIProxyScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    MusicClientContext * _clientContext;
    MusicVerticalScrollingContainerCollectionView * _containerCollectionView;
    bool  _contentOffsetHasAdjustedForTuck;
    <MusicVerticalScrollingContainerViewControllerDelegate> * _delegate;
    struct { 
        unsigned int contentOffsetProxyingPolicyForItem : 1; 
        unsigned int didLayoutSubviews : 1; 
        unsigned int didScroll : 1; 
        unsigned int contentSizeDidChange : 1; 
        unsigned int willEndDraggingWithVelocity : 1; 
    }  _delegateRespondsToSelector;
    bool  _isPerformingLayout;
    NSMapTable * _itemToItemContext;
    long long  _keyboardDismissMode;
    unsigned long long  _numberOfRunningAnimatedInvalidations;
    SKUIProxyScrollView * _proxyScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _proxyScrollViewContentInsetAdditions;
    bool  _shouldTuckTopVerticalScrollingContainerItem;
    bool  _shouldUpdateLayoutOfVisibleCollectionViewCellsUponCompletingAnimatedInvalidations;
    NSArray * _verticalScrollingContainerItems;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UICollectionView *containerCollectionView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicVerticalScrollingContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardDismissMode;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;
@property (nonatomic) bool shouldTuckTopVerticalScrollingContainerItem;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *verticalScrollingContainerItems;

- (void).cxx_destruct;
- (void)_didFinishAnimatedInvalidation;
- (void)_notifyDidLayoutSubviewsIfReady;
- (id)_parentCellForItem:(id)arg1;
- (void)_updateContentOffsetForTucking;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_willBeginAnimatedInvalidation;
- (void)beginOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1 toValue:(double)arg2;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)containerCollectionView;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGPoint { double x1; double x2; })contentOffsetForVerticalScrollingContainerItem:(id)arg1;
- (long long)contentOffsetProxyingPolicyForVerticalScrollingContainerItemContext:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)isOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (bool)isPerformingLayout;
- (long long)keyboardDismissMode;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardDismissMode:(long long)arg1;
- (void)setShouldTuckTopVerticalScrollingContainerItem:(bool)arg1;
- (void)setVerticalScrollingContainerItems:(id)arg1;
- (bool)shouldTuckTopVerticalScrollingContainerItem;
- (void)verticalScrollingContainerCollectionViewCell:(id)arg1 didUpdateBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPreviousBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)verticalScrollingContainerCollectionViewContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)verticalScrollingContainerItemContextRequestsContentSizeUpdate:(id)arg1;
- (id)verticalScrollingContainerItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end