/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {
    GEOSearchAttributionManifest * _attributionManifest;
    NSLock * _attributionManifestLock;
    int  _attributionManifestUpdatedToken;
    NSObject<OS_dispatch_queue> * _attributionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributionManifest;
- (void)_loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;

@end
