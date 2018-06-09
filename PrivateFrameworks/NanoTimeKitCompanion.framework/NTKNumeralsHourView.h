/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsHourView : UIImageView {
    UIColor * _appliedColor;
    NTKNumeralsAnalogFaceConfiguration * _faceConfiguration;
    long long  _hour;
    bool  _isLoaded;
    unsigned long long  _style;
}

@property (readonly) bool isLoaded;

- (void).cxx_destruct;
- (void)_applyTintColor:(id)arg1;
- (id)_hourColorForDevice:(id)arg1 faceColor:(unsigned long long)arg2 colorSchemeUnits:(unsigned long long)arg3;
- (id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;
- (id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;
- (bool)isLoaded;
- (void)layoutSubviews;
- (void)load;

@end
