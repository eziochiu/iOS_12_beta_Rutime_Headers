/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying> {
    NSMutableArray * _applicationIds;
    NSString * _debugLayoutId;
    struct { 
        unsigned int platformType : 1; 
    }  _has;
    NSMutableArray * _modules;
    int  _platformType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *applicationIds;
@property (nonatomic, retain) NSString *debugLayoutId;
@property (nonatomic, readonly) bool hasDebugLayoutId;
@property (nonatomic) bool hasPlatformType;
@property (nonatomic, retain) NSMutableArray *modules;
@property (nonatomic) int platformType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)applicationIdType;
+ (Class)modulesType;

- (void).cxx_destruct;
- (int)StringAsPlatformType:(id)arg1;
- (void)addApplicationId:(id)arg1;
- (void)addModules:(id)arg1;
- (id)applicationIdAtIndex:(unsigned long long)arg1;
- (id)applicationIds;
- (unsigned long long)applicationIdsCount;
- (void)clearApplicationIds;
- (void)clearModules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugLayoutId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugLayoutId;
- (bool)hasPlatformType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modules;
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (int)platformType;
- (id)platformTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplicationIds:(id)arg1;
- (void)setDebugLayoutId:(id)arg1;
- (void)setHasPlatformType:(bool)arg1;
- (void)setModules:(id)arg1;
- (void)setPlatformType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end