/* made by EzioChiu.
 */

@protocol PLSyncableAsset <NSObject, PLSyncableObject>

@required

- (NSString *)cloudIdentifier;
- (NSDate *)dateForComparingAdjustmentVersions;
- (NSSet *)detectedFaces;
- (id)faceAdjustmentVersion;
- (bool)faceDetectionComplete;
- (bool)hasAdjustmentsOrLegacyAdjustments;
- (long long)height;
- (void)markForNeedingFaceDetection;
- (void)setDetectedFaces:(NSSet *)arg1;
- (NSString *)syncDescription;
- (NSString *)syncedAdjustmentFingerprint;
- (long long)width;

@end
