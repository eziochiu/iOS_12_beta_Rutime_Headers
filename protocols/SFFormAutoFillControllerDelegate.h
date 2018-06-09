/* made by EzioChiu.
 */

@protocol SFFormAutoFillControllerDelegate <NSObject>

@required

- (bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;
- (bool)formAutoFillControllerShouldDisableAutoFill:(_SFFormAutoFillController *)arg1;
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;

@optional

- (void)formAutoFillControllerDidFocusSensitiveFormField:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(void *)arg1 onPageLoad:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: _SFFormAutoFillController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)formAutoFillControllerGetAuthenticationForAutoFillOnPageLoad:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _SFFormAutoFillController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (WBSOneTimeCodeMonitor *)formAutoFillControllerOneTimeCodeMonitor:(_SFFormAutoFillController *)arg1;
- (bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(_SFFormAutoFillController *)arg1;

@end
