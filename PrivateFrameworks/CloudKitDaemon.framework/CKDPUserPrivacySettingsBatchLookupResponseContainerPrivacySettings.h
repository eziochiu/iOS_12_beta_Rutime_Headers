/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying> {
    NSMutableArray * _applicationBundles;
    NSString * _applicationContainer;
    int  _applicationContainerEnvironment;
    struct { 
        unsigned int applicationContainerEnvironment : 1; 
    }  _has;
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (nonatomic, retain) NSMutableArray *applicationBundles;
@property (nonatomic, retain) NSString *applicationContainer;
@property (nonatomic) int applicationContainerEnvironment;
@property (nonatomic, readonly) bool hasApplicationContainer;
@property (nonatomic) bool hasApplicationContainerEnvironment;
@property (nonatomic, readonly) bool hasUserPrivacySettings;
@property (nonatomic, retain) CKDPUserPrivacySettings *userPrivacySettings;

+ (Class)applicationBundleType;

- (void).cxx_destruct;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;
- (void)addApplicationBundle:(id)arg1;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;
- (id)applicationBundles;
- (unsigned long long)applicationBundlesCount;
- (id)applicationContainer;
- (int)applicationContainerEnvironment;
- (id)applicationContainerEnvironmentAsString:(int)arg1;
- (void)clearApplicationBundles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplicationContainer;
- (bool)hasApplicationContainerEnvironment;
- (bool)hasUserPrivacySettings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundles:(id)arg1;
- (void)setApplicationContainer:(id)arg1;
- (void)setApplicationContainerEnvironment:(int)arg1;
- (void)setHasApplicationContainerEnvironment:(bool)arg1;
- (void)setUserPrivacySettings:(id)arg1;
- (id)userPrivacySettings;
- (void)writeTo:(id)arg1;

@end
