/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSearchViewExposure : PBCodable <NSCopying> {
    int  _areaPresentationReason;
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _creativeId;
    struct { 
        unsigned int areaPresentationReason : 1; 
    }  _has;
}

@property (nonatomic) int areaPresentationReason;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) bool hasAreaPresentationReason;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic, readonly) bool hasCreativeId;

- (void).cxx_destruct;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (int)areaPresentationReason;
- (id)areaPresentationReasonAsString:(int)arg1;
- (id)campaignId;
- (id)campaignType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAreaPresentationReason;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCreativeId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAreaPresentationReason:(int)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setHasAreaPresentationReason:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
