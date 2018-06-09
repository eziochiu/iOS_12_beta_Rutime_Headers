/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController {
    HUQuickControlCollectionViewController * _collectionViewController;
}

@property (nonatomic, readonly) HUQuickControlCollectionViewController *collectionViewController;
@property (nonatomic, readonly) HFChildServiceControlItem *controlItem;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_subclass_configureQuickControlViewController:(id)arg1;
- (id)childQuickControlContentViewControllers;
- (id)collectionViewController;
- (id)controlItem;
- (id)hu_preloadContent;
- (id)initWithChildServiceControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)viewDidLoad;

@end
