/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationConfig : PBCodable <NSCopying> {
    NTPBBinningConfig * _binningConfig;
    NTPBPersonalizationTreatment * _defaultPersonalizationTreatment;
    struct { 
        unsigned int moduloForHashing : 1; 
    }  _has;
    long long  _moduloForHashing;
    NSMutableArray * _personalizationBuckets;
    NSMutableArray * _personalizationTreatments;
}

@property (nonatomic, retain) NTPBBinningConfig *binningConfig;
@property (nonatomic, retain) NTPBPersonalizationTreatment *defaultPersonalizationTreatment;
@property (nonatomic, readonly) bool hasBinningConfig;
@property (nonatomic, readonly) bool hasDefaultPersonalizationTreatment;
@property (nonatomic) bool hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (nonatomic, retain) NSMutableArray *personalizationBuckets;
@property (nonatomic, retain) NSMutableArray *personalizationTreatments;

+ (Class)personalizationBucketsType;
+ (Class)personalizationTreatmentsType;

- (void).cxx_destruct;
- (void)addPersonalizationBuckets:(id)arg1;
- (void)addPersonalizationTreatments:(id)arg1;
- (id)binningConfig;
- (void)clearPersonalizationBuckets;
- (void)clearPersonalizationTreatments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPersonalizationTreatment;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBinningConfig;
- (bool)hasDefaultPersonalizationTreatment;
- (bool)hasModuloForHashing;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)moduloForHashing;
- (id)personalizationBuckets;
- (id)personalizationBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationBucketsCount;
- (id)personalizationTreatments;
- (id)personalizationTreatmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationTreatmentsCount;
- (bool)readFrom:(id)arg1;
- (void)setBinningConfig:(id)arg1;
- (void)setDefaultPersonalizationTreatment:(id)arg1;
- (void)setHasModuloForHashing:(bool)arg1;
- (void)setModuloForHashing:(long long)arg1;
- (void)setPersonalizationBuckets:(id)arg1;
- (void)setPersonalizationTreatments:(id)arg1;
- (void)writeTo:(id)arg1;

@end
