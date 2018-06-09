/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {
    unsigned int  _counter;
    unsigned int  _duration;
    unsigned int  _durationLPM;
    unsigned int  _durationOffline;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int counter : 1; 
        unsigned int duration : 1; 
        unsigned int durationLPM : 1; 
        unsigned int durationOffline : 1; 
        unsigned int numStall : 1; 
        unsigned int samplePeriods : 1; 
        unsigned int isEnd : 1; 
        unsigned int lPM : 1; 
        unsigned int offline : 1; 
        unsigned int online : 1; 
    }  _has;
    NSMutableArray * _instValues;
    bool  _isEnd;
    bool  _lPM;
    unsigned int  _numStall;
    bool  _offline;
    bool  _online;
    unsigned int  _samplePeriods;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int counter;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int durationLPM;
@property (nonatomic) unsigned int durationOffline;
@property (nonatomic) bool hasCounter;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasDurationLPM;
@property (nonatomic) bool hasDurationOffline;
@property (nonatomic) bool hasIsEnd;
@property (nonatomic) bool hasLPM;
@property (nonatomic) bool hasNumStall;
@property (nonatomic) bool hasOffline;
@property (nonatomic) bool hasOnline;
@property (nonatomic) bool hasSamplePeriods;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *instValues;
@property (nonatomic) bool isEnd;
@property (nonatomic) bool lPM;
@property (nonatomic) unsigned int numStall;
@property (nonatomic) bool offline;
@property (nonatomic) bool online;
@property (nonatomic) unsigned int samplePeriods;
@property (nonatomic) unsigned long long timestamp;

+ (Class)instValuesType;

- (void)addInstValues:(id)arg1;
- (void)clearInstValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)durationLPM;
- (unsigned int)durationOffline;
- (bool)hasCounter;
- (bool)hasDuration;
- (bool)hasDurationLPM;
- (bool)hasDurationOffline;
- (bool)hasIsEnd;
- (bool)hasLPM;
- (bool)hasNumStall;
- (bool)hasOffline;
- (bool)hasOnline;
- (bool)hasSamplePeriods;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)instValues;
- (id)instValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instValuesCount;
- (bool)isEnd;
- (bool)isEqual:(id)arg1;
- (bool)lPM;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numStall;
- (bool)offline;
- (bool)online;
- (bool)readFrom:(id)arg1;
- (unsigned int)samplePeriods;
- (void)setCounter:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setDurationLPM:(unsigned int)arg1;
- (void)setDurationOffline:(unsigned int)arg1;
- (void)setHasCounter:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasDurationLPM:(bool)arg1;
- (void)setHasDurationOffline:(bool)arg1;
- (void)setHasIsEnd:(bool)arg1;
- (void)setHasLPM:(bool)arg1;
- (void)setHasNumStall:(bool)arg1;
- (void)setHasOffline:(bool)arg1;
- (void)setHasOnline:(bool)arg1;
- (void)setHasSamplePeriods:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstValues:(id)arg1;
- (void)setIsEnd:(bool)arg1;
- (void)setLPM:(bool)arg1;
- (void)setNumStall:(unsigned int)arg1;
- (void)setOffline:(bool)arg1;
- (void)setOnline:(bool)arg1;
- (void)setSamplePeriods:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
