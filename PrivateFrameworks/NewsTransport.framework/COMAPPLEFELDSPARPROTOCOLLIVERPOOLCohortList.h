/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying> {
    NSMutableArray * _cohorts;
}

@property (nonatomic, retain) NSMutableArray *cohorts;

+ (Class)cohortsType;

- (void).cxx_destruct;
- (void)addCohorts:(id)arg1;
- (void)clearCohorts;
- (id)cohorts;
- (id)cohortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cohortsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCohorts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
