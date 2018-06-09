/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int success : 1; 
    }  _has;
    HDCodableError * _launchError;
    NSString * _requestIdentifier;
    bool  _success;
}

@property (nonatomic, readonly) bool hasLaunchError;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) HDCodableError *launchError;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLaunchError;
- (bool)hasRequestIdentifier;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchError;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setHasSuccess:(bool)arg1;
- (void)setLaunchError:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
