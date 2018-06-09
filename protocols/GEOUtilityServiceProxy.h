/* made by EzioChiu.
 */

@protocol GEOUtilityServiceProxy <NSObject>

@required

- (void)getCurrentGeoServicesState:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOServicesState *, NSError *, void*
- (NSString *)getGeoServicesCacheDirectoryPath;
- (NSString *)getHomeDirectoryPath;

@end
