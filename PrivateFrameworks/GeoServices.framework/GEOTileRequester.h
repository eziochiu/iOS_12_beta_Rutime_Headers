/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileRequester : NSObject {
    id  _context;
    <GEOTileRequesterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _deviceCountry;
    NSString * _deviceRegion;
    NSThread * _thread;
    GEOTileRequest * _tileRequest;
}

@property (nonatomic, retain) id context;
@property (nonatomic, readonly) <GEOTileRequesterDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSString *deviceCountry;
@property (nonatomic, retain) NSString *deviceRegion;
@property (nonatomic, readonly) GEOResourceManifestManager *resourceManifestManager;
@property (nonatomic, readonly) GEOTileRequest *tileRequest;

+ (unsigned long long)expiringTilesetsCount;
+ (struct { unsigned int x1; double x2; }*)newExpiringTilesets;
+ (bool)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (unsigned char)tileProviderIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)context;
- (id)delegate;
- (id)delegateQueue;
- (id)deviceCountry;
- (id)deviceRegion;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (id)resourceManifestManager;
- (void)setContext:(id)arg1;
- (void)setDeviceCountry:(id)arg1;
- (void)setDeviceRegion:(id)arg1;
- (void)start;
- (void)tearDown;
- (id)tileRequest;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
