/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayTile : VKTile {
    float  _maximumStyleZ;
    NSMutableArray * _overlays;
    VKVectorTile * _roadTile;
    NSMapTable * _tileForOverlay;
}

@property (nonatomic, readonly) float maximumStyleZ;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, retain) VKVectorTile *roadTile;

- (void)addOverlay:(id)arg1;
- (void)dealloc;
- (float)maximumStyleZ;
- (id)overlays;
- (id)roadTile;
- (void)setRoadTile:(id)arg1;
- (void)setTile:(id)arg1 forOverlay:(id)arg2;
- (id)tileForOverlay:(id)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;

@end
