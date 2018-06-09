/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIUserDefaultsActivity : UIActivity {
    NSArray * _availableActivities;
    UIViewController * _presentableActivityViewController;
    _UIActivityUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSArray *availableActivities;
@property (nonatomic, retain) UIViewController *presentableActivityViewController;
@property (nonatomic, retain) _UIActivityUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)_activityImage;
- (void)_cleanup;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)availableActivities;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)presentableActivityViewController;
- (void)setAvailableActivities:(id)arg1;
- (void)setPresentableActivityViewController:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
