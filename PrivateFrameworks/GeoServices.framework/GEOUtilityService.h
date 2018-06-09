/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy> {
    <GEOUtilityServiceProxy> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedService;
+ (void)useProxy:(Class)arg1;

- (void).cxx_destruct;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(id /* block */)arg2;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (id)init;

@end
