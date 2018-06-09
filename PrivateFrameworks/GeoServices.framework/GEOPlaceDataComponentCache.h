/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataComponentCache : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    GEOPlaceDataDBReader * _reader;
    int  _resultProviderID;
    GEOPlaceDataDBWriter * _writer;
}

@property (nonatomic, readonly) int resultProviderID;

- (void).cxx_destruct;
- (id)allCacheEntries;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (id)componentForKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg1;
- (void)componentsForKeys:(id)arg1 finished:(id /* block */)arg2;
- (void)deletePhoneNumberMapping;
- (void)evictAllEntries;
- (void)evictPlaceDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (void)flushPendingWritesSynchronously;
- (void)forgetComponentForKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg1;
- (id)init;
- (id)initWithPath:(id)arg1 resultProviderID:(int)arg2;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (void)rememberComponent:(id)arg1 forKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg2;
- (void)rememberPlaceData:(id)arg1;
- (int)resultProviderID;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)shrinkBySize:(unsigned long long)arg1 callback:(id /* block */)arg2 onQueue:(id)arg3;
- (void)tearDown;

@end
