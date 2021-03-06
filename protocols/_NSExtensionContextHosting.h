/* made by EzioChiu.
 */

@protocol _NSExtensionContextHosting <NSObject>

@required

- (void)_cancelRequestWithError:(void *)arg1 forExtensionContextWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSError *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_completeRequestReturningItems:(void *)arg1 forExtensionContextWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_loadItemForPayload:(void *)arg1 contextIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 12: NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)_loadPreviewImageForPayload:(void *)arg1 contextIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 12: NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)_openURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
