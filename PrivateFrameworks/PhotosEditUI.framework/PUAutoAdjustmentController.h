/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAutoAdjustmentController : NSObject {
    bool  _busy;
    NSArray * _cachedRedEyeCorrections;
    double  _cachedSmartColorLevel;
    double  _cachedSmartToneLevel;
    bool  _cachedValuesAreValid;
    NSDictionary * _cachedWhiteBalanceSettings;
    PLPhotoEditModel * _stashedPreviousManualModel;
}

@property (getter=isBusy, setter=_setBusy:, nonatomic) bool busy;

- (void).cxx_destruct;
- (void)_applyAutoValuesOnModel:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(double)arg4 smartColorLevel:(double)arg5 valuesCalculator:(id)arg6 animated:(bool)arg7;
- (void)_removeLegacyAutoEnhanceFromModel:(id)arg1;
- (void)_revertAutoValuesOnModel:(id)arg1;
- (void)_setBusy:(bool)arg1;
- (void)disableAutoEnhanceOnModel:(id)arg1;
- (void)enableAutoEnhanceOnModel:(id)arg1 valuesCalculator:(id)arg2 allowRedEye:(bool)arg3 animated:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)invalidateCachedAdjustments;
- (bool)isAutoEnhanceEnabledForModel:(id)arg1;
- (bool)isBusy;

@end
