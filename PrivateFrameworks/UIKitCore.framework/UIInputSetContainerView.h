/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost> {
    bool  _disableGeometryObserverNotifications;
    NSMutableDictionary * _hostedViews;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetOrigin;
    UIKBRenderConfig * _renderConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) UIScreen *hostingScreen;
@property (nonatomic) struct CGPoint { double x1; double x2; } offsetOrigin;
@property (readonly) Class superclass;

+ (bool)_notifyOnExplicitLayout;
+ (bool)_shouldHitTestInputViewFirst;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessoryViewFrame;
- (void)_didRemoveSubview:(id)arg1;
- (bool)_disableGeometryObserverNotification;
- (id)_inheritedRenderConfig;
- (id)_inputWindowController;
- (void)_setAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)addHostedView:(id)arg1 withViewRemovalHandler:(id /* block */)arg2;
- (void)dealloc;
- (bool)hasHostedViews;
- (id)hostingScreen;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })offsetOrigin;
- (void)performWithoutGeometryObserverNotifications:(id /* block */)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOffsetOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (int)textEffectsVisibilityLevel;

@end
