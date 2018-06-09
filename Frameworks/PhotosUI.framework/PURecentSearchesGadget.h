/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURecentSearchesGadget : UITableViewController <PXGadget> {
    unsigned long long  _accessoryButtonType;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    NSOrderedSet * _recentSearches;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSOrderedSet *recentSearches;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_reloadData;
- (void)_updateTableViewLayoutMargins;
- (unsigned long long)accessoryButtonType;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct NSObject { Class x1; }*)contentViewController;
- (void)dealloc;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)init;
- (id)localizedTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)recentSearches;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setRecentSearches:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)viewDidLoad;

@end
