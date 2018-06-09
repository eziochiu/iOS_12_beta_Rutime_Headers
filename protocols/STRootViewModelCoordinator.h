/* made by EzioChiu.
 */

@protocol STRootViewModelCoordinator <NSObject>

@required

- (void)clearUsageDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<STContentPrivacyViewModelCoordinator> *)contentPrivacyCoordinator;
- (id)coordinatorForChild:(STUser *)arg1;
- (bool)hasShownMiniBuddy;
- (bool)isPasscodeEnabled;
- (void)setHasShownMiniBuddy:(bool)arg1;
- (void)setPIN:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPIN:(void *)arg1 screenTimeEnabled:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setScreenTimeEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<STTimeAllowancesViewModelCoordinator> *)timeAllowancesCoordinator;
- (NSObject<STUsageDetailsViewModelCoordinator> *)usageDetailsCoordinator;
- (bool)validatePIN:(NSString *)arg1;
- (STRootViewModel *)viewModel;

@end
