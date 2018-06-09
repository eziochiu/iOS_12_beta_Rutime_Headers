/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCloudSyncEvent : PBCodable <NSCopying> {
    NSString * _cloudKitUUID;
    NSString * _containerID;
    struct { 
        unsigned int operation : 1; 
        unsigned int options : 1; 
        unsigned int reason : 1; 
        unsigned int hasCKManateeEnabled : 1; 
        unsigned int hasInternalSettingManateeEnabled : 1; 
    }  _has;
    bool  _hasCKManateeEnabled;
    bool  _hasInternalSettingManateeEnabled;
    int  _operation;
    NSString * _operationUUID;
    unsigned int  _options;
    int  _reason;
    NSString * _syncCirclePrefix;
    NSString * _syncUUID;
}

@property (nonatomic, retain) NSString *cloudKitUUID;
@property (nonatomic, retain) NSString *containerID;
@property (nonatomic) bool hasCKManateeEnabled;
@property (nonatomic, readonly) bool hasCloudKitUUID;
@property (nonatomic, readonly) bool hasContainerID;
@property (nonatomic) bool hasHasCKManateeEnabled;
@property (nonatomic) bool hasHasInternalSettingManateeEnabled;
@property (nonatomic) bool hasInternalSettingManateeEnabled;
@property (nonatomic) bool hasOperation;
@property (nonatomic, readonly) bool hasOperationUUID;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) bool hasSyncCirclePrefix;
@property (nonatomic, readonly) bool hasSyncUUID;
@property (nonatomic) int operation;
@property (nonatomic, retain) NSString *operationUUID;
@property (nonatomic) unsigned int options;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *syncCirclePrefix;
@property (nonatomic, retain) NSString *syncUUID;

- (void).cxx_destruct;
- (int)StringAsOperation:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (id)cloudKitUUID;
- (id)containerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCKManateeEnabled;
- (bool)hasCloudKitUUID;
- (bool)hasContainerID;
- (bool)hasHasCKManateeEnabled;
- (bool)hasHasInternalSettingManateeEnabled;
- (bool)hasInternalSettingManateeEnabled;
- (bool)hasOperation;
- (bool)hasOperationUUID;
- (bool)hasOptions;
- (bool)hasReason;
- (bool)hasSyncCirclePrefix;
- (bool)hasSyncUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operation;
- (id)operationAsString:(int)arg1;
- (id)operationUUID;
- (unsigned int)options;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setCloudKitUUID:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setHasCKManateeEnabled:(bool)arg1;
- (void)setHasHasCKManateeEnabled:(bool)arg1;
- (void)setHasHasInternalSettingManateeEnabled:(bool)arg1;
- (void)setHasInternalSettingManateeEnabled:(bool)arg1;
- (void)setHasOperation:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setOperation:(int)arg1;
- (void)setOperationUUID:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setSyncCirclePrefix:(id)arg1;
- (void)setSyncUUID:(id)arg1;
- (id)syncCirclePrefix;
- (id)syncUUID;
- (void)writeTo:(id)arg1;

@end
