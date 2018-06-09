/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying> {
    NTPBAbsolutePersonalizedSectionPresenceConfig * _absoluteConfig;
    struct { 
        unsigned int personalizationMethod : 1; 
    }  _has;
    int  _personalizationMethod;
    NTPBRelativePersonalizedSectionPresenceConfig * _relativeConfig;
}

@property (nonatomic, retain) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig;
@property (nonatomic, readonly) bool hasAbsoluteConfig;
@property (nonatomic) bool hasPersonalizationMethod;
@property (nonatomic, readonly) bool hasRelativeConfig;
@property (nonatomic) int personalizationMethod;
@property (nonatomic, retain) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig;

- (id)absoluteConfig;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteConfig;
- (bool)hasPersonalizationMethod;
- (bool)hasRelativeConfig;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)personalizationMethod;
- (bool)readFrom:(id)arg1;
- (id)relativeConfig;
- (void)setAbsoluteConfig:(id)arg1;
- (void)setHasPersonalizationMethod:(bool)arg1;
- (void)setPersonalizationMethod:(int)arg1;
- (void)setRelativeConfig:(id)arg1;
- (void)writeTo:(id)arg1;

@end
