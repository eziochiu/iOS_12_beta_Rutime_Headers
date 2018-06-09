/* made by EzioChiu.
 */

@protocol BKSProcessClientDelegate <NSObject>

@required

- (void)client:(BKSProcessClient *)arg1 processDidChangeDebuggingState:(bool)arg2;
- (void)client:(BKSProcessClient *)arg1 processDidChangeTaskState:(long long)arg2;
- (void)client:(void *)arg1 processDidExitWithContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: BKSProcessClient *, BKSProcessExitContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)processAssertionExpirationImminentForClient:(BKSProcessClient *)arg1;

@end
