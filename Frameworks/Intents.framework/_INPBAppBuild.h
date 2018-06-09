/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppBuild : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBAppBuild> {
    _INPBAppId * _appId;
    INCodableAttribute * _associatedCodableAttribute;
    _INPBBuildId * _buildId;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBAppId *appId;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBBuildId *buildId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasBuildId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appId;
- (id)associatedCodableAttribute;
- (id)buildId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasBuildId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBuildId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
