/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMockVectorTileRequester : GEOTileRequester

+ (unsigned char)tileProviderIdentifier;

- (void)fakeLoadTile;
- (id)getTileData:(id)arg1;
- (void)start;

@end
