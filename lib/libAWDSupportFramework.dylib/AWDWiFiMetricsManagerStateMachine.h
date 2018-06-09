/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerStateMachine : PBCodable <NSCopying> {
    struct { 
        unsigned int stateDuration : 1; 
        unsigned int stateChanges : 1; 
    }  _has;
    unsigned int  _stateChanges;
    unsigned long long  _stateDuration;
}

@property (nonatomic) bool hasStateChanges;
@property (nonatomic) bool hasStateDuration;
@property (nonatomic) unsigned int stateChanges;
@property (nonatomic) unsigned long long stateDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStateChanges;
- (bool)hasStateDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStateChanges:(bool)arg1;
- (void)setHasStateDuration:(bool)arg1;
- (void)setStateChanges:(unsigned int)arg1;
- (void)setStateDuration:(unsigned long long)arg1;
- (unsigned int)stateChanges;
- (unsigned long long)stateDuration;
- (void)writeTo:(id)arg1;

@end
