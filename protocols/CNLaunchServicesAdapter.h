/* made by EzioChiu.
 */

@protocol CNLaunchServicesAdapter

@required

- (void)applicationForBundleIdentifier:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNApplicationProxy *, NSError *, void*
- (void)applicationsAvailableForHandlingURLScheme:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)applicationsForUserActivityType:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)openSensitiveURLInBackground:(void *)arg1 withOptions:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openUserActivityData:(void *)arg1 inApplication:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSData *, CNApplicationProxy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
