/* made by EzioChiu.
 */

@protocol CPMapClientTemplateDelegate <CPTemplateDelegate>

@required

- (void)clientNavigationAlertDidAppear:(CPNavigationAlert *)arg1;
- (void)clientNavigationAlertDidDisappear:(CPNavigationAlert *)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillAppear:(CPNavigationAlert *)arg1;
- (void)clientNavigationAlertWillDisappear:(CPNavigationAlert *)arg1 context:(unsigned long long)arg2;
- (void)clientPanBeganWithDirection:(unsigned long long)arg1;
- (void)clientPanEndedWithDirection:(unsigned long long)arg1;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanWithDirection:(unsigned long long)arg1;
- (void)clientTripCanceledByExternalNavigation;
- (void)previewTripIdentifier:(NSUUID *)arg1 usingRouteIdentifier:(NSUUID *)arg2;
- (void)startTripIdentifier:(NSUUID *)arg1 usingRouteIdentifier:(NSUUID *)arg2;

@end
