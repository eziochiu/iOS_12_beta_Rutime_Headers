/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentListController : UIViewController <UIViewControllerRestoration, _UIDocumentPickerServiceViewController> {
    long long  _availableActionsIfNotDeferred;
    _UIDocumentPickerContainerViewController * _containerViewController;
    <_UIDocumentListControllerDelegate> * _delegateIfNotDeferred;
    long long  _displayModeIfNotDeferred;
    bool  _editing;
    bool  _hideSearchField;
    _UIDocumentListController * _rootListController;
    _UIDocumentSearchListController * _searchController;
    int  _sortOrderIfNotDeferred;
    struct CGPoint { 
        double x; 
        double y; 
    }  _stateRestoredContentOffset;
}

@property (nonatomic) long long availableActions;
@property (nonatomic, readonly) NSArray *containedItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDocumentListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSearchField;
@property (nonatomic, readonly) NSURL *presentedURL;
@property (nonatomic) _UIDocumentListController *rootListController;
@property (nonatomic, retain) NSArray *selectedItems;
@property (readonly) Class superclass;

+ (id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(id /* block */)arg2;
+ (id)listControllerHierarchyForURL:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (Class)_classForChildren;
- (void)_commonInitWithModel:(id)arg1;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 listMode:(long long)arg4;
- (void)_setContainerViewController:(id)arg1;
- (void)_updateScrollPositionForStateRestoration;
- (long long)availableActions;
- (id)containedItems;
- (void)createSearchControllerWithModel:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)description;
- (void)didHighlightItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)didUnhighlightItem:(id)arg1;
- (long long)displayMode;
- (bool)editing;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)hideSearchField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)itemsOrSelectionDidChange:(bool)arg1;
- (id)model;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(id /* block */)arg4;
- (id)presentedURL;
- (id)previewViewControllerForItem:(id)arg1;
- (id)rootListController;
- (id)selectedItems;
- (void)setAvailableActions:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHideSearchField:(bool)arg1;
- (void)setRootListController:(id)arg1;
- (void)setSelectedItems:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (bool)shouldSelectItem:(id)arg1;
- (bool)shouldShowAction:(long long)arg1;
- (int)sortOrder;
- (void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(bool)arg2;
- (void)updateTitle;

@end
