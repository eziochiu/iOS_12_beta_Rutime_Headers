/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISocialActivity : UIApplicationExtensionActivity <UIManagedConfigurationRestrictableActivity> {
    NSString * _builtinActivityType;
    SLComposeViewController * _socialComposeViewController;
    NSString * _sourceApplicationBundleID;
    bool  _sourceIsManaged;
}

@property (nonatomic, copy) NSString *builtinActivityType;
@property (nonatomic, retain) SLComposeViewController *socialComposeViewController;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (nonatomic) bool sourceIsManaged;

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_prepareComposeViewController:(id)arg1 withActivityExtensionItems:(id)arg2;
- (void)_prepareComposeViewController:(id)arg1 withInjectedExtensionItems:(id)arg2;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (bool)_wantsAttachmentURLItemData;
- (bool)_wantsThumbnailItemData;
- (id)activityType;
- (id)activityViewController;
- (id)builtinActivityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)debugDescription;
- (id)initWithActivityType:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)setBuiltinActivityType:(id)arg1;
- (void)setSocialComposeViewController:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (id)socialComposeViewController;
- (id)sourceApplicationBundleID;
- (bool)sourceIsManaged;

@end
