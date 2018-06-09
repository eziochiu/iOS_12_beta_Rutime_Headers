/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {
    NSMutableArray * _attributionApps;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributionRequirements;
    bool  _enforceAppStore;
    struct { 
        unsigned int enforceAppStore : 1; 
    }  _has;
    NSMutableArray * _localizedAttributions;
    NSString * _sourceIdentifier;
    unsigned int  _sourceVersion;
    NSMutableArray * _supportedComponentActions;
    NSString * _webBaseActionURL;
}

@property (nonatomic, retain) NSMutableArray *attributionApps;
@property (nonatomic, readonly) int*attributionRequirements;
@property (nonatomic, readonly) unsigned long long attributionRequirementsCount;
@property (nonatomic) bool enforceAppStore;
@property (nonatomic) bool hasEnforceAppStore;
@property (nonatomic, readonly) bool hasWebBaseActionURL;
@property (nonatomic, retain) NSMutableArray *localizedAttributions;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (nonatomic, retain) NSMutableArray *supportedComponentActions;
@property (nonatomic, retain) NSString *webBaseActionURL;

+ (Class)attributionAppsType;
+ (Class)localizedAttributionType;
+ (Class)supportedComponentActionsType;

- (void).cxx_destruct;
- (int)StringAsAttributionRequirements:(id)arg1;
- (void)addAttributionApps:(id)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (void)addLocalizedAttribution:(id)arg1;
- (void)addSupportedComponentActions:(id)arg1;
- (id)attributionApps;
- (id)attributionAppsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionAppsCount;
- (int*)attributionRequirements;
- (id)attributionRequirementsAsString:(int)arg1;
- (int)attributionRequirementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionRequirementsCount;
- (id)bestLocalizedAttribution;
- (bool)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2;
- (void)clearAttributionApps;
- (void)clearAttributionRequirements;
- (void)clearLocalizedAttributions;
- (void)clearSupportedComponentActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enforceAppStore;
- (bool)hasEnforceAppStore;
- (bool)hasWebBaseActionURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (id)localizedAttributions;
- (unsigned long long)localizedAttributionsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributionApps:(id)arg1;
- (void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEnforceAppStore:(bool)arg1;
- (void)setHasEnforceAppStore:(bool)arg1;
- (void)setLocalizedAttributions:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (void)setSupportedComponentActions:(id)arg1;
- (void)setWebBaseActionURL:(id)arg1;
- (id)sourceIdentifier;
- (unsigned int)sourceVersion;
- (id)supportedComponentActions;
- (id)supportedComponentActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedComponentActionsCount;
- (bool)supportsAction:(int)arg1 forComponent:(int)arg2;
- (id)webBaseActionURL;
- (void)writeTo:(id)arg1;

@end
