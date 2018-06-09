/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying> {
    struct { 
        unsigned int wristDetectionDisabled : 1; 
    }  _has;
    NSData * _restrictions;
    bool  _wristDetectionDisabled;
}

@property (nonatomic) bool hasWristDetectionDisabled;
@property (nonatomic, retain) NSData *restrictions;
@property (nonatomic) bool wristDetectionDisabled;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWristDetectionDisabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)restrictions;
- (void)setHasWristDetectionDisabled:(bool)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setWristDetectionDisabled:(bool)arg1;
- (bool)wristDetectionDisabled;
- (void)writeTo:(id)arg1;

@end
