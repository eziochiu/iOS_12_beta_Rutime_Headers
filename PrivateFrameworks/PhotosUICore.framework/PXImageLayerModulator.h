/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageLayerModulator : NSObject <ISBasePlayerUIViewChangeObserver, PXMutableImageLayerModulator_Private> {
    long long  _contentType;
    bool  _displayingVideoComplement;
    bool  _enabled;
    CAFilter * _filter;
    long long  _filterType;
    CALayer * _filteredLayer;
    float  _hdrGain;
    double  _intensity;
    double  _intensityAnimationDuration;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    CALayer * _layer;
    NSString * _layerFilterIntensityKeyPath;
    ISLivePhotoUIView * _livePhotoView;
    struct { 
        bool filteredLayer; 
        bool displayingVideoComplement; 
        bool filterIntensity; 
    }  _needsUpdateFlags;
}

@property (nonatomic, readonly) long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingVideoComplement, nonatomic, readonly) bool displayingVideoComplement;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) CAFilter *filter;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, retain) CALayer *filteredLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) double intensity;
@property (nonatomic) double intensityAnimationDuration;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) NSString *layerFilterIntensityKeyPath;
@property (nonatomic, readonly) ISLivePhotoUIView *livePhotoView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFilterToLayer:(id)arg1;
- (void)_invalidateDisplayingVideoComplement;
- (void)_invalidateFilterIntensity;
- (void)_invalidateFilteredLayer;
- (bool)_needsUpdate;
- (void)_removeFilterFromLayer:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateDisplayingVideoComplementIfNeeded;
- (void)_updateFilterIntensityIfNeeded;
- (void)_updateFilteredLayerIfNeeded;
- (void)_updateIfNeeded;
- (void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3;
- (long long)contentType;
- (id)filter;
- (long long)filterType;
- (id)filteredLayer;
- (float)hdrGain;
- (id)init;
- (id)initWithContentType:(long long)arg1 filterType:(long long)arg2 hdrGain:(float)arg3;
- (double)intensity;
- (double)intensityAnimationDuration;
- (bool)isDisplayingVideoComplement;
- (bool)isEnabled;
- (id)layer;
- (id)layerFilterIntensityKeyPath;
- (id)livePhotoView;
- (void)performChanges:(id /* block */)arg1;
- (void)performChanges_Private:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setDisplayingVideoComplement:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFilteredLayer:(id)arg1;
- (void)setIntensity:(double)arg1;
- (void)setIntensityAnimationDuration:(double)arg1;
- (void)setLayer:(id)arg1;
- (void)setLivePhotoView:(id)arg1;

@end
