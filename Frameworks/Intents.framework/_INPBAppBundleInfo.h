/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppBundleInfo : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBAppBundleInfo> {
    _INPBAppId * _appId;
    INCodableAttribute * _associatedCodableAttribute;
    _INPBBuildId * _buildId;
    struct { }  _has;
    NSArray * _intentSupports;
    NSArray * _localizedProjects;
    NSArray * _supportedPlatforms;
}

@property (nonatomic, retain) _INPBAppId *appId;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBBuildId *buildId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasBuildId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentSupports;
@property (nonatomic, readonly) unsigned long long intentSupportsCount;
@property (nonatomic, copy) NSArray *localizedProjects;
@property (nonatomic, readonly) unsigned long long localizedProjectsCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedPlatforms;
@property (nonatomic, readonly) unsigned long long supportedPlatformsCount;

+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;

- (void).cxx_destruct;
- (void)addIntentSupport:(id)arg1;
- (void)addLocalizedProjects:(id)arg1;
- (void)addSupportedPlatforms:(id)arg1;
- (id)appId;
- (id)associatedCodableAttribute;
- (id)buildId;
- (void)clearIntentSupports;
- (void)clearLocalizedProjects;
- (void)clearSupportedPlatforms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasBuildId;
- (unsigned long long)hash;
- (id)intentSupportAtIndex:(unsigned long long)arg1;
- (id)intentSupports;
- (unsigned long long)intentSupportsCount;
- (bool)isEqual:(id)arg1;
- (id)localizedProjects;
- (id)localizedProjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedProjectsCount;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBuildId:(id)arg1;
- (void)setIntentSupports:(id)arg1;
- (void)setLocalizedProjects:(id)arg1;
- (void)setSupportedPlatforms:(id)arg1;
- (id)supportedPlatforms;
- (id)supportedPlatformsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedPlatformsCount;
- (void)writeTo:(id)arg1;

@end
