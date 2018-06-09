/* made by EzioChiu.
 */

@protocol _GEOTileDBWriteOperation <NSObject>

@required

- (bool)canIncreaseDataSizeInDB;
- (NSData *)dataForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(bool*)arg4;
- (bool)isSupercededByOperation:(id <_GEOTileDBWriteOperation>)arg1;
- (void)performWithDB:(GEOTileDB *)arg1;
- (unsigned long long)sizeInBytes;

@end
