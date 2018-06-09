/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLTopLevelViewModel : NSObject <FLViewModel> {
    NSString * _bundleIdentifier;
    FLFollowUpController * _controller;
    FLItemChangeObserver * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_prefixFromBundleIdentifier:(id)arg1;
+ (id)redirectURLForItem:(id)arg1 withAction:(id)arg2;

- (void).cxx_destruct;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(id /* block */)arg2;
- (id)allPendingItems;
- (bool)allPendingItemsContains:(id)arg1;
- (id)extensionToItemMapFromItems:(id)arg1;
- (id)groups;
- (id)initWithBundleIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 controller:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)mapItemsToGroups:(id)arg1;
- (void)refreshItems:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setItemChangeHandler:(id /* block */)arg1;

@end
