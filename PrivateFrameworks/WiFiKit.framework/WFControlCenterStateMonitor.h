/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (bool)_airplaneModeEnabled;
- (void)_performAction:(long long)arg1;
- (void)_promptCarPlayDisable;
- (void)_promptMISDisable;
- (void)performAction;
- (void)performAction:(id /* block */)arg1;

@end
