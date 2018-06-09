/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarControl : UIControl {
    SKUIIndexBarEntry * _combinedEntry;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    <SKUIIndexBarControlDataSource> * _dataSource;
    struct { 
        unsigned int dataSourceRespondsToCombinedEntry : 1; 
        unsigned int dataSourceRespondsToNumberOfSections : 1; 
        unsigned int delegateRespondsToDidSelectEntryAtIndexPath : 1; 
        unsigned int delegateRespondsToDidSelectBeyondBottom : 1; 
        unsigned int delegateRespondsToDidSelectBeyondTop : 1; 
    }  _dataSourceDelegateFlags;
    NSDictionary * _defaultTextAttributes;
    <SKUIIndexBarControlDelegate> * _delegate;
    bool  _didSendPastBottom;
    bool  _didSendPastTop;
    NSArray * _displayEntries;
    bool  _hasValidCombinedEntry;
    bool  _hasValidDisplayEntries;
    bool  _hasValidNumberOfSections;
    bool  _hasValidTotalEntryCount;
    bool  _hasValidTotalSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeInsets;
    NSMapTable * _indexPathToEntryMapTable;
    NSIndexPath * _lastSelectedIndexPath;
    double  _lineSpacing;
    long long  _numberOfSections;
    NSMapTable * _sectionIndexToNumberOfEntriesMapTable;
    long long  _totalEntryCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _totalSize;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) <SKUIIndexBarControlDataSource> *dataSource;
@property (nonatomic, copy) NSDictionary *defaultTextAttributes;
@property (nonatomic) <SKUIIndexBarControlDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeInsets;
@property (nonatomic, readonly) long long numberOfSections;

- (void).cxx_destruct;
- (id)_allEntries;
- (id)_allRequiredEntries;
- (id)_combinedEntry;
- (void)_configureNewEntry:(id)arg1;
- (id)_displayEntries;
- (id)_displayEntriesThatFitInViewForGroupedEntries;
- (id)_entryAtIndexPath:(id)arg1;
- (void)_enumerateEntryIndexPathsUsingBlock:(id /* block */)arg1;
- (void)_invalidateDisplayEntries;
- (void)_invalidateForChangedLayoutProperties;
- (long long)_numberOfEntriesInSection:(long long)arg1;
- (long long)_numberOfSections;
- (bool)_reloadLineSpacing;
- (void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })_sizeForEntries:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeForEntryAtIndexPath:(id)arg1;
- (long long)_totalEntryCount;
- (struct CGSize { double x1; double x2; })_totalSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)dataSource;
- (id)defaultTextAttributes;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfEntriesInSection:(long long)arg1;
- (long long)numberOfSections;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)reloadCombinedEntry;
- (void)reloadData;
- (void)reloadEntryAtIndexPath:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDefaultTextAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
