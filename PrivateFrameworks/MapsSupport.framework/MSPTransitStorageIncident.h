/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageIncident : PBCodable <GEOTransitIncident, NSCopying> {
    NSMutableArray * _affectedEntities;
    bool  _blockingIncident;
    unsigned int  _creationDatetime;
    unsigned int  _endDatetime;
    NSString * _fullDescription;
    struct { 
        unsigned int muid : 1; 
        unsigned int creationDatetime : 1; 
        unsigned int endDatetime : 1; 
        unsigned int iconType : 1; 
        unsigned int lastUpdatedDatetime : 1; 
        unsigned int startDatetime : 1; 
        unsigned int blockingIncident : 1; 
    }  _has;
    long long  _iconType;
    unsigned int  _lastUpdatedDatetime;
    NSString * _messageForNonRoutable;
    NSString * _messageForRoutePlanning;
    NSString * _messageForRouteStepping;
    unsigned long long  _muid;
    unsigned int  _startDatetime;
    NSString * _summary;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) NSArray *affectedEntities;
@property (nonatomic, retain) NSMutableArray *affectedEntities;
@property (getter=isBlockingIncident, nonatomic, readonly) bool blockingIncident;
@property (nonatomic) bool blockingIncident;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic) unsigned int creationDatetime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, retain) NSString *fullDescription;
@property (nonatomic) bool hasBlockingIncident;
@property (nonatomic) bool hasCreationDatetime;
@property (nonatomic) bool hasEndDatetime;
@property (nonatomic, readonly) bool hasFullDescription;
@property (nonatomic) bool hasIconType;
@property (nonatomic) bool hasLastUpdatedDatetime;
@property (nonatomic, readonly) bool hasMessageForNonRoutable;
@property (nonatomic, readonly) bool hasMessageForRoutePlanning;
@property (nonatomic, readonly) bool hasMessageForRouteStepping;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasStartDatetime;
@property (nonatomic, readonly) bool hasSummary;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iconType;
@property (nonatomic) long long iconType;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic) unsigned int lastUpdatedDatetime;
@property (nonatomic, readonly) NSString *messageForNonRoutable;
@property (nonatomic, retain) NSString *messageForNonRoutable;
@property (nonatomic, readonly) NSString *messageForRoutePlanning;
@property (nonatomic, retain) NSString *messageForRoutePlanning;
@property (nonatomic, readonly) NSString *messageForRouteStepping;
@property (nonatomic, retain) NSString *messageForRouteStepping;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)affectedEntitiesType;

- (void).cxx_destruct;
- (long long)StringAsIconType:(id)arg1;
- (void)addAffectedEntities:(id)arg1;
- (id)affectedEntities;
- (id)affectedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedEntitiesCount;
- (bool)blockingIncident;
- (void)clearAffectedEntities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (unsigned int)creationDatetime;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endDate;
- (unsigned int)endDatetime;
- (id)fullDescription;
- (bool)hasBlockingIncident;
- (bool)hasCreationDatetime;
- (bool)hasEndDatetime;
- (bool)hasFullDescription;
- (bool)hasIconType;
- (bool)hasLastUpdatedDatetime;
- (bool)hasMessageForNonRoutable;
- (bool)hasMessageForRoutePlanning;
- (bool)hasMessageForRouteStepping;
- (bool)hasMuid;
- (bool)hasStartDatetime;
- (bool)hasSummary;
- (bool)hasTitle;
- (unsigned long long)hash;
- (long long)iconType;
- (id)iconTypeAsString:(long long)arg1;
- (id)initWithIncident:(id)arg1;
- (bool)isBlockingIncident;
- (bool)isEqual:(id)arg1;
- (id)lastUpdated;
- (unsigned int)lastUpdatedDatetime;
- (void)mergeFrom:(id)arg1;
- (id)messageForNonRoutable;
- (id)messageForRoutePlanning;
- (id)messageForRouteStepping;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setAffectedEntities:(id)arg1;
- (void)setBlockingIncident:(bool)arg1;
- (void)setCreationDatetime:(unsigned int)arg1;
- (void)setEndDatetime:(unsigned int)arg1;
- (void)setFullDescription:(id)arg1;
- (void)setHasBlockingIncident:(bool)arg1;
- (void)setHasCreationDatetime:(bool)arg1;
- (void)setHasEndDatetime:(bool)arg1;
- (void)setHasIconType:(bool)arg1;
- (void)setHasLastUpdatedDatetime:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStartDatetime:(bool)arg1;
- (void)setIconType:(long long)arg1;
- (void)setLastUpdatedDatetime:(unsigned int)arg1;
- (void)setMessageForNonRoutable:(id)arg1;
- (void)setMessageForRoutePlanning:(id)arg1;
- (void)setMessageForRouteStepping:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setStartDatetime:(unsigned int)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (unsigned int)startDatetime;
- (id)summary;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
