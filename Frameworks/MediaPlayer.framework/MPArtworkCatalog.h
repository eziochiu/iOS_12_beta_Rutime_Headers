/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkCatalog : NSObject {
    NSString * _cacheIdentifier;
    id /* block */  _configurationBlock;
    <MPArtworkDataSource> * _dataSource;
    id  _destination;
    double  _destinationScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _fittingSize;
    bool  _loadingRepresentation;
    long long  _modelRevisionID;
    unsigned long long  _renderHint;
    id  _requestingContext;
    id  _token;
}

@property (nonatomic, readonly) long long MP_artworkType;
@property (nonatomic, readonly) NSCache *cache;
@property (nonatomic, copy) NSString *cacheIdentifier;
@property (nonatomic, copy) id /* block */ configurationBlock;
@property (nonatomic) <MPArtworkDataSource> *dataSource;
@property (nonatomic) id destination;
@property (nonatomic) double destinationScale;
@property (nonatomic) struct CGSize { double x1; double x2; } fittingSize;
@property (nonatomic, readonly) bool hasImageOnDisk;
@property (getter=isLoadingRepresentation) bool loadingRepresentation;
@property (nonatomic) unsigned long long renderHint;
@property (nonatomic) id requestingContext;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scaledFittingSize;
@property (nonatomic, retain) id token;
@property (nonatomic, readonly) <MPArtworkDataSourceVisualIdenticality> *visualIdenticalityIdentifier;

+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;
+ (id)_artworkLoadQueue;
+ (void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCachePurgesWhenEnteringBackground:(bool)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (id)staticArtworkCatalogWithImage:(id)arg1;

- (void).cxx_destruct;
- (long long)MP_artworkType;
- (void)_loadBestRepresentationIfNeeded;
- (void)_updateRepresentation;
- (void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(bool)arg2 modelRevisionID:(long long)arg3;
- (id)bestImageFromDisk;
- (id)cache;
- (id)cacheIdentifier;
- (id /* block */)configurationBlock;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)destination;
- (double)destinationScale;
- (id)existingColorAnalysisWithAlgorithm:(long long)arg1;
- (struct CGSize { double x1; double x2; })fittingSize;
- (bool)hasImageOnDisk;
- (unsigned long long)hash;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;
- (bool)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLoadingRepresentation;
- (unsigned long long)renderHint;
- (void)requestColorAnalysisWithAlgorithm:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestExportableArtworkPropertiesWithCompletion:(id /* block */)arg1;
- (void)requestExportableArtworkURLWithCompletion:(id /* block */)arg1;
- (void)requestFocusRegionsWithCompletionHandler:(id /* block */)arg1;
- (void)requestImageWithCompletionHandler:(id /* block */)arg1;
- (void)requestRadiosityImageWithCompletionHandler:(id /* block */)arg1;
- (id)requestingContext;
- (struct CGSize { double x1; double x2; })scaledFittingSize;
- (void)setCacheIdentifier:(id)arg1;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (void)setConfigurationBlock:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestination:(id)arg1 configurationBlock:(id /* block */)arg2;
- (void)setDestination:(id)arg1 progressiveConfigurationBlock:(id /* block */)arg2;
- (void)setDestinationScale:(double)arg1;
- (void)setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLoadingRepresentation:(bool)arg1;
- (void)setRenderHint:(unsigned long long)arg1;
- (void)setRequestingContext:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (id)visualIdenticalityIdentifier;

@end
