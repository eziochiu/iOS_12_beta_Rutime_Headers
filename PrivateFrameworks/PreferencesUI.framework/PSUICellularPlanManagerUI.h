/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularPlanManagerUI : NSObject {
    bool  _promptingUserForConsent;
}

+ (void)_presentAirplaneModeOnAlertOnViewController:(id)arg1;
+ (void)_presentCellularRequiredModeAlertOnViewController:(id)arg1;
+ (void)_presentErrorTitle:(id)arg1 onViewController:(id)arg2 withActionTitle:(id)arg3 actionHandler:(id /* block */)arg4;
+ (void)_presentErrorTitled:(id)arg1 withMessage:(id)arg2 onViewController:(id)arg3;
+ (id)carrierName;
+ (id)carrierPhoneNumber;
+ (void)presentCellularError:(id)arg1 onViewController:(id)arg2;
+ (id)sharedInstance;

@end
