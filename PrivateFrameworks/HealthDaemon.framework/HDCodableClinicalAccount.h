/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableClinicalAccount : PBCodable <NSCopying> {
    NSString * _accountIdentifier;
    double  _creationDate;
    NSString * _gatewayExternalID;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int lastFetchDate : 1; 
        unsigned int lastFullFetchDate : 1; 
        unsigned int modificationDate : 1; 
        unsigned int userEnabled : 1; 
    }  _has;
    double  _lastFetchDate;
    double  _lastFullFetchDate;
    double  _modificationDate;
    NSString * _patientHash;
    NSData * _syncIdentifier;
    bool  _userEnabled;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *gatewayExternalID;
@property (nonatomic, readonly) bool hasAccountIdentifier;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasGatewayExternalID;
@property (nonatomic) bool hasLastFetchDate;
@property (nonatomic) bool hasLastFullFetchDate;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasPatientHash;
@property (nonatomic, readonly) bool hasSyncIdentifier;
@property (nonatomic) bool hasUserEnabled;
@property (nonatomic) double lastFetchDate;
@property (nonatomic) double lastFullFetchDate;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSString *patientHash;
@property (nonatomic, retain) NSData *syncIdentifier;
@property (nonatomic) bool userEnabled;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gatewayExternalID;
- (bool)hasAccountIdentifier;
- (bool)hasCreationDate;
- (bool)hasGatewayExternalID;
- (bool)hasLastFetchDate;
- (bool)hasLastFullFetchDate;
- (bool)hasModificationDate;
- (bool)hasPatientHash;
- (bool)hasSyncIdentifier;
- (bool)hasUserEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastFetchDate;
- (double)lastFullFetchDate;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (id)patientHash;
- (bool)readFrom:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setGatewayExternalID:(id)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasLastFetchDate:(bool)arg1;
- (void)setHasLastFullFetchDate:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasUserEnabled:(bool)arg1;
- (void)setLastFetchDate:(double)arg1;
- (void)setLastFullFetchDate:(double)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setPatientHash:(id)arg1;
- (void)setSyncIdentifier:(id)arg1;
- (void)setUserEnabled:(bool)arg1;
- (id)syncIdentifier;
- (bool)userEnabled;
- (void)writeTo:(id)arg1;

@end
