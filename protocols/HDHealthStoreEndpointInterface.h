/* made by EzioChiu.
 */

@protocol HDHealthStoreEndpointInterface <NSObject>

@required

- (void)remote_serverForConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKServerConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HDHealthStoreServerInterface> *, NSError *, void*

@end
