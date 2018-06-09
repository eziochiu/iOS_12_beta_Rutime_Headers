/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEStyleTransfer : PAEFilterDefaultBase {
    double  _currentAspectRatio;
    long long  _currentQualityLevel;
    EspressoImage2Image * _espresso;
    NSString * _modelName;
    struct HGRef<HStyleTransfer> { 
        struct HStyleTransfer {} *m_Obj; 
    }  _styleTransfer;
}

@property (nonatomic) double currentAspectRatio;
@property (nonatomic) long long currentQualityLevel;
@property (nonatomic, retain) EspressoImage2Image *espresso;

+ (bool)hasEspressoVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_modeNames;
- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (double)currentAspectRatio;
- (long long)currentQualityLevel;
- (void)dealloc;
- (id)espresso;
- (id)initWithAPIManager:(id)arg1;
- (bool)loadModel:(id)arg1;
- (id)modelNameAtIndex:(unsigned long long)arg1;
- (id)pathForSettings;
- (id)properties;
- (void)setCurrentAspectRatio:(double)arg1;
- (void)setCurrentQualityLevel:(long long)arg1;
- (void)setEspresso:(id)arg1;
- (bool)variesOverTime;

@end
