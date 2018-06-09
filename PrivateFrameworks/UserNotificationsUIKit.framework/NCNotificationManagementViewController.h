/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationManagementViewController : UIViewController <NCNotificationManagementController, NCNotificationManagementControllerSettingsDelegate> {
    bool  _isDeliveredQuietly;
    NCNotificationManagementView * _platterView;
    NCNotificationRequest * _request;
    <NCNotificationManagementControllerSettingsDelegate> * _settingsDelegate;
    NSURL * _settingsURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationRequest *request;
@property (nonatomic) <NCNotificationManagementControllerSettingsDelegate> *settingsDelegate;
@property (nonatomic, retain) NSURL *settingsURL;
@property (readonly) Class superclass;

+ (id)notificationManagementAlertControllerForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;

- (void).cxx_destruct;
- (void)_deliveryButtonTapped:(id)arg1;
- (id)_newManagementView;
- (void)_offButtonTapped:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)loadView;
- (id)notificationManagementController:(id)arg1 sectionSettingsForSectionId:(id)arg2;
- (void)notificationManagementController:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 subSectionIdentifier:(id)arg5;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setSettingsDelegate:(id)arg1;
- (void)setSettingsURL:(id)arg1;
- (id)settingsDelegate;
- (id)settingsURL;
- (void)viewDidLoad;

@end
