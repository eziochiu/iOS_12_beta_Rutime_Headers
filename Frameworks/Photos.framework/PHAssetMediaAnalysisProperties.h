/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet {
    float  _activityScore;
    float  _autoplaySuggestionScore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _bestKeyFrameTime;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _bestVideoTimeRange;
    float  _blurrinessScore;
    float  _exposureScore;
    unsigned long long  _faceCount;
    NSDate * _mediaAnalysisTimeStamp;
    unsigned long long  _mediaAnalysisVersion;
    float  _videoScore;
}

@property (nonatomic, readonly) float activityScore;
@property (nonatomic, readonly) float autoplaySuggestionScore;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } bestKeyFrameTime;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } bestVideoTimeRange;
@property (nonatomic, readonly) float blurrinessScore;
@property (nonatomic, readonly) float exposureScore;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic, readonly) unsigned long long mediaAnalysisVersion;
@property (nonatomic, readonly) float videoScore;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (float)activityScore;
- (float)autoplaySuggestionScore;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })bestKeyFrameTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestVideoTimeRange;
- (float)blurrinessScore;
- (float)exposureScore;
- (unsigned long long)faceCount;
- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)mediaAnalysisTimeStamp;
- (unsigned long long)mediaAnalysisVersion;
- (float)videoScore;

@end
