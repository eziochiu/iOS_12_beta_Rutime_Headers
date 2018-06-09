/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlayMediaIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPlayMediaIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBDictionary * _nowPlayingInfo;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDictionary *nowPlayingInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasNowPlayingInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)nowPlayingInfo;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
