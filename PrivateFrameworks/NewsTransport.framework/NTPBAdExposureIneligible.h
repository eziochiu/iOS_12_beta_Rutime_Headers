/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAdExposureIneligible : PBCodable <NSCopying> {
    int  _exposureIneligibleLocationType;
    NSString * _exposureIneligibleLocationTypeId;
    int  _exposureIneligibleReason;
    int  _feedType;
    struct { 
        unsigned int exposureIneligibleLocationType : 1; 
        unsigned int exposureIneligibleReason : 1; 
        unsigned int feedType : 1; 
    }  _has;
}

@property (nonatomic) int exposureIneligibleLocationType;
@property (nonatomic, retain) NSString *exposureIneligibleLocationTypeId;
@property (nonatomic) int exposureIneligibleReason;
@property (nonatomic) int feedType;
@property (nonatomic) bool hasExposureIneligibleLocationType;
@property (nonatomic, readonly) bool hasExposureIneligibleLocationTypeId;
@property (nonatomic) bool hasExposureIneligibleReason;
@property (nonatomic) bool hasFeedType;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)exposureIneligibleLocationType;
- (id)exposureIneligibleLocationTypeId;
- (int)exposureIneligibleReason;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (bool)hasExposureIneligibleLocationType;
- (bool)hasExposureIneligibleLocationTypeId;
- (bool)hasExposureIneligibleReason;
- (bool)hasFeedType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExposureIneligibleLocationType:(int)arg1;
- (void)setExposureIneligibleLocationTypeId:(id)arg1;
- (void)setExposureIneligibleReason:(int)arg1;
- (void)setFeedType:(int)arg1;
- (void)setHasExposureIneligibleLocationType:(bool)arg1;
- (void)setHasExposureIneligibleReason:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end