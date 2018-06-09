/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManager : NSObject {
    GEOResourceManifestConfiguration * _configuration;
}

+ (id)sharedManager;
+ (id)sharedManagerForConfiguration:(id)arg1;
+ (id)sharedManagerForTileGroupIdentifier:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id /* block */)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id /* block */)arg3;

@end
