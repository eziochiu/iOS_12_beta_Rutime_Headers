/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageModulationSettings : PXSettings {
    double  _EDRHeadroomRequestHDRThreshold;
    long long  _EDRHeadroomRequestScheme;
    double  _EDRHeadroomRequestSustainDuration;
    long long  _HDRConsideration;
    double  _HDRModulationIntensity;
    double  _SDRModulationIntensity;
    bool  _enabled;
    long long  _filterType;
    double  _highEDRRequestedHeadroomStops;
    double  _lowEDRRequestedHeadroomStops;
    double  _manualEDRHeadroomRequestStops;
    double  _videoComplementModulationIntensity;
}

@property (nonatomic) double EDRHeadroomRequestHDRThreshold;
@property (nonatomic) long long EDRHeadroomRequestScheme;
@property (nonatomic) double EDRHeadroomRequestSustainDuration;
@property (nonatomic) long long HDRConsideration;
@property (nonatomic) double HDRModulationIntensity;
@property (nonatomic) double SDRModulationIntensity;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long filterType;
@property (nonatomic) double highEDRRequestedHeadroomStops;
@property (nonatomic) double lowEDRRequestedHeadroomStops;
@property (nonatomic) double manualEDRHeadroomRequestStops;
@property (nonatomic) double videoComplementModulationIntensity;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)EDRHeadroomRequestHDRThreshold;
- (long long)EDRHeadroomRequestScheme;
- (double)EDRHeadroomRequestSustainDuration;
- (long long)HDRConsideration;
- (double)HDRModulationIntensity;
- (double)SDRModulationIntensity;
- (long long)filterType;
- (double)highEDRRequestedHeadroomStops;
- (bool)isEnabled;
- (double)lowEDRRequestedHeadroomStops;
- (double)manualEDRHeadroomRequestStops;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setEDRHeadroomRequestHDRThreshold:(double)arg1;
- (void)setEDRHeadroomRequestScheme:(long long)arg1;
- (void)setEDRHeadroomRequestSustainDuration:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setHDRConsideration:(long long)arg1;
- (void)setHDRModulationIntensity:(double)arg1;
- (void)setHighEDRRequestedHeadroomStops:(double)arg1;
- (void)setLowEDRRequestedHeadroomStops:(double)arg1;
- (void)setManualEDRHeadroomRequestStops:(double)arg1;
- (void)setSDRModulationIntensity:(double)arg1;
- (void)setVideoComplementModulationIntensity:(double)arg1;
- (double)videoComplementModulationIntensity;

@end
