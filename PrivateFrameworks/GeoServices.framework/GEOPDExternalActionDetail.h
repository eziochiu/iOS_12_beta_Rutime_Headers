/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {
    NSString * _actionLabel;
    NSString * _actionUrlComponent;
    NSString * _actionUrlVerb;
    NSString * _logoId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *actionLabel;
@property (nonatomic, retain) NSString *actionUrlComponent;
@property (nonatomic, retain) NSString *actionUrlVerb;
@property (nonatomic, readonly) bool hasActionLabel;
@property (nonatomic, readonly) bool hasActionUrlComponent;
@property (nonatomic, readonly) bool hasActionUrlVerb;
@property (nonatomic, readonly) bool hasLogoId;
@property (nonatomic, retain) NSString *logoId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)actionLabel;
- (id)actionUrlComponent;
- (id)actionUrlVerb;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionLabel;
- (bool)hasActionUrlComponent;
- (bool)hasActionUrlVerb;
- (bool)hasLogoId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logoId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionLabel:(id)arg1;
- (void)setActionUrlComponent:(id)arg1;
- (void)setActionUrlVerb:(id)arg1;
- (void)setLogoId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
