/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeature : NSObject <NSCopying>

@property (nonatomic, readonly) unsigned long long featureType;
@property (nonatomic, readonly) NSString *name;

+ (id)appUsageFeature;
+ (id)conditionalFeature;
+ (id)crossedFeatureWithFeatures:(id)arg1;
+ (id)currentTimeFeature;
+ (id)dailyRoutineFeature;
+ (id)dataSourceFeature;
+ (id)dateFeature;
+ (id)dateOccursTodayFeature;
+ (id)dayOfWeekFeature;
+ (id)featureWithName:(id)arg1 featureType:(unsigned long long)arg2;
+ (id)forcedFeature;
+ (id)geofenceFeature;
+ (id)groupFeature;
+ (id)interactionFeature;
+ (id)isInDailyRoutineFeature;
+ (id)isSiriActionFeature;
+ (id)isStationaryFeature;
+ (id)isWeekendFeature;
+ (id)itemIdentifierFeature;
+ (id)knownLocationOfInterestFeature;
+ (id)locationFeature;
+ (id)locationOfInterestFeature;
+ (id)motionFeature;
+ (id)noContentFeature;
+ (id)portraitFeature;
+ (id)priorityFeature;
+ (id)recentSiriActionFeature;
+ (id)relevanceThresholdFeature;
+ (id)sectionFeature;
+ (id)sentimentAnalysisFeature;
+ (id)sessionFeature;
+ (id)siriDomainFeature;
+ (id)transformedFeatureWithTransformer:(id)arg1 features:(id)arg2;
+ (id)travelingFeature;

- (long long)_bitCount;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_rootFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)featureByUsingTransformer:(id)arg1;
- (unsigned long long)featureType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
