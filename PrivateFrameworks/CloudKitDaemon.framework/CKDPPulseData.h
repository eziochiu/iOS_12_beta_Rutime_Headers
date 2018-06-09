/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseData : PBCodable <NSCopying> {
    long long  _customState;
    struct { 
        unsigned int customState : 1; 
        unsigned int stateTTLMillis : 1; 
        unsigned int state : 1; 
    }  _has;
    CKDPDate * _lastCustom;
    CKDPDate * _lastEdited;
    CKDPDate * _lastInvisible;
    CKDPDate * _lastViewed;
    int  _state;
    long long  _stateTTLMillis;
    CKDPIdentifier * _user;
}

@property (nonatomic) long long customState;
@property (nonatomic) bool hasCustomState;
@property (nonatomic, readonly) bool hasLastCustom;
@property (nonatomic, readonly) bool hasLastEdited;
@property (nonatomic, readonly) bool hasLastInvisible;
@property (nonatomic, readonly) bool hasLastViewed;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasStateTTLMillis;
@property (nonatomic, readonly) bool hasUser;
@property (nonatomic, retain) CKDPDate *lastCustom;
@property (nonatomic, retain) CKDPDate *lastEdited;
@property (nonatomic, retain) CKDPDate *lastInvisible;
@property (nonatomic, retain) CKDPDate *lastViewed;
@property (nonatomic) int state;
@property (nonatomic) long long stateTTLMillis;
@property (nonatomic, retain) CKDPIdentifier *user;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomState;
- (bool)hasLastCustom;
- (bool)hasLastEdited;
- (bool)hasLastInvisible;
- (bool)hasLastViewed;
- (bool)hasState;
- (bool)hasStateTTLMillis;
- (bool)hasUser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastCustom;
- (id)lastEdited;
- (id)lastInvisible;
- (id)lastViewed;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCustomState:(long long)arg1;
- (void)setHasCustomState:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasStateTTLMillis:(bool)arg1;
- (void)setLastCustom:(id)arg1;
- (void)setLastEdited:(id)arg1;
- (void)setLastInvisible:(id)arg1;
- (void)setLastViewed:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStateTTLMillis:(long long)arg1;
- (void)setUser:(id)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (long long)stateTTLMillis;
- (id)user;
- (void)writeTo:(id)arg1;

@end
