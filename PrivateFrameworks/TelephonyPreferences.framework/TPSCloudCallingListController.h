/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSCloudCallingListController : TPSListController <TPSCloudCallingURLControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1;
- (void)presentOrUpdateViewController:(id)arg1;
- (void)presentPrivacySplashController;
- (void)privacySplashControllerDidRequestDismissal:(id)arg1;

@end
