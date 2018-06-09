/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int maxGroupSizeIPad : 1; 
        unsigned int maxGroupSizeIPhone : 1; 
        unsigned int maxTimesHeadlineInGroup : 1; 
    }  _has;
    long long  _maxGroupSizeIPad;
    long long  _maxGroupSizeIPhone;
    long long  _maxTimesHeadlineInGroup;
}

@property (nonatomic) bool hasMaxGroupSizeIPad;
@property (nonatomic) bool hasMaxGroupSizeIPhone;
@property (nonatomic) bool hasMaxTimesHeadlineInGroup;
@property (nonatomic) long long maxGroupSizeIPad;
@property (nonatomic) long long maxGroupSizeIPhone;
@property (nonatomic) long long maxTimesHeadlineInGroup;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxGroupSizeIPad;
- (bool)hasMaxGroupSizeIPhone;
- (bool)hasMaxTimesHeadlineInGroup;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maxGroupSizeIPad;
- (long long)maxGroupSizeIPhone;
- (long long)maxTimesHeadlineInGroup;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxGroupSizeIPad:(bool)arg1;
- (void)setHasMaxGroupSizeIPhone:(bool)arg1;
- (void)setHasMaxTimesHeadlineInGroup:(bool)arg1;
- (void)setMaxGroupSizeIPad:(long long)arg1;
- (void)setMaxGroupSizeIPhone:(long long)arg1;
- (void)setMaxTimesHeadlineInGroup:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
