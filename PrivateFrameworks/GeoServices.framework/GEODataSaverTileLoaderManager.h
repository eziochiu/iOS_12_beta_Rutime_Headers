/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSaverTileLoaderManager : NSObject <GEODataSaverTileLoaderProxy> {
    <GEODataSaverTileLoaderProxy> * _proxy;
}

@property (getter=isDataSaverEnabled, nonatomic, readonly) bool dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (void).cxx_destruct;
- (void)getMapRegionWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (bool)isDataSaverEnabled;
- (void)submitMapRegion:(id)arg1 completion:(id /* block */)arg2;

@end
