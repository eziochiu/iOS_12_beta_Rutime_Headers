/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFLegacyNetworkSettingsViewController : WFNetworkSettingsViewController <WFAccessoryViewController>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_isIPv4ConfigAuto;
- (bool)_isIPv4ConfigManual;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (long long)_sectionTypeAtSection:(long long)arg1;
- (id)_sectionsFromConfig:(id)arg1;
- (id)_stringFromArray:(id)arg1;
- (void)_updateDNSAddresses:(id)arg1;
- (void)_updateDNSSearchDomains:(id)arg1;
- (void)_updateIPv4ConfigurationMethod:(long long)arg1;
- (void)_updateProxyAuthentication:(id)arg1;
- (void)_updateProxyConfigurationMethod:(long long)arg1;
- (void)_updateTableInsets;
- (id)arrayFromString:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
