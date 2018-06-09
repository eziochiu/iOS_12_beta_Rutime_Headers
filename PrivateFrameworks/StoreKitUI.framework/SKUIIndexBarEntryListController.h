/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarEntryListController : NSObject {
    <SKUIIndexBarEntryListControllerDelegate> * _delegate;
    bool  _hidesIndexBar;
    bool  _needsRootTargetViewElement;
    long long  _numberOfEntryDescriptors;
    NSString * _rootTargetIndexBarEntryID;
    SKUIViewElement * _rootTargetViewElement;
}

@property (nonatomic) <SKUIIndexBarEntryListControllerDelegate> *delegate;
@property (nonatomic, readonly) bool hidesIndexBar;
@property (nonatomic, readonly) bool needsRootTargetViewElement;
@property (nonatomic, readonly) long long numberOfEntryDescriptors;
@property (nonatomic, readonly) NSString *rootTargetIndexBarEntryID;
@property (nonatomic, retain) SKUIViewElement *rootTargetViewElement;

+ (id)entryListControllerForEntryListViewElement:(id)arg1;
+ (id)entryListControllerForEntryViewElement:(id)arg1;

- (void).cxx_destruct;
- (void)_didInvalidate;
- (id)delegate;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (bool)hidesIndexBar;
- (bool)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)rootTargetIndexBarEntryID;
- (id)rootTargetViewElement;
- (void)setDelegate:(id)arg1;
- (void)setRootTargetViewElement:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2;

@end
