/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLIndoorAvailabilityTileParams : NSObject {
    double  _availabilityZScoreConfidenceInterval;
    unsigned int  _cyclingToNonFitnessSeconds;
    bool  _hasCyclingToNonFitnessSeconds;
    bool  _hasMotionActivityDebounceParameters;
    bool  _hasNonFitnessToCyclingSeconds;
    bool  _hasNonFitnessToRunningSeconds;
    bool  _hasRegionalPrefetchMaxFloorCount;
    bool  _hasRunningToNonFitnessSeconds;
    unsigned int  _indoorLocationOfInterestMergeRadiusKM;
    float  _indoorNumberOfDaysBeforeTileRedownload;
    unsigned int  _indoorPrefetchMaxFloorCount;
    unsigned int  _indoorPrefetchMaxTotalBytes;
    unsigned int  _indoorPrefetchRadiusKM;
    unsigned int  _nonFitnessToCyclingSeconds;
    unsigned int  _nonFitnessToRunningSeconds;
    unsigned int  _preferPredictionWithinNActivityCycles;
    unsigned int  _regionalLocationOfInterestMergeRadiusKM;
    float  _regionalNumberOfDaysBeforeTileRedownload;
    unsigned int  _regionalPrefetchMaxFloorCount;
    unsigned int  _regionalPrefetchMaxTotalBytes;
    unsigned int  _regionalPrefetchRadiusKM;
    unsigned int  _runningToNonFitnessSeconds;
}

@property (nonatomic, readonly) double availabilityZScoreConfidenceInterval;
@property (nonatomic, readonly) unsigned int cyclingToNonFitnessSeconds;
@property (nonatomic, readonly) bool hasCyclingToNonFitnessSeconds;
@property (nonatomic, readonly) bool hasMotionActivityDebounceParameters;
@property (nonatomic, readonly) bool hasNonFitnessToCyclingSeconds;
@property (nonatomic, readonly) bool hasNonFitnessToRunningSeconds;
@property (nonatomic, readonly) bool hasRegionalPrefetchMaxFloorCount;
@property (nonatomic, readonly) bool hasRunningToNonFitnessSeconds;
@property (nonatomic, readonly) unsigned int indoorLocationOfInterestMergeRadiusKM;
@property (nonatomic, readonly) float indoorNumberOfDaysBeforeTileRedownload;
@property (nonatomic, readonly) unsigned int indoorPrefetchMaxFloorCount;
@property (nonatomic, readonly) unsigned int indoorPrefetchMaxTotalBytes;
@property (nonatomic, readonly) unsigned int indoorPrefetchRadiusKM;
@property (nonatomic, readonly) unsigned int nonFitnessToCyclingSeconds;
@property (nonatomic, readonly) unsigned int nonFitnessToRunningSeconds;
@property (nonatomic, readonly) unsigned int preferPredictionWithinNActivityCycles;
@property (nonatomic, readonly) unsigned int regionalLocationOfInterestMergeRadiusKM;
@property (nonatomic, readonly) float regionalNumberOfDaysBeforeTileRedownload;
@property (nonatomic, readonly) unsigned int regionalPrefetchMaxFloorCount;
@property (nonatomic, readonly) unsigned int regionalPrefetchMaxTotalBytes;
@property (nonatomic, readonly) unsigned int regionalPrefetchRadiusKM;
@property (nonatomic, readonly) unsigned int runningToNonFitnessSeconds;

- (double)availabilityZScoreConfidenceInterval;
- (unsigned int)cyclingToNonFitnessSeconds;
- (bool)hasCyclingToNonFitnessSeconds;
- (bool)hasMotionActivityDebounceParameters;
- (bool)hasNonFitnessToCyclingSeconds;
- (bool)hasNonFitnessToRunningSeconds;
- (bool)hasRegionalPrefetchMaxFloorCount;
- (bool)hasRunningToNonFitnessSeconds;
- (unsigned int)indoorLocationOfInterestMergeRadiusKM;
- (float)indoorNumberOfDaysBeforeTileRedownload;
- (unsigned int)indoorPrefetchMaxFloorCount;
- (unsigned int)indoorPrefetchMaxTotalBytes;
- (unsigned int)indoorPrefetchRadiusKM;
- (id)init;
- (id)initWithAvailabilityTile:(struct AvailabilityTile { struct shared_ptr<proto::availability::AvailabilityTile> { struct AvailabilityTile {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; bool x2; struct unique_ptr<google::protobuf::io::FileInputStream, std::__1::default_delete<google::protobuf::io::FileInputStream> > { struct __compressed_pair<google::protobuf::io::FileInputStream *, std::__1::default_delete<google::protobuf::io::FileInputStream> > { struct FileInputStream {} *x_1_2_1; } x_3_1_1; } x3; struct path { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; }*)arg1;
- (unsigned int)nonFitnessToCyclingSeconds;
- (unsigned int)nonFitnessToRunningSeconds;
- (unsigned int)preferPredictionWithinNActivityCycles;
- (unsigned int)regionalLocationOfInterestMergeRadiusKM;
- (float)regionalNumberOfDaysBeforeTileRedownload;
- (unsigned int)regionalPrefetchMaxFloorCount;
- (unsigned int)regionalPrefetchMaxTotalBytes;
- (unsigned int)regionalPrefetchRadiusKM;
- (unsigned int)runningToNonFitnessSeconds;

@end
