/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataDBReader : GEODBReader {
    struct sqlite3_stmt { } * _sqlAllComponents;
    struct sqlite3_stmt { } * _sqlAllComponentsForPlaceData;
    struct sqlite3_stmt { } * _sqlAllComponentsPerPlaceData;
    struct sqlite3_stmt { } * _sqlAllPhoneNumbers;
    struct sqlite3_stmt { } * _sqlMUIDForPhoneNumber;
}

- (void)_closeDB;
- (void)_openDB;
- (void)_openDBIfNotAlreadyOpen;
- (id)_placeDataForIdentifier:(unsigned long long)arg1;
- (id)allCacheEntries;
- (id)componentForKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg1;
- (id)initWithPath:(id)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;

@end
