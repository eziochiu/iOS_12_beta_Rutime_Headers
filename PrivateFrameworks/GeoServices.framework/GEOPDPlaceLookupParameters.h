/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {
    bool  _enablePartialClientization;
    struct { 
        unsigned int resultProviderId : 1; 
        unsigned int enablePartialClientization : 1; 
    }  _has;
    NSMutableArray * _identifiers;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _muids;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool enablePartialClientization;
@property (nonatomic) bool hasEnablePartialClientization;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic, readonly) unsigned long long*muids;
@property (nonatomic, readonly) unsigned long long muidsCount;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)identifierType;

- (void).cxx_destruct;
- (void)addIdentifier:(id)arg1;
- (void)addMuid:(unsigned long long)arg1;
- (void)clearIdentifiers;
- (void)clearMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enablePartialClientization;
- (bool)hasEnablePartialClientization;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)identifiers;
- (unsigned long long)identifiersCount;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)muids;
- (unsigned long long)muidsCount;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setEnablePartialClientization:(bool)arg1;
- (void)setHasEnablePartialClientization:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end