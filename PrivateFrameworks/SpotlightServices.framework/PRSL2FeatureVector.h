/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSL2FeatureVector : NSObject <NSCopying> {
    NSString * _bundleID;
    struct PRSL2FeatureScoreSmallCache { 
        unsigned short features[32]; 
        float scores[32]; 
        unsigned short count; 
    }  _cache;
    NSString * _device_type;
    float  _experimentalScore;
    void * _featureData;
    unsigned short  _featureDataSize;
    unsigned char  _flags;
    struct ranking_index_score_t { 
        unsigned long long lsb; 
        unsigned long long msb; 
    }  _indexScore;
    float  _originalL2Score;
    NSDictionary * _searchThroughCEPData;
    unsigned char  _values;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *device_type;
@property (nonatomic) bool displayNameFuzzySpecialInsertion;
@property (nonatomic) float experimentalScore;
@property (nonatomic) struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; } indexScore;
@property (nonatomic) bool isAppInDock;
@property (nonatomic) bool isSiriAction;
@property (nonatomic) float originalL2Score;
@property (nonatomic, readonly) bool receiverIsVip;
@property (nonatomic, retain) NSDictionary *searchThroughCEPData;
@property (nonatomic, readonly) bool senderIsVip;
@property (nonatomic, readonly) bool vipSenderMatchesQuery;

+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (struct FeatureInfo { id x1; unsigned char x2; }*)featureForName:(id)arg1;
+ (struct __CFSet { }*)getL2FeatureSet;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithoutDefaultValues:(bool)arg1;
- (id)bundleID;
- (void)cleanup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)device_type;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (bool)displayNameFuzzySpecialInsertion;
- (float)experimentalScore;
- (float*)getAllScores:(float)arg1;
- (struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })indexScore;
- (id)init;
- (bool)isAppInDock;
- (bool)isSiriAction;
- (float)originalL2Score;
- (bool)receiverIsVip;
- (float)scoreForFeature:(unsigned short)arg1;
- (id)searchThroughCEPData;
- (bool)senderIsVip;
- (bool)serializeToJSON:(void*)arg1 valuesOnly:(bool)arg2 ignoreDefaultValues:(bool)arg3;
- (void)setBundleID:(id)arg1;
- (void)setDevice_type:(id)arg1;
- (void)setDisplayNameFuzzySpecialInsertion:(bool)arg1;
- (void)setExperimentalScore:(float)arg1;
- (void)setIndexScore:(struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsAppInDock:(bool)arg1;
- (void)setIsSiriAction:(bool)arg1;
- (void)setOriginalL2Score:(float)arg1;
- (void)setScores:(float*)arg1 forFeatures:(unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)setSearchThroughCEPData:(id)arg1;
- (bool)vipSenderMatchesQuery;

@end
