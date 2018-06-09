/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUtilityServiceRemoteProxy : NSObject <GEOUtilityServiceProxy> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getPathSynchronous:(const char *)arg1;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(id /* block */)arg2;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (id)init;

@end
