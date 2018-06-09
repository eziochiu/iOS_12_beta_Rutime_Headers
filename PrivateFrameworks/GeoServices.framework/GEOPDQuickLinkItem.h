/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDQuickLinkItem : PBCodable <NSCopying> {
    NSString * _title;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

+ (id)quickLinksForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end