/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusMapSnapshotter : NSObject {
    _UIFocusRegionContentAttributes * _contentAttributes;
    <UICoordinateSpace> * _coordinateSpace;
    UIFocusSystem * _focusSystem;
    _UIFocusRegion * _focusedRegion;
    <_UIFocusRegionContainer> * _regionsContainer;
    <_UIFocusRegionContainer> * _rootContainer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotFrame;
    bool  _snapshotFrameIsEmpty;
}

@property (nonatomic, readonly, copy) _UIFocusRegionContentAttributes *contentAttributes;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, copy) _UIFocusRegion *focusedRegion;
@property (nonatomic) <_UIFocusRegionContainer> *regionsContainer;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *rootContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotFrame;

- (void).cxx_destruct;
- (id)_searchAreaForContainerSearchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)captureSnapshot;
- (id)contentAttributes;
- (id)coordinateSpace;
- (id)focusSystem;
- (id)focusedRegion;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3;
- (id)regionsContainer;
- (id)rootContainer;
- (void)setFocusedRegion:(id)arg1;
- (void)setRegionsContainer:(id)arg1;
- (void)setSnapshotFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotFrame;

@end