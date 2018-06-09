/* made by EzioChiu.
 */

@protocol STTimeAllowancesViewModelCoordinator <NSObject>

@required

- (void)deleteAllowance:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAllowance *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveAllowance:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAllowance *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveAlwaysAllowList:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAlwaysAllowList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveDeviceBedtime:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STDeviceBedtime *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STTimeAllowancesViewModel *)viewModel;

@end
