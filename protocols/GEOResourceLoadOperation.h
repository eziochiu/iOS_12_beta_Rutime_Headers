/* made by EzioChiu.
 */

@protocol GEOResourceLoadOperation <NSObject, NSProgressReporting>

@required

- (void)cancel;
- (NSData *)data;
- (id)initWithResource:(GEOResourceInfo *)arg1 existingPartialData:(NSData *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 baseURLString:(NSString *)arg4;
- (bool)requiresWiFi;
- (void)setRequiresWiFi:(bool)arg1;
- (void)startWithCompletionHandler:(void *)arg1 callbackQueue:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*, NSObject<OS_dispatch_queue> *

@end
