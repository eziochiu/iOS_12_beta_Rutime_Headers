/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKGroupsController : NSObject <PKPassLibraryDelegate> {
    bool  _activePassesOnly;
    PKCatalog * _catalogBeforeReordering;
    <PKGroupsControllerDelegate> * _delegate;
    bool  _enqueueRemoteUpdates;
    NSMutableArray * _enqueuedUpdates;
    NSSet * _expressPassesInformation;
    int  _expressPassesInformationToken;
    NSArray * _filteredPassUniqueIDs;
    unsigned long long  _filters;
    NSMutableDictionary * _groupIDsByPassUniqueID;
    NSMutableArray * _groups;
    NSMutableDictionary * _groupsByGroupID;
    NSMutableDictionary * _indicesByGroupID;
    bool  _limitedMode;
    NSArray * _localPasses;
    PKPassLibrary * _passLibrary;
    unsigned long long  _passTypeMask;
    NSMutableDictionary * _passesByUniqueID;
    PKPaymentService * _paymentService;
    bool  _reorderingEnabled;
    bool  _shouldSeparatePaymentPasses;
    bool  _suppressRemoteUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKGroupsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filteredPassUniqueIDs;
@property (nonatomic, readonly) bool filteringEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool reorderingEnabled;
@property (nonatomic) bool shouldSeparatePaymentPasses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyRemoteCatalog;
- (unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3;
- (id)_displayablePassesDictionaryFromSet:(id)arg1;
- (void)_fixIndex:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2;
- (void)_getPassesAndCatalogSynchronously:(bool)arg1 withHandler:(id /* block */)arg2;
- (bool)_groupIDIsNew:(id)arg1;
- (id)_groupsExcludingTypePayment;
- (unsigned long long)_indexOfGroupID:(id)arg1;
- (void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2;
- (void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(bool)arg4;
- (void)_performEnqueuedUpdates;
- (void)_performOrEnqueueUpdate:(id /* block */)arg1;
- (void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_removeGroup:(id)arg1 notify:(bool)arg2;
- (id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(bool)arg3;
- (void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(bool)arg3;
- (void)addLocalPasses:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableRemoteUpdates;
- (id)filteredPassUniqueIDs;
- (bool)filteringEnabled;
- (id)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupCount;
- (unsigned long long)groupIndexForPassUniqueID:(id)arg1;
- (id)groups;
- (void)handleUserPassDelete:(id)arg1;
- (void)handleUserPassesDelete:(id)arg1;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initLimited;
- (id)initWithPassLibrary:(id)arg1;
- (id)initWithPassTypeMask:(unsigned long long)arg1 passFilters:(unsigned long long)arg2;
- (void)loadGroupsSynchronously;
- (void)loadGroupsWithCompletion:(id /* block */)arg1;
- (void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)objectSettingsDidChangeNotification:(id)arg1;
- (void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
- (id)passWithUniqueID:(id)arg1;
- (void)preloadGroupsAndFrontFaceImages;
- (void)reloadGroups;
- (void)reloadGroupsAndNotify:(bool)arg1 completion:(id /* block */)arg2;
- (void)reloadGroupsWithCompletion:(id /* block */)arg1;
- (bool)reorderingEnabled;
- (void)setDelegate:(id)arg1;
- (void)setReorderingEnabled:(bool)arg1;
- (void)setShouldSeparatePaymentPasses:(bool)arg1;
- (bool)shouldSeparatePaymentPasses;
- (void)suppressRemoteUpdates:(bool)arg1;

@end
