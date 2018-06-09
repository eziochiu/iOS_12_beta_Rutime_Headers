/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying> {
    struct { 
        unsigned int idsSessionInvitationReceived : 1; 
        unsigned int idsSessionInvitationSent : 1; 
        unsigned int idsSessionStartedOnReceiver : 1; 
        unsigned int idsSessionStartedOnResident : 1; 
    }  _has;
    unsigned int  _idsSessionInvitationReceived;
    unsigned int  _idsSessionInvitationSent;
    unsigned int  _idsSessionStartedOnReceiver;
    unsigned int  _idsSessionStartedOnResident;
}

@property (nonatomic) bool hasIdsSessionInvitationReceived;
@property (nonatomic) bool hasIdsSessionInvitationSent;
@property (nonatomic) bool hasIdsSessionStartedOnReceiver;
@property (nonatomic) bool hasIdsSessionStartedOnResident;
@property (nonatomic) unsigned int idsSessionInvitationReceived;
@property (nonatomic) unsigned int idsSessionInvitationSent;
@property (nonatomic) unsigned int idsSessionStartedOnReceiver;
@property (nonatomic) unsigned int idsSessionStartedOnResident;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdsSessionInvitationReceived;
- (bool)hasIdsSessionInvitationSent;
- (bool)hasIdsSessionStartedOnReceiver;
- (bool)hasIdsSessionStartedOnResident;
- (unsigned long long)hash;
- (unsigned int)idsSessionInvitationReceived;
- (unsigned int)idsSessionInvitationSent;
- (unsigned int)idsSessionStartedOnReceiver;
- (unsigned int)idsSessionStartedOnResident;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIdsSessionInvitationReceived:(bool)arg1;
- (void)setHasIdsSessionInvitationSent:(bool)arg1;
- (void)setHasIdsSessionStartedOnReceiver:(bool)arg1;
- (void)setHasIdsSessionStartedOnResident:(bool)arg1;
- (void)setIdsSessionInvitationReceived:(unsigned int)arg1;
- (void)setIdsSessionInvitationSent:(unsigned int)arg1;
- (void)setIdsSessionStartedOnReceiver:(unsigned int)arg1;
- (void)setIdsSessionStartedOnResident:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
