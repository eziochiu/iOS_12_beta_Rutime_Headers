/* made by EzioChiu.
 */

@protocol PLSyncableDetectedFace <NSObject, PFPhotosFaceRepresentation, PLSyncableObject>

@required

- (NSDate *)adjustmentVersion;
- (double)centerX;
- (double)centerY;
- (short)cloudLocalState;
- (int)cloudNameSource;
- (int)faceAlgorithmVersion;
- (bool)hidden;
- (bool)isTrainingFace;
- (bool)manual;
- (int)nameSource;
- (<PLSyncablePerson> *)person;
- (<PLSyncablePerson> *)personBeingKeyFace;
- (NSString *)pointerDescription;
- (NSSet *)rejectedPersons;
- (void)setAdjustmentVersion:(NSDate *)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setCloudLocalState:(short)arg1;
- (void)setCloudNameSource:(int)arg1;
- (void)setFaceAlgorithmVersion:(int)arg1;
- (void)setHidden:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSource:(int)arg1;
- (void)setPerson:(id <PLSyncablePerson>)arg1;
- (void)setPersonBeingKeyFace:(id <PLSyncablePerson>)arg1;
- (void)setRejectedPersons:(NSSet *)arg1;
- (void)setSize:(double)arg1;
- (void)setSourceHeight:(long long)arg1;
- (void)setSourceWidth:(long long)arg1;
- (void)setTrainingType:(int)arg1;
- (double)size;
- (long long)sourceHeight;
- (long long)sourceWidth;
- (NSString *)syncDescription;
- (int)trainingType;

@end
