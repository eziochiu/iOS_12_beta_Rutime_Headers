/* made by EzioChiu.
 */

@protocol PFPhotosFaceRepresentation

@required

- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (bool)photosFaceRepresentationHasSmile;
- (bool)photosFaceRepresentationIsLeftEyeClosed;
- (bool)photosFaceRepresentationIsRightEyeClosed;
- (NSString *)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;

@end
