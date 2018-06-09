/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBBuildId : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBBuildId> {
    INCodableAttribute * _associatedCodableAttribute;
    NSString * _buildNumber;
    struct { }  _has;
    NSString * _versionNumber;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSString *buildNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBuildNumber;
@property (nonatomic, readonly) bool hasVersionNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *versionNumber;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)buildNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasBuildNumber;
- (bool)hasVersionNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBuildNumber:(id)arg1;
- (void)setVersionNumber:(id)arg1;
- (id)versionNumber;
- (void)writeTo:(id)arg1;

@end
