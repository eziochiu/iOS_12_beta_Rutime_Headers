/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget> {
    NSExtensionItem * __injectedExtensionItem;
    _UIActivityBundleHelper * _activityBundleHelper;
    NSExtension * _applicationExtension;
    id  _extensionContextIdentifier;
    id /* block */  _extensionRequestCleanupCompletion;
    UIViewController * _extensionViewController;
    NSDate * _installationDate;
    id /* block */  _presenterCompletion;
    UIViewController * _presenterViewController;
}

@property (nonatomic, retain) NSExtensionItem *_injectedExtensionItem;
@property (nonatomic, retain) _UIActivityBundleHelper *activityBundleHelper;
@property (nonatomic, retain) NSExtension *applicationExtension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id extensionContextIdentifier;
@property (nonatomic, copy) id /* block */ extensionRequestCleanupCompletion;
@property (nonatomic, retain) UIViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *installationDate;
@property (nonatomic, copy) id /* block */ presenterCompletion;
@property (nonatomic) UIViewController *presenterViewController;
@property (readonly) Class superclass;

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_applicationExtensionActivitiesForItems:(id)arg1;
+ (long long)activityCategory;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (long long)_defaultSortGroup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_injectedExtensionItem;
- (void)_injectedJavaScriptResult:(id)arg1;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (bool)_isServiceExtension;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentExtensionViewControllerIfPossible;
- (id)activityBundleHelper;
- (id)activityTitle;
- (id)activityType;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)extensionContextIdentifier;
- (id /* block */)extensionRequestCleanupCompletion;
- (id)extensionViewController;
- (id)initWithApplicationExtension:(id)arg1;
- (id)installationDate;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id /* block */)presenterCompletion;
- (id)presenterViewController;
- (void)setActivityBundleHelper:(id)arg1;
- (void)setApplicationExtension:(id)arg1;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setExtensionRequestCleanupCompletion:(id /* block */)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setPresenterCompletion:(id /* block */)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)set_injectedExtensionItem:(id)arg1;

@end