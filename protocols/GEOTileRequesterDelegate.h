/* made by EzioChiu.
 */

@protocol GEOTileRequesterDelegate

@required

- (void)tileRequester:(GEOTileRequester *)arg1 receivedData:(NSData *)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(NSString *)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg6 userInfo:(NSDictionary *)arg7;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedError:(NSError *)arg2;
- (void)tileRequesterFinished:(GEOTileRequester *)arg1;

@end
