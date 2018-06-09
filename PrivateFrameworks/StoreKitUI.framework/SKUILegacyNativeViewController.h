/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate> {
    NSURL * _activeURL;
    SKUICategoryController * _categoryController;
    NSURL * _defaultURL;
    NSData * _initialData;
    SSVLoadURLOperation * _initialOperation;
    SKUIStorePageViewController * _storePageViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_categoryController;
- (void)_finishLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_reloadNavigationItem;
- (id)_storePageViewController;
- (id)activeMetricsController;
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
