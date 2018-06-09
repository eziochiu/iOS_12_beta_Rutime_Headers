/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPCdmaCellNeighbor : PBCodable <NSCopying> {
    int  _channel;
    int  _ecn0;
    struct { 
        unsigned int channel : 1; 
        unsigned int ecn0 : 1; 
        unsigned int pilotPhase : 1; 
        unsigned int pnoffset : 1; 
        unsigned int rscp : 1; 
    }  _has;
    int  _pilotPhase;
    int  _pnoffset;
    int  _rscp;
}

@property (nonatomic) int channel;
@property (nonatomic) int ecn0;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasEcn0;
@property (nonatomic) bool hasPilotPhase;
@property (nonatomic) bool hasPnoffset;
@property (nonatomic) bool hasRscp;
@property (nonatomic) int pilotPhase;
@property (nonatomic) int pnoffset;
@property (nonatomic) int rscp;

- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)ecn0;
- (bool)hasChannel;
- (bool)hasEcn0;
- (bool)hasPilotPhase;
- (bool)hasPnoffset;
- (bool)hasRscp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pilotPhase;
- (int)pnoffset;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (void)setChannel:(int)arg1;
- (void)setEcn0:(int)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasPilotPhase:(bool)arg1;
- (void)setHasPnoffset:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setPilotPhase:(int)arg1;
- (void)setPnoffset:(int)arg1;
- (void)setRscp:(int)arg1;
- (void)writeTo:(id)arg1;

@end
