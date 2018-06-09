/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlatformSupport : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPlatformSupport> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int supportedPlatform : 1; 
    }  _has;
    NSString * _minimumOsVersion;
    int  _supportedPlatform;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMinimumOsVersion;
@property (nonatomic) bool hasSupportedPlatform;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *minimumOsVersion;
@property (readonly) Class superclass;
@property (nonatomic) int supportedPlatform;

- (void).cxx_destruct;
- (int)StringAsSupportedPlatform:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasMinimumOsVersion;
- (bool)hasSupportedPlatform;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)minimumOsVersion;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasSupportedPlatform:(bool)arg1;
- (void)setMinimumOsVersion:(id)arg1;
- (void)setSupportedPlatform:(int)arg1;
- (int)supportedPlatform;
- (id)supportedPlatformAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
