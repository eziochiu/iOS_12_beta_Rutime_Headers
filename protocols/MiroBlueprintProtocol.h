/* made by EzioChiu.
 */

@protocol MiroBlueprintProtocol <NSObject>

@required

- (double)burstIdealDuration;
- (double)burstMinDuration;
- (bool)durationIsNearVideoIdeal:(double)arg1;
- (<MiroBlueprintEditStyleProtocol> *)editStyle;
- (double)halfBarDuration;
- (double)idealDurationForAsset:(PHAsset *)arg1;
- (double)irisIdealDuration;
- (double)irisMaxDuration;
- (double)irisMinDuration;
- (double)maximumDurationForAsset:(PHAsset *)arg1;
- (double)minimumDurationForAsset:(PHAsset *)arg1;
- (<MiroBlueprintMusicInfoProtocol> *)musicInfo;
- (double)panoIdealDurationWithMultiplier:(double)arg1;
- (double)panoMaxDurationWithMultiplier:(double)arg1;
- (double)panoMinDurationWithMultiplier:(double)arg1;
- (double)photoIdealDuration;
- (double)photoMaxDuration;
- (double)photoMinDuration;
- (double)sloMoIdealDuration;
- (double)sloMoMinDuration;
- (double)timelapseIdealDuration;
- (double)timelapseMinDuration;
- (double)titleIdealDuration;
- (double)titleMinDuration;
- (<MiroBlueprintTitleStyleProtocol> *)titleStyle;
- (unsigned long long)toneTreatment;
- (double)videoIdealDuration;
- (double)videoMaxDuration;
- (double)videoMinDuration;

@end
