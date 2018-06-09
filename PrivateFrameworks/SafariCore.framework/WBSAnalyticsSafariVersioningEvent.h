/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int variant : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _variant;
    NSString * _version;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVariant;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int variant;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (int)StringAsVariant:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasVariant;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVariant:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVariant:(int)arg1;
- (void)setVersion:(id)arg1;
- (unsigned long long)timestamp;
- (int)variant;
- (id)variantAsString:(int)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
