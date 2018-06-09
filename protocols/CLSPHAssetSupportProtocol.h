/* made by EzioChiu.
 */

@protocol CLSPHAssetSupportProtocol <CLSInvestigationItem>

@required

- (double)clsActivityScore;
- (double)clsAestheticScore;
- (long long)clsBlinkCount;
- (NSData *)clsDistanceIdentity;
- (double)clsExposureScore;
- (unsigned long long)clsPeopleCount;
- (long long)clsPlayCount;
- (NSSet *)clsSceneClassifications;
- (long long)clsShareCount;
- (double)clsSharpnessScore;
- (long long)clsSmileCount;
- (unsigned long long)clsVideoFaceCount;
- (double)clsVideoScore;
- (long long)clsViewCount;
- (double)duration;
- (unsigned long long)facesCount;
- (bool)hasAdjustments;
- (bool)isAudio;
- (bool)isBlurry;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isIncludedInCloudFeeds;
- (bool)isSubtype:(unsigned long long)arg1;
- (bool)isTrashed;
- (bool)isUtility;
- (bool)isVideo;
- (bool)representsBurst;

@end
