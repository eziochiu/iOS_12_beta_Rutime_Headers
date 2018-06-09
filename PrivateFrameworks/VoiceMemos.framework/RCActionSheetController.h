/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCActionSheetController : NSObject <UIActionSheetDelegate> {
    UIViewController * _accessoryViewController;
    NSArray * _actionButtonTitles;
    id /* block */  _actionHandlerBlock;
    RCActionSheetAlertController * _alertController;
    NSString * _alertMessage;
    NSString * _alertTitle;
    bool  _autoDismissDisabled;
    NSString * _cancelButtonTitle;
    bool  _dismissWhenDismissIsEnabled;
    bool  _enabled;
    UIViewController * _modalItemPresentationViewController;
    UIResponder * _originalFirstResponder;
    bool  _showing;
}

@property (nonatomic, readonly) UIViewController *accessoryViewController;
@property (nonatomic, readonly, copy) id /* block */ actionHandlerBlock;
@property (nonatomic) bool autoDismissDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeActionHandlerWithActionIndex:(long long)arg1;
- (void)_willDismiss;
- (id)accessoryViewController;
- (id /* block */)actionHandlerBlock;
- (bool)autoDismissDisabled;
- (void)cancel;
- (void)dealloc;
- (void)dismissWithActionIndex:(long long)arg1;
- (void)dismissWithActionIndex:(long long)arg1 invokeActionHandler:(bool)arg2;
- (bool)enabled;
- (id)initWithTitle:(id)arg1 cancelTitle:(id)arg2 actionTitles:(id)arg3 accessoryViewController:(id)arg4;
- (void)setAutoDismissDisabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)showInView:(id)arg1 actionHandlerBlock:(id /* block */)arg2;
- (void)showInViewController:(id)arg1 source:(id)arg2 actionHandlerBlock:(id /* block */)arg3;

@end
