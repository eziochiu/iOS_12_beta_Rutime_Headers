/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSRequest : PBRequest <NSCopying> {
    ICPBDGSFinishDelegationRequest * _finishDelegationRequest;
    struct { 
        unsigned int uniqueID : 1; 
    }  _has;
    ICPBDGSStartDelegationRequest * _startDelegationRequest;
    unsigned int  _uniqueID;
}

@property (nonatomic, retain) ICPBDGSFinishDelegationRequest *finishDelegationRequest;
@property (nonatomic, readonly) bool hasFinishDelegationRequest;
@property (nonatomic, readonly) bool hasStartDelegationRequest;
@property (nonatomic) bool hasUniqueID;
@property (nonatomic, retain) ICPBDGSStartDelegationRequest *startDelegationRequest;
@property (nonatomic) unsigned int uniqueID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)finishDelegationRequest;
- (bool)hasFinishDelegationRequest;
- (bool)hasStartDelegationRequest;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFinishDelegationRequest:(id)arg1;
- (void)setHasUniqueID:(bool)arg1;
- (void)setStartDelegationRequest:(id)arg1;
- (void)setUniqueID:(unsigned int)arg1;
- (id)startDelegationRequest;
- (unsigned int)uniqueID;
- (void)writeTo:(id)arg1;

@end
