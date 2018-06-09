/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPNotification : PBCodable <NSCopying> {
    NSString * _localizedText;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) bool hasLocalizedText;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic, retain) NSString *localizedText;
@property (nonatomic, retain) NSString *localizedTitle;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedText;
- (bool)hasLocalizedTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedText;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)writeTo:(id)arg1;

@end