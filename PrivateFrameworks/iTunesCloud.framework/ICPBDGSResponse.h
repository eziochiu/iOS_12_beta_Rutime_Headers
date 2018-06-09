/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSResponse : PBCodable <NSCopying> {
    ICPBDGSFinishDelegationResponse * _finishDelegationResponse;
    struct { 
        unsigned int requestUniqueID : 1; 
    }  _has;
    unsigned int  _requestUniqueID;
    ICPBDGSStartDelegationResponse * _startDelegationResponse;
}

@property (nonatomic, retain) ICPBDGSFinishDelegationResponse *finishDelegationResponse;
@property (nonatomic, readonly) bool hasFinishDelegationResponse;
@property (nonatomic) bool hasRequestUniqueID;
@property (nonatomic, readonly) bool hasStartDelegationResponse;
@property (nonatomic) unsigned int requestUniqueID;
@property (nonatomic, retain) ICPBDGSStartDelegationResponse *startDelegationResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)finishDelegationResponse;
- (bool)hasFinishDelegationResponse;
- (bool)hasRequestUniqueID;
- (bool)hasStartDelegationResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestUniqueID;
- (void)setFinishDelegationResponse:(id)arg1;
- (void)setHasRequestUniqueID:(bool)arg1;
- (void)setRequestUniqueID:(unsigned int)arg1;
- (void)setStartDelegationResponse:(id)arg1;
- (id)startDelegationResponse;
- (void)writeTo:(id)arg1;

@end
