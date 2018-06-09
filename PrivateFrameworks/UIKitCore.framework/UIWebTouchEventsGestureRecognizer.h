/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
    bool  _defaultPrevented;
    bool  _dispatchingTouchEvents;
    bool  _isPotentialTap;
    struct _UIWebTouchEvent { 
        int type; 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } locationInScreenCoordinates; 
        struct CGPoint { 
            double x; 
            double y; 
        } locationInDocumentCoordinates; 
        double scale; 
        double rotation; 
        bool inJavaScriptGesture; 
        struct _UIWebTouchPoint {} *touchPoints; 
        unsigned int touchPointCount; 
        bool isPotentialTap; 
    }  _lastTouchEvent;
    double  _originalGestureAngle;
    double  _originalGestureDistance;
    bool  _passedHitTest;
    SEL  _touchAction;
    id  _touchTarget;
    <UIWebTouchEventsGestureRecognizerDelegate> * _webTouchDelegate;
}

@property (getter=isDefaultPrevented, nonatomic) bool defaultPrevented;
@property (getter=isDispatchingTouchEvents, nonatomic, readonly) bool dispatchingTouchEvents;
@property (nonatomic, readonly) bool inJavaScriptGesture;
@property (nonatomic, readonly) const struct _UIWebTouchEvent { int x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; double x5; double x6; bool x7; struct _UIWebTouchPoint {} *x8; unsigned int x9; bool x10; }*lastTouchEvent;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) NSMutableArray *touchIdentifiers;
@property (nonatomic, readonly) NSMutableArray *touchLocations;
@property (nonatomic, readonly) NSMutableArray *touchPhases;
@property (nonatomic, readonly) int type;

+ (bool)_shouldDefaultToTouches;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (void)_updateTapStateWithTouches:(id)arg1;
- (void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)dealloc;
- (bool)inJavaScriptGesture;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;
- (bool)isDefaultPrevented;
- (bool)isDispatchingTouchEvents;
- (const struct _UIWebTouchEvent { int x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; double x5; double x6; bool x7; struct _UIWebTouchPoint {} *x8; unsigned int x9; bool x10; }*)lastTouchEvent;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (void)reset;
- (double)rotation;
- (double)scale;
- (void)setDefaultPrevented:(bool)arg1;
- (id)touchIdentifiers;
- (id)touchLocations;
- (id)touchPhases;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (int)type;

@end
