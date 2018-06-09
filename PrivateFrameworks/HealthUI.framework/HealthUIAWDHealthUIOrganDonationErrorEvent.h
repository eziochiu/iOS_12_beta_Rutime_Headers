/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HealthUIAWDHealthUIOrganDonationErrorEvent : PBCodable <NSCopying> {
    int  _errorType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int errorType;
@property (nonatomic) bool hasErrorType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsErrorType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorType;
- (id)errorTypeAsString:(int)arg1;
- (bool)hasErrorType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorType:(int)arg1;
- (void)setHasErrorType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
