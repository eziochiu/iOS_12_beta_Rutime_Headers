/* made by EzioChiu.
 */

@protocol HDQueryControlServerInterface <NSObject>

@required

- (void)remote_createQueryServerForIdentifier:(void *)arg1 queryUUID:(void *)arg2 configuration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSUUID *, HKQueryServerConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*

@end
