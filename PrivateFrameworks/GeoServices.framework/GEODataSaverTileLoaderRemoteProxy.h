/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSaverTileLoaderRemoteProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (getter=isDataSaverEnabled, nonatomic, readonly) bool dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)getMapRegionWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (bool)isDataSaverEnabled;
- (void)submitMapRegion:(id)arg1 completion:(id /* block */)arg2;

@end
