/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragEventSample : NSObject {
    bool  _hasBeenDelivered;
    bool  _isApplicationEnter;
    bool  _isApplicationExit;
    bool  _isApplicationWithin;
    bool  _isDragEnd;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sceneLocation;
    UIWindow * _window;
    unsigned int  _windowServerHitTestContextID;
}

@property (nonatomic) bool hasBeenDelivered;
@property (nonatomic, readonly) bool isApplicationEnter;
@property (nonatomic, readonly) bool isApplicationExit;
@property (nonatomic, readonly) bool isApplicationWithin;
@property (nonatomic, readonly) bool isDragEnd;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } sceneLocation;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) unsigned int windowServerHitTestContextID;

+ (id)interpolatedSampleFromSample:(id)arg1;
+ (id)sampleFromHIDEvent:(struct __IOHIDEvent { }*)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)hasBeenDelivered;
- (id)hitTestWithEvent:(id)arg1 constrainToWindowServerHitTestContext:(bool)arg2;
- (bool)isApplicationEnter;
- (bool)isApplicationExit;
- (bool)isApplicationWithin;
- (bool)isDragEnd;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (struct CGPoint { double x1; double x2; })sceneLocation;
- (void)setHasBeenDelivered:(bool)arg1;
- (id)window;
- (unsigned int)windowServerHitTestContextID;

@end
