/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _faceAlgorithmUmbrellaVersion;
    bool  _faceClusteringDisabled;
    float  _faceClusteringThreshold;
    float  _faceMergeFaceprintDistanceThreshold;
    float  _facePrimarySuggestionsThreshold;
    unsigned long long  _maxFaceCountForClustering;
    unsigned long long  _minFaceCountToTriggerClustering;
    unsigned long long  _minimumFaceGroupSizeForCreatingMergeCandidates;
    unsigned long long  _minimumSuggestionSize;
    bool  _personBuilderMergeCandidatesDisabled;
    bool  _personBuildingDisabled;
    bool  _quarantineTwinsOnAssetEnabled;
    unsigned int  _sceneAlgorithmUmbrellaVersion;
}

@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic) bool faceClusteringDisabled;
@property (nonatomic) float faceClusteringThreshold;
@property (nonatomic) float faceMergeFaceprintDistanceThreshold;
@property (nonatomic) float facePrimarySuggestionsThreshold;
@property (nonatomic) unsigned long long maxFaceCountForClustering;
@property (nonatomic) unsigned long long minFaceCountToTriggerClustering;
@property (nonatomic) unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;
@property (nonatomic) unsigned long long minimumSuggestionSize;
@property (nonatomic) bool personBuilderMergeCandidatesDisabled;
@property (nonatomic) bool personBuildingDisabled;
@property (nonatomic) bool quarantineTwinsOnAssetEnabled;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)faceAlgorithmUmbrellaVersion;
- (bool)faceClusteringDisabled;
- (float)faceClusteringThreshold;
- (float)faceMergeFaceprintDistanceThreshold;
- (float)facePrimarySuggestionsThreshold;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxFaceCountForClustering;
- (unsigned long long)minFaceCountToTriggerClustering;
- (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
- (unsigned long long)minimumSuggestionSize;
- (bool)personBuilderMergeCandidatesDisabled;
- (bool)personBuildingDisabled;
- (bool)quarantineTwinsOnAssetEnabled;
- (unsigned int)sceneAlgorithmUmbrellaVersion;
- (void)setFaceAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (void)setFaceClusteringDisabled:(bool)arg1;
- (void)setFaceClusteringThreshold:(float)arg1;
- (void)setFaceMergeFaceprintDistanceThreshold:(float)arg1;
- (void)setFacePrimarySuggestionsThreshold:(float)arg1;
- (void)setMaxFaceCountForClustering:(unsigned long long)arg1;
- (void)setMinFaceCountToTriggerClustering:(unsigned long long)arg1;
- (void)setMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1;
- (void)setMinimumSuggestionSize:(unsigned long long)arg1;
- (void)setPersonBuilderMergeCandidatesDisabled:(bool)arg1;
- (void)setPersonBuildingDisabled:(bool)arg1;
- (void)setQuarantineTwinsOnAssetEnabled:(bool)arg1;
- (void)setSceneAlgorithmUmbrellaVersion:(unsigned int)arg1;

@end
