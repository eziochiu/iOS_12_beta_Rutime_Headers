/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIAudioRoutePickerController : NSObject {
    NSString * _audioCategory;
    NSString * _audioMode;
    bool  _bluetoothIsPicked;
    <SiriUIAudioRoutePickerControllerDelegate> * _delegate;
    bool  _hasRoutesToPick;
    SiriRoutePickerAlertController * _pickerAlertController;
    UIWindow * _window;
}

@property (nonatomic) <SiriUIAudioRoutePickerControllerDelegate> *delegate;
@property (nonatomic, retain) SiriRoutePickerAlertController *pickerAlertController;

+ (id)_nameForRouteInfo:(id)arg1 isSelected:(bool*)arg2 isBluetooth:(bool*)arg3 isOverride:(bool*)arg4 audioRouteName:(id*)arg5;

- (void).cxx_destruct;
- (void)_dismissAlertController:(bool)arg1;
- (void)_fetchPickableRoutesWithCompletion:(id /* block */)arg1;
- (void)_pickableRoutesChanged:(id)arg1;
- (void)_removeWindow;
- (void)_routeChanged:(id)arg1;
- (void)_selectRouteWithInfo:(id)arg1;
- (void)_showAlertControllerFromViewController:(id)arg1 animated:(bool)arg2;
- (bool)bluetoothIsPicked;
- (void)cancelPickerAnimated:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)hasRoutesToPick;
- (id)initWithCategory:(id)arg1 mode:(id)arg2 delegate:(id)arg3;
- (bool)isShowingPicker;
- (id)pickerAlertController;
- (void)refreshRoutes;
- (void)setDelegate:(id)arg1;
- (void)setPickerAlertController:(id)arg1;
- (void)showPickerFromViewController:(id)arg1 animated:(bool)arg2;

@end
