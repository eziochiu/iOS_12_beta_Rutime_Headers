/* made by EzioChiu.
 */

@protocol _SFDialogViewPresenting <NSObject>

@required

- (void)dismissDialogView:(void *)arg1 withAdditionalAnimations:(void *)arg2 forDialogController:(void *)arg3; // needs 3 arg types, found 7: _SFDialogView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, _SFDialogController *
- (void)presentDialogView:(void *)arg1 withAdditionalAnimations:(void *)arg2 forDialogController:(void *)arg3; // needs 3 arg types, found 7: _SFDialogView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, _SFDialogController *
- (int)webProcessIDForDialogController:(_SFDialogController *)arg1;

@end
