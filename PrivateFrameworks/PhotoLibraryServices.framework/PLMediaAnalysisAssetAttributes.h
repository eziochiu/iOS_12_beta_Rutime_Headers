/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (nonatomic) float activityScore;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) int bestKeyFrameTimeScale;
@property (nonatomic) long long bestKeyFrameValue;
@property (nonatomic) int bestVideoRangeDurationTimeScale;
@property (nonatomic) long long bestVideoRangeDurationValue;
@property (nonatomic) int bestVideoRangeStartTimeScale;
@property (nonatomic) long long bestVideoRangeStartValue;
@property (nonatomic) float blurrinessScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic, retain) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic) unsigned long long mediaAnalysisVersion;
@property (nonatomic) float videoScore;

+ (id)entityName;
+ (id)fetchRequest;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })bestKeyFrameTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestVideoTimeRange;
- (void)setBestKeyFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBestVideoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
