/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentListClustering : NSObject {
    NSMutableDictionary * __cachedCollectionTagByMomentID;
    NSMapTable * __cachedLocationsByMoment;
    NSMutableDictionary * __clustersByYearAndMonth;
    NSDateFormatter * __debugDateFormatter;
    unsigned long long  __defaultMaxFailuresForExpansion;
    unsigned long long  __defaultNumberOfAssetsRequiredForSeeding;
    double  __maximumDistanceBetweenAccumulatedMoments;
    double  __maximumDistanceThresholdBetweenMoments;
    double  __maximumDistanceThresholdFromPeak;
    double  __maximumTimeThreshold;
    double  __maximumTimeThresholdBetweenMomentsWithLocation;
    double  __maximumTimeThresholdBetweenMomentsWithoutLocation;
    double  __maximumTimeThresholdFromPeakMatch;
    double  __maximumTimeThresholdFromPeakWithoutLocation;
    double  __megamomentAccumulationMaximumTimeThreshold;
    unsigned long long  __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
    unsigned long long  __minimumNumberOfAssetsToAvoidYearAccumulation;
    NSMutableSet * __visitedMoments;
    bool  _allowsCollectionAccumulation;
    bool  _allowsCollectionInfluencing;
    bool  _allowsYearAccumulation;
}

@property (setter=_setCachedCollectionTagByMomentID:, nonatomic, retain) NSMutableDictionary *_cachedCollectionTagByMomentID;
@property (setter=_setCachedLocationsByMoment:, nonatomic, retain) NSMapTable *_cachedLocationsByMoment;
@property (nonatomic, readonly) NSMutableDictionary *_clustersByYearAndMonth;
@property (nonatomic, readonly) NSDateFormatter *_debugDateFormatter;
@property (nonatomic, readonly) unsigned long long _defaultMaxFailuresForExpansion;
@property (nonatomic, readonly) unsigned long long _defaultNumberOfAssetsRequiredForSeeding;
@property (nonatomic, readonly) double _maximumDistanceBetweenAccumulatedMoments;
@property (nonatomic, readonly) double _maximumDistanceThresholdBetweenMoments;
@property (nonatomic, readonly) double _maximumDistanceThresholdFromPeak;
@property (nonatomic, readonly) double _maximumTimeThreshold;
@property (nonatomic, readonly) double _maximumTimeThresholdBetweenMomentsWithLocation;
@property (nonatomic, readonly) double _maximumTimeThresholdBetweenMomentsWithoutLocation;
@property (nonatomic, readonly) double _maximumTimeThresholdFromPeakMatch;
@property (nonatomic, readonly) double _maximumTimeThresholdFromPeakWithoutLocation;
@property (nonatomic, readonly) double _megamomentAccumulationMaximumTimeThreshold;
@property (nonatomic, readonly) unsigned long long _minimumNumberOfAssetsToAvoidMegamomentAccumulation;
@property (nonatomic, readonly) unsigned long long _minimumNumberOfAssetsToAvoidYearAccumulation;
@property (nonatomic, readonly) NSMutableSet *_visitedMoments;
@property (nonatomic) bool allowsCollectionAccumulation;
@property (nonatomic) bool allowsCollectionInfluencing;
@property (nonatomic) bool allowsYearAccumulation;

+ (double)maximumTimeThresholdBetweenMoments;

- (id)_cachedCollectionTagByMomentID;
- (id)_cachedLocationForMoment:(id)arg1;
- (id)_cachedLocationsByMoment;
- (id)_clustersByYearAndMonth;
- (void)_createMomentListClusterCacheForMoments:(id)arg1;
- (void)_createMomentListTagCacheForMoments:(id)arg1;
- (id)_debugDateFormatter;
- (unsigned long long)_defaultMaxFailuresForExpansion;
- (unsigned long long)_defaultNumberOfAssetsRequiredForSeeding;
- (unsigned long long)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(bool)arg4 outRejectedMoments:(id)arg5;
- (id)_insertNewMegaMomentListWithMoment:(id)arg1 inManager:(id)arg2;
- (bool)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(bool)arg4;
- (double)_maximumDistanceBetweenAccumulatedMoments;
- (double)_maximumDistanceThresholdBetweenMoments;
- (double)_maximumDistanceThresholdFromPeak;
- (double)_maximumTimeThreshold;
- (double)_maximumTimeThresholdBetweenMomentsWithLocation;
- (double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
- (double)_maximumTimeThresholdFromPeakMatch;
- (double)_maximumTimeThresholdFromPeakWithoutLocation;
- (double)_megamomentAccumulationMaximumTimeThreshold;
- (unsigned long long)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
- (unsigned long long)_minimumNumberOfAssetsToAvoidYearAccumulation;
- (void)_setCachedCollectionTagByMomentID:(id)arg1;
- (void)_setCachedLocationsByMoment:(id)arg1;
- (bool)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(bool)arg6 haveRejectedMomentsForDistance:(bool)arg7;
- (bool)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2;
- (void)_updateMomentList:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3;
- (void)_verifyMomentsAreSorted:(id)arg1;
- (id)_visitedMoments;
- (bool)allowsCollectionAccumulation;
- (bool)allowsCollectionInfluencing;
- (bool)allowsYearAccumulation;
- (void)dealloc;
- (id)generateMegaMomentListsForMoments:(id)arg1 inManager:(id)arg2;
- (id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManager:(id)arg4;
- (id)init;
- (void)setAllowsCollectionAccumulation:(bool)arg1;
- (void)setAllowsCollectionInfluencing:(bool)arg1;
- (void)setAllowsYearAccumulation:(bool)arg1;

@end
