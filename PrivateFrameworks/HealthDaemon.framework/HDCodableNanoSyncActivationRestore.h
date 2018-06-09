/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    NSString * _defaultSourceBundleIdentifier;
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int statusCode : 1; 
    }  _has;
    NSData * _restoreIdentifier;
    long long  _sequenceNumber;
    int  _statusCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultSourceBundleIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDefaultSourceBundleIdentifier;
@property (nonatomic, readonly) bool hasRestoreIdentifier;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasStatusCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *restoreIdentifier;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;

+ (id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedRestoreUUID;
- (id)defaultSourceBundleIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultSourceBundleIdentifier;
- (bool)hasRequiredFields;
- (bool)hasRestoreIdentifier;
- (bool)hasSequenceNumber;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (bool)readFrom:(id)arg1;
- (id)restoreIdentifier;
- (long long)sequenceNumber;
- (void)setDefaultSourceBundleIdentifier:(id)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setRestoreIdentifier:(id)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
