/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _VKTileProviderTimerTarget : NSObject {
    VKTileProvider * _tileProvider;
    VKTileProvider * tileProvider;
}

@property (nonatomic) VKTileProvider *tileProvider;

- (void)setTileProvider:(id)arg1;
- (id)tileProvider;
- (void)timerFired:(id)arg1;

@end
