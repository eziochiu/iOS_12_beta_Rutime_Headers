/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscription : PBCodable <NSCopying> {
    int  _evaluationType;
    NSMutableArray * _filters;
    bool  _fireOnce;
    struct { 
        unsigned int evaluationType : 1; 
        unsigned int owner : 1; 
        unsigned int fireOnce : 1; 
    }  _has;
    CKDPIdentifier * _identifier;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mutationTriggers;
    CKDPSubscriptionNotification * _notification;
    int  _owner;
    NSMutableArray * _recordTypes;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic) int evaluationType;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic) bool fireOnce;
@property (nonatomic) bool hasEvaluationType;
@property (nonatomic) bool hasFireOnce;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasNotification;
@property (nonatomic) bool hasOwner;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) CKDPIdentifier *identifier;
@property (nonatomic, readonly) int*mutationTriggers;
@property (nonatomic, readonly) unsigned long long mutationTriggersCount;
@property (nonatomic, retain) CKDPSubscriptionNotification *notification;
@property (nonatomic) int owner;
@property (nonatomic, retain) NSMutableArray *recordTypes;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (Class)filtersType;
+ (Class)recordTypesType;

- (void).cxx_destruct;
- (int)StringAsEvaluationType:(id)arg1;
- (int)StringAsMutationTriggers:(id)arg1;
- (int)StringAsOwner:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addMutationTriggers:(int)arg1;
- (void)addRecordTypes:(id)arg1;
- (void)clearFilters;
- (void)clearMutationTriggers;
- (void)clearRecordTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)evaluationType;
- (id)evaluationTypeAsString:(int)arg1;
- (id)filters;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (bool)fireOnce;
- (bool)hasEvaluationType;
- (bool)hasFireOnce;
- (bool)hasIdentifier;
- (bool)hasNotification;
- (bool)hasOwner;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)mutationTriggers;
- (id)mutationTriggersAsString:(int)arg1;
- (int)mutationTriggersAtIndex:(unsigned long long)arg1;
- (unsigned long long)mutationTriggersCount;
- (id)notification;
- (int)owner;
- (id)ownerAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordTypes;
- (id)recordTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordTypesCount;
- (void)setEvaluationType:(int)arg1;
- (void)setFilters:(id)arg1;
- (void)setFireOnce:(bool)arg1;
- (void)setHasEvaluationType:(bool)arg1;
- (void)setHasFireOnce:(bool)arg1;
- (void)setHasOwner:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMutationTriggers:(int*)arg1 count:(unsigned long long)arg2;
- (void)setNotification:(id)arg1;
- (void)setOwner:(int)arg1;
- (void)setRecordTypes:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
