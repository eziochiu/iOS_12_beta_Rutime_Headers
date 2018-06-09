/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCFelicaStateChangeEvent : PBCodable <NSCopying> {
    bool  _blacklisted;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int spID : 1; 
        unsigned int transactionSectorCombination : 1; 
        unsigned int transactionType : 1; 
        unsigned int transitGreenCarTicket : 1; 
        unsigned int transitInsideStation : 1; 
        unsigned int blacklisted : 1; 
        unsigned int onlineTransaction : 1; 
    }  _has;
    bool  _onlineTransaction;
    unsigned int  _spID;
    unsigned long long  _timestamp;
    unsigned int  _transactionSectorCombination;
    unsigned int  _transactionType;
    NSData * _transitEndStation;
    unsigned int  _transitGreenCarTicket;
    unsigned int  _transitInsideStation;
    NSData * _transitStartStation;
}

@property (nonatomic) bool blacklisted;
@property (nonatomic) bool hasBlacklisted;
@property (nonatomic) bool hasOnlineTransaction;
@property (nonatomic) bool hasSpID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransactionSectorCombination;
@property (nonatomic) bool hasTransactionType;
@property (nonatomic, readonly) bool hasTransitEndStation;
@property (nonatomic) bool hasTransitGreenCarTicket;
@property (nonatomic) bool hasTransitInsideStation;
@property (nonatomic, readonly) bool hasTransitStartStation;
@property (nonatomic) bool onlineTransaction;
@property (nonatomic) unsigned int spID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transactionSectorCombination;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic, retain) NSData *transitEndStation;
@property (nonatomic) unsigned int transitGreenCarTicket;
@property (nonatomic) unsigned int transitInsideStation;
@property (nonatomic, retain) NSData *transitStartStation;

- (bool)blacklisted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBlacklisted;
- (bool)hasOnlineTransaction;
- (bool)hasSpID;
- (bool)hasTimestamp;
- (bool)hasTransactionSectorCombination;
- (bool)hasTransactionType;
- (bool)hasTransitEndStation;
- (bool)hasTransitGreenCarTicket;
- (bool)hasTransitInsideStation;
- (bool)hasTransitStartStation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)onlineTransaction;
- (bool)readFrom:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setHasBlacklisted:(bool)arg1;
- (void)setHasOnlineTransaction:(bool)arg1;
- (void)setHasSpID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransactionSectorCombination:(bool)arg1;
- (void)setHasTransactionType:(bool)arg1;
- (void)setHasTransitGreenCarTicket:(bool)arg1;
- (void)setHasTransitInsideStation:(bool)arg1;
- (void)setOnlineTransaction:(bool)arg1;
- (void)setSpID:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionSectorCombination:(unsigned int)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setTransitEndStation:(id)arg1;
- (void)setTransitGreenCarTicket:(unsigned int)arg1;
- (void)setTransitInsideStation:(unsigned int)arg1;
- (void)setTransitStartStation:(id)arg1;
- (unsigned int)spID;
- (unsigned long long)timestamp;
- (unsigned int)transactionSectorCombination;
- (unsigned int)transactionType;
- (id)transitEndStation;
- (unsigned int)transitGreenCarTicket;
- (unsigned int)transitInsideStation;
- (id)transitStartStation;
- (void)writeTo:(id)arg1;

@end
