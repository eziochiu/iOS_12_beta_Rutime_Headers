/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicalMomentsExperts : PBCodable <NSCopying> {
    int  _durationSinceLastSuccessfulTraining;
    NSMutableArray * _experts;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int durationSinceLastSuccessfulTraining : 1; 
        unsigned int trainingTime : 1; 
    }  _has;
    NSMutableArray * _suggestions;
    unsigned long long  _timestamp;
    int  _trainingTime;
}

@property (nonatomic) int durationSinceLastSuccessfulTraining;
@property (nonatomic, retain) NSMutableArray *experts;
@property (nonatomic) bool hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTrainingTime;
@property (nonatomic, retain) NSMutableArray *suggestions;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int trainingTime;

+ (Class)expertsType;
+ (Class)suggestionsType;

- (void)addExperts:(id)arg1;
- (void)addSuggestions:(id)arg1;
- (void)clearExperts;
- (void)clearSuggestions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)durationSinceLastSuccessfulTraining;
- (id)experts;
- (id)expertsAtIndex:(unsigned long long)arg1;
- (unsigned long long)expertsCount;
- (bool)hasDurationSinceLastSuccessfulTraining;
- (bool)hasTimestamp;
- (bool)hasTrainingTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationSinceLastSuccessfulTraining:(int)arg1;
- (void)setExperts:(id)arg1;
- (void)setHasDurationSinceLastSuccessfulTraining:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTrainingTime:(bool)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTrainingTime:(int)arg1;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (unsigned long long)timestamp;
- (int)trainingTime;
- (void)writeTo:(id)arg1;

@end
