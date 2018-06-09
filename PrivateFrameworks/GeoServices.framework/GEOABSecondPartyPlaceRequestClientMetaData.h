/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {
    NSMutableArray * _clientConfigs;
    GEOPDABClientDatasetMetadata * _clientDatasetMetadata;
    NSMutableArray * _serverAbAssignments;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *clientConfigs;
@property (nonatomic, retain) GEOPDABClientDatasetMetadata *clientDatasetMetadata;
@property (nonatomic, readonly) bool hasClientDatasetMetadata;
@property (nonatomic, retain) NSMutableArray *serverAbAssignments;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)clientConfigType;
+ (Class)serverAbAssignmentType;

- (void).cxx_destruct;
- (void)addClientConfig:(id)arg1;
- (void)addServerAbAssignment:(id)arg1;
- (void)clearClientConfigs;
- (void)clearServerAbAssignments;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (id)clientConfigs;
- (unsigned long long)clientConfigsCount;
- (id)clientDatasetMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientDatasetMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverAbAssignmentAtIndex:(unsigned long long)arg1;
- (id)serverAbAssignments;
- (unsigned long long)serverAbAssignmentsCount;
- (void)setClientConfigs:(id)arg1;
- (void)setClientDatasetMetadata:(id)arg1;
- (void)setServerAbAssignments:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
