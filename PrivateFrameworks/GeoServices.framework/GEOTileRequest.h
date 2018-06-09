/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileRequest : NSObject {
    GEOTileKeyMap * _additionalInfos;
    GEOApplicationAuditToken * _auditToken;
    NSString * _backgroundSessionIdentifier;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    GEOTileKeyMap * _cachedData;
    GEOTileKeyMap * _cachedEtags;
    GEOTileKeyList * _keyList;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOTileKeyMap * _priorities;
    bool  _requirePowerPluggedIn;
    bool  _requireWiFi;
    GEOTileKeyMap * _signpostIDs;
}

@property (nonatomic, readonly) GEOTileKeyMap *additionalInfos;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) GEOTileKeyMap *cachedData;
@property (nonatomic, readonly) GEOTileKeyMap *cachedEtags;
@property (nonatomic, readonly) GEOTileKeyList *keyList;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic, readonly) GEOTileKeyMap *priorities;
@property (nonatomic, readonly) bool requirePowerPluggedIn;
@property (nonatomic, readonly) bool requireWiFi;
@property (nonatomic, readonly) GEOTileKeyMap *signpostIDs;

- (void).cxx_destruct;
- (id)additionalInfos;
- (id)auditToken;
- (id)backgroundSessionIdentifier;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)cachedData;
- (id)cachedEtags;
- (id)description;
- (id)init;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 signpostIDs:(id)arg7 additionalInfos:(id)arg8 bundleIdentifier:(id)arg9 bundleVersion:(id)arg10 auditToken:(id)arg11 requireWiFi:(bool)arg12 requirePowerPluggedIn:(bool)arg13 backgroundSessionIdentifier:(id)arg14;
- (id)keyList;
- (id)locale;
- (id)manifestConfiguration;
- (id)priorities;
- (bool)requirePowerPluggedIn;
- (bool)requireWiFi;
- (id)signpostIDs;

@end
