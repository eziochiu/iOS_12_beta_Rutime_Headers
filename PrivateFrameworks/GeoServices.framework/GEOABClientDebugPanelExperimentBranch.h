/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying> {
    NSMutableArray * _configKeyValues;
    GEOABDebugPanelExperimentBranch * _debugExperimentBranch;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *configKeyValues;
@property (nonatomic, retain) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (nonatomic, readonly) bool hasDebugExperimentBranch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;

- (void).cxx_destruct;
- (void)addConfigKeyValue:(id)arg1;
- (void)clearConfigKeyValues;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (id)configKeyValues;
- (unsigned long long)configKeyValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranch;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugExperimentBranch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfigKeyValues:(id)arg1;
- (void)setDebugExperimentBranch:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
