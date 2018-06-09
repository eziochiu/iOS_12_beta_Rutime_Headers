/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGenericShieldGenerator : NSObject <GEOResourceManifestTileGroupObserver> {
    VKPGenericShieldStyleInfo * _defaultStyle;
    NSCache * _defaultStylePacks;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKResourceManager * _resourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2;
- (id)newArtworkWithScale:(double)arg1 style:(id)arg2 size:(long long)arg3 numberOfLines:(unsigned long long)arg4;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end
