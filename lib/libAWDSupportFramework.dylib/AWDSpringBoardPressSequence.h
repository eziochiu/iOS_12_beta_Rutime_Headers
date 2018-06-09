/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardPressSequence : PBCodable <NSCopying> {
    unsigned long long  _clickMax;
    bool  _didTriggerSOS;
    struct { 
        unsigned int clickMax : 1; 
        unsigned int timestamp : 1; 
        unsigned int didTriggerSOS : 1; 
    }  _has;
    NSMutableArray * _sequences;
    unsigned long long  _timestamp;
    NSString * _type;
    NSString * _uUID;
}

@property (nonatomic) unsigned long long clickMax;
@property (nonatomic) bool didTriggerSOS;
@property (nonatomic) bool hasClickMax;
@property (nonatomic) bool hasDidTriggerSOS;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasUUID;
@property (nonatomic, retain) NSMutableArray *sequences;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *uUID;

+ (Class)sequenceType;

- (void)addSequence:(id)arg1;
- (void)clearSequences;
- (unsigned long long)clickMax;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didTriggerSOS;
- (bool)hasClickMax;
- (bool)hasDidTriggerSOS;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sequenceAtIndex:(unsigned long long)arg1;
- (id)sequences;
- (unsigned long long)sequencesCount;
- (void)setClickMax:(unsigned long long)arg1;
- (void)setDidTriggerSOS:(bool)arg1;
- (void)setHasClickMax:(bool)arg1;
- (void)setHasDidTriggerSOS:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSequences:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)timestamp;
- (id)type;
- (id)uUID;
- (void)writeTo:(id)arg1;

@end
