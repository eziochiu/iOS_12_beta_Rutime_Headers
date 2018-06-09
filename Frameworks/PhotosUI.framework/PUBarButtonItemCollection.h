/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBarButtonItemCollection : NSObject {
    NSMutableDictionary * __barButtonItems;
    NSCache * __configurationsCache;
    UIBarButtonItem * __flexibleSpaceBarButtonItem;
    unsigned long long  __options;
    UIBarButtonItem * __placeholderBarButtonItem;
    NSIndexSet * __previousRequestedSet;
    NSArray * __previousResult;
    NSIndexSet * _centeredItemIdentifiers;
    <PUBarButtonItemCollectionDataSource> * _dataSource;
    NSArray * _identifiersOrder;
}

@property (nonatomic, readonly) NSMutableDictionary *_barButtonItems;
@property (nonatomic, readonly) NSCache *_configurationsCache;
@property (nonatomic, readonly) UIBarButtonItem *_flexibleSpaceBarButtonItem;
@property (nonatomic, readonly) unsigned long long _options;
@property (nonatomic, readonly) UIBarButtonItem *_placeholderBarButtonItem;
@property (setter=_setPreviousRequestedSet:, nonatomic, copy) NSIndexSet *_previousRequestedSet;
@property (setter=_setPreviousResult:, nonatomic, retain) NSArray *_previousResult;
@property (nonatomic, readonly) NSDictionary *barButtonItems;
@property (nonatomic, retain) NSIndexSet *centeredItemIdentifiers;
@property (nonatomic) <PUBarButtonItemCollectionDataSource> *dataSource;
@property (nonatomic, retain) NSArray *identifiersOrder;

- (void).cxx_destruct;
- (id)_arrangedBarButtonItems:(id)arg1 identifiers:(id)arg2;
- (id)_barButtonItems;
- (void)_centersButtonsIfNeeded:(id)arg1 identifiers:(id)arg2;
- (id)_configurationsCache;
- (id)_flexibleSpaceBarButtonItem;
- (id)_newEntryForIdentifiers:(id)arg1;
- (unsigned long long)_options;
- (id)_placeholderBarButtonItem;
- (id)_previousRequestedSet;
- (id)_previousResult;
- (void)_resetSet;
- (void)_setPreviousRequestedSet:(id)arg1;
- (void)_setPreviousResult:(id)arg1;
- (id)barButtonItemForIdentifier:(long long)arg1;
- (id)barButtonItems;
- (id)centeredItemIdentifiers;
- (id)dataSource;
- (long long)identifierForBarButtonItem:(id)arg1;
- (long long)identifierForCustomButton:(id)arg1;
- (id)identifiersOrder;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)orderedBarButtonsItemsForIdentifiers:(id)arg1;
- (void)setCenteredItemIdentifiers:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIdentifiersOrder:(id)arg1;

@end
