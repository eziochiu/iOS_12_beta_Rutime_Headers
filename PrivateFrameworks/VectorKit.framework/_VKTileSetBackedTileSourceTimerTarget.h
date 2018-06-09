/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _VKTileSetBackedTileSourceTimerTarget : NSObject {
    VKTileSetBackedTileSource * _tileSource;
}

@property (nonatomic) VKTileSetBackedTileSource *tileSource;

- (void)expireTiles:(id)arg1;
- (void)setTileSource:(id)arg1;
- (id)tileSource;

@end
