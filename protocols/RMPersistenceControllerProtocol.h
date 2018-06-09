/* made by EzioChiu.
 */

@protocol RMPersistenceControllerProtocol <NSObject>

@required

- (void)clearUsageDataForOrganization:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performBackgroundTask:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSManagedObjectContext *, void*
- (void)refreshUsageDataForOrganization:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
