/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIFauxCardScannerSpecifier : PSSpecifier {
    PSUICellularPlanManagerUI * _cellularPlanManagerUI;
    PSListController * _hostController;
}

@property (nonatomic) PSListController *hostController;

- (void).cxx_destruct;
- (void)fauxCardScannerCellPressed:(id)arg1;
- (id)hostController;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(bool)arg2;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(bool)arg2 planManagerUI:(id)arg3;
- (void)setHostController:(id)arg1;

@end
