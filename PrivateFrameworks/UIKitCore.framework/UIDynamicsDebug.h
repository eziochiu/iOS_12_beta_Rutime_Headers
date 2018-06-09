/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDynamicsDebug : NSObject <GLKViewDelegate> {
    UIDynamicAnimator * _animator;
    EAGLContext * _ctx;
    GLKView * _debugView;
    GLKBaseEffect * _effect;
    bool  _enabled;
    bool  _showFields;
    bool  _showOutlineInterior;
    bool  _showPhysics;
    unsigned int  _vertexBuffer;
    struct { 
        struct { 
            float x; 
            float y; 
        } position; 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*color; 
    }  _vertices;
}

@property (nonatomic) UIDynamicAnimator *animator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) GLKView *debugView;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showFields;
@property (nonatomic) bool showOutlineInterior;
@property (nonatomic) bool showPhysics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupDebugViewIfNeccessary;
- (void)_teardownDebugView;
- (id)animator;
- (void)captureDebugInformation;
- (void)dealloc;
- (id)debugView;
- (bool)enabled;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)init;
- (id)initWithAnimator:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setDebugView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setShowFields:(bool)arg1;
- (void)setShowOutlineInterior:(bool)arg1;
- (void)setShowPhysics:(bool)arg1;
- (bool)showFields;
- (bool)showOutlineInterior;
- (bool)showPhysics;

@end
