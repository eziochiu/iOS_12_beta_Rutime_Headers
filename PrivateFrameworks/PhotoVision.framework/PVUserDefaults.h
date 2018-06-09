/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVUserDefaults : NSObject

+ (bool)_boolValueForKey:(id)arg1 defaultValue:(bool)arg2;
+ (double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (bool)faceClusteringDisabled;
+ (float)faceClusteringThreshold;
+ (bool)faceIDModelAlwaysRebuild;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (float)facePrimarySuggestionsThreshold;
+ (unsigned long long)maxFaceCountForClustering;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (unsigned long long)minimumSuggestionSize;
+ (bool)personBuilderMergeCandidatesDisabled;
+ (bool)personBuildingDisabled;
+ (bool)quarantineTwinsOnAssetEnabled;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;
+ (bool)suggestionsLogEnabled;

@end
