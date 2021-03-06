/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHideActivity : PUActivity {
    PUAssetHidingHelper * _assetHidingHelper;
}

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (id)_activityImageName;
- (id)_assetHidingHelper;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)setItemSourceController:(id)arg1;

@end
