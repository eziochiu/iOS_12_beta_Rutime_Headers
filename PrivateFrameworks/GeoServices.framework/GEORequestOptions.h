/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {
    struct { 
        unsigned int optionUsed : 1; 
    }  _has;
    int  _optionUsed;
    NSMutableArray * _requestOptions;
}

@property (nonatomic) bool hasOptionUsed;
@property (nonatomic) int optionUsed;
@property (nonatomic, retain) NSMutableArray *requestOptions;
@property (nonatomic, readonly) <GEOSurchargeType> *selectedSurchargeType;
@property (nonatomic, readonly) unsigned long long selectedSurchargeTypeIndex;
@property (nonatomic, readonly) NSArray *surchargeTypes;

+ (Class)requestOptionType;

- (void).cxx_destruct;
- (void)addRequestOption:(id)arg1;
- (void)clearRequestOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOptionUsed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)optionUsed;
- (bool)readFrom:(id)arg1;
- (id)requestOptionAtIndex:(unsigned long long)arg1;
- (id)requestOptions;
- (unsigned long long)requestOptionsCount;
- (id)selectedSurchargeType;
- (unsigned long long)selectedSurchargeTypeIndex;
- (void)setHasOptionUsed:(bool)arg1;
- (void)setOptionUsed:(int)arg1;
- (void)setRequestOptions:(id)arg1;
- (id)surchargeTypes;
- (void)writeTo:(id)arg1;

@end
