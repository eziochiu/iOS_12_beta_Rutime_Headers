/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneSnapshot : NSObject {
    FBSceneSnapshotContext * _context;
    FBScene * _scene;
    XBDisplaySnapshot * _snapshot;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurface;
@property (nonatomic, readonly) UIImage *UIImage;
@property (nonatomic, readonly) FBSceneSnapshotContext *context;
@property (getter=isDataLoaded, nonatomic, readonly) bool dataLoaded;
@property (nonatomic, readonly) struct __IOSurface { }*fallbackIOSurface;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct __IOSurface { }*)IOSurface;
- (id)UIImage;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2;
- (id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3;
- (bool)capture;
- (id)context;
- (struct __IOSurface { }*)fallbackIOSurface;
- (id)initWithScene:(id)arg1 snapshotContext:(id)arg2;
- (bool)isDataLoaded;

@end