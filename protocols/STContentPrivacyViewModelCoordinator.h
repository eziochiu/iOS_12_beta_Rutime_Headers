/* made by EzioChiu.
 */

@protocol STContentPrivacyViewModelCoordinator <NSObject>

@required

- (void)saveContentPrivacyEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveRestrictionValue:(void *)arg1 forItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: id, STRestrictionItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveValuesForRestrictions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STContentPrivacyViewModel *)viewModel;

@end
