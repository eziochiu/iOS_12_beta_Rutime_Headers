/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITouch : NSObject <_UIResponderForwardable> {
    <_UITouchPhaseChangeDelegate> * __phaseChangeDelegate;
    UIWindow * __windowServerHitTestWindow;
    double  _altitudeAngle;
    double  _azimuthAngleInCADisplay;
    double  _azimuthAngleInWindow;
    struct CGSize { 
        double width; 
        double height; 
    }  _displacement;
    bool  _eaten;
    unsigned long long  _edgeAim;
    long long  _edgeType;
    long long  _forceCorrelationToken;
    NSMutableArray * _forwardingRecord;
    NSMutableArray * _gestureRecognizers;
    bool  _hasForceUpdate;
    struct __IOHIDEvent { } * _hidEvent;
    double  _initialTouchTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInWindow;
    double  _majorRadiusTolerance;
    double  _maxObservedPressure;
    double  _maximumPossiblePressure;
    double  _movementMagnitudeSquared;
    bool  _needsForceUpdate;
    unsigned char  _pathIdentity;
    unsigned char  _pathIndex;
    double  _pathMajorRadius;
    long long  _phase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preciseLocationInWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _precisePreviousLocationInWindow;
    double  _pressure;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLocationInWindow;
    double  _previousPressure;
    unsigned long long  _senderID;
    unsigned long long  _tapCount;
    double  _timestamp;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
        unsigned int _abandonForwardingRecord : 1; 
        unsigned int _deliversUpdatesInTouchesMovedIsValid : 1; 
        unsigned int _deliversUpdatesInTouchesMoved : 1; 
        unsigned int _isPredictedTouch : 1; 
        unsigned int _didDispatchAsEnded : 1; 
    }  _touchFlags;
    unsigned int  _touchIdentifier;
    long long  _type;
    UIView * _view;
    UIView * _warpedIntoView;
    UIWindow * _window;
    float  _zGradient;
}

@property (setter=_setDisplacement:, nonatomic) struct CGSize { double x1; double x2; } _displacement;
@property (getter=_isEaten, setter=_setEaten:, nonatomic) bool _eaten;
@property (setter=_setEdgeAim:, nonatomic) unsigned long long _edgeAim;
@property (setter=_setEdgeType:, nonatomic) long long _edgeType;
@property (setter=_setForceCorrelationToken:, nonatomic) long long _forceCorrelationToken;
@property (setter=_setForwardablePhase:, nonatomic) long long _forwardablePhase;
@property (setter=_setHasForceUpdate:, nonatomic) bool _hasForceUpdate;
@property (setter=_setHidEvent:, nonatomic) struct __IOHIDEvent { }*_hidEvent;
@property (setter=_setIsPredictedTouch:, nonatomic) bool _isPredictedTouch;
@property (setter=_setMaximumPossiblePressure:, nonatomic) double _maximumPossiblePressure;
@property (setter=_setNeedsForceUpdate:, nonatomic) bool _needsForceUpdate;
@property (setter=_setPathIdentity:, nonatomic) unsigned char _pathIdentity;
@property (setter=_setPathIndex:, nonatomic) unsigned char _pathIndex;
@property (setter=_setPhaseChangeDelegate:, nonatomic, retain) <_UITouchPhaseChangeDelegate> *_phaseChangeDelegate;
@property (nonatomic, readonly) double _pressure;
@property (nonatomic, readonly) bool _respectsCharge;
@property (setter=_setResponder:, nonatomic, retain) UIResponder *_responder;
@property (setter=_setSenderID:, nonatomic) unsigned long long _senderID;
@property (nonatomic, readonly) double _unclampedForce;
@property (setter=_setWindowServerHitTestWindow:, nonatomic, retain) UIWindow *_windowServerHitTestWindow;
@property (setter=_setZGradient:, nonatomic) float _zGradient;
@property (setter=_setAltitudeAngle:, nonatomic) double altitudeAngle;
@property (nonatomic, readonly) double azimuthAngle;
@property (setter=_setAzimuthAngleInCADisplay:, nonatomic) double azimuthAngleInCADisplay;
@property (nonatomic, readonly) double azimuthAngleInWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedProperties;
@property (nonatomic, readonly) long long estimatedPropertiesExpectingUpdates;
@property (nonatomic, readonly) NSNumber *estimationUpdateIndex;
@property (nonatomic, readonly) double force;
@property (nonatomic, readonly, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) bool isTap;
@property (nonatomic) double majorRadius;
@property (nonatomic) double majorRadiusTolerance;
@property (nonatomic, readonly) double maximumPossibleForce;
@property (nonatomic) long long phase;
@property (nonatomic) bool sentTouchesEnded;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tapCount;
@property (nonatomic) double timestamp;
@property (setter=_setType:, nonatomic) long long type;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, retain) UIView *warpedIntoView;
@property (nonatomic, retain) UIWindow *window;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(long long)arg2 view:(id)arg3;

- (void).cxx_destruct;
- (void)_abandonForwardingRecord;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)_clone;
- (void)_clonePropertiesToTouch:(id)arg1;
- (long long)_compareIndex:(id)arg1;
- (void)_computeAzimuthAngleInWindow;
- (struct CGSize { double x1; double x2; })_displacement;
- (double)_distanceFrom:(id)arg1 inView:(id)arg2;
- (unsigned long long)_edgeAim;
- (bool)_edgeForceActive;
- (bool)_edgeForcePending;
- (long long)_edgeType;
- (long long)_forceCorrelationToken;
- (long long)_forwardablePhase;
- (id)_forwardingRecord;
- (id)_gestureRecognizers;
- (bool)_hasForceUpdate;
- (struct __IOHIDEvent { }*)_hidEvent;
- (bool)_isAbandoningForwardingRecord;
- (bool)_isEaten;
- (bool)_isFirstTouchForView;
- (bool)_isPredictedTouch;
- (bool)_isStationaryRelativeToTouches:(id)arg1;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint { double x1; double x2; })_locationInSceneReferenceSpace;
- (struct CGPoint { double x1; double x2; })_locationInWindow:(id)arg1;
- (double)_maximumPossiblePressure;
- (bool)_mightBeConsideredForForceSystemGesture;
- (id)_mutableForwardingRecord;
- (bool)_needsForceUpdate;
- (unsigned char)_pathIdentity;
- (unsigned char)_pathIndex;
- (float)_pathMajorRadius;
- (id)_phaseChangeDelegate;
- (id)_phaseDescription;
- (double)_pressure;
- (struct CGPoint { double x1; double x2; })_previousLocationInSceneReferenceSpace;
- (struct CGPoint { double x1; double x2; })_previousLocationInWindow:(id)arg1;
- (id)_rehitTest;
- (void)_removeGestureRecognizer:(id)arg1;
- (bool)_respectsCharge;
- (id)_responder;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (unsigned long long)_senderID;
- (void)_setAltitudeAngle:(double)arg1;
- (void)_setAzimuthAngleInCADisplay:(double)arg1;
- (void)_setDisplacement:(struct CGSize { double x1; double x2; })arg1;
- (void)_setEaten:(bool)arg1;
- (void)_setEdgeAim:(unsigned long long)arg1;
- (void)_setEdgeType:(long long)arg1;
- (void)_setForceCorrelationToken:(long long)arg1;
- (void)_setForwardablePhase:(long long)arg1;
- (void)_setHasForceUpdate:(bool)arg1;
- (void)_setHidEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setIsFirstTouchForView:(bool)arg1;
- (void)_setIsPredictedTouch:(bool)arg1;
- (void)_setLocation:(struct CGPoint { double x1; double x2; })arg1 preciseLocation:(struct CGPoint { double x1; double x2; })arg2 inWindowResetPreviousLocation:(bool)arg3;
- (void)_setLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 resetPrevious:(bool)arg2;
- (void)_setMaximumPossiblePressure:(double)arg1;
- (void)_setNeedsForceUpdate:(bool)arg1;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathIndex:(unsigned char)arg1;
- (void)_setPhaseChangeDelegate:(id)arg1;
- (void)_setPressure:(double)arg1 resetPrevious:(bool)arg2;
- (void)_setPreviousTouch:(id)arg1;
- (void)_setResponder:(id)arg1;
- (void)_setSenderID:(unsigned long long)arg1;
- (void)_setTouchIdentifier:(unsigned int)arg1;
- (void)_setType:(long long)arg1;
- (void)_setWindowServerHitTestWindow:(id)arg1;
- (void)_setZGradient:(float)arg1;
- (bool)_shouldDeliverTouchForTouchesMoved;
- (double)_standardForceAmount;
- (bool)_supportsForce;
- (unsigned int)_touchIdentifier;
- (double)_unclampedForce;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateMovementMagnitudeFromLocation:(struct CGPoint { double x1; double x2; })arg1 toLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateWithChildEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (void)_willBeDispatchedAsEnded;
- (id)_windowServerHitTestWindow;
- (float)_zGradient;
- (double)altitudeAngle;
- (double)azimuthAngle;
- (double)azimuthAngleInCADisplay;
- (double)azimuthAngleInView:(id)arg1;
- (double)azimuthAngleInWindow;
- (struct CGVector { double x1; double x2; })azimuthUnitVectorInView:(id)arg1;
- (void)dealloc;
- (id)description;
- (long long)estimatedProperties;
- (long long)estimatedPropertiesExpectingUpdates;
- (id)estimationUpdateIndex;
- (double)force;
- (id)gestureRecognizers;
- (long long)info;
- (double)initialTouchTimestamp;
- (bool)isDelayed;
- (bool)isTap;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)majorRadius;
- (double)majorRadiusTolerance;
- (double)maximumPossibleForce;
- (long long)phase;
- (struct CGPoint { double x1; double x2; })preciseLocationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })precisePreviousLocationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })previousLocationInView:(id)arg1;
- (bool)sentTouchesEnded;
- (void)setInitialTouchTimestamp:(double)arg1;
- (void)setIsDelayed:(bool)arg1;
- (void)setIsTap:(bool)arg1;
- (void)setMajorRadius:(double)arg1;
- (void)setMajorRadiusTolerance:(double)arg1;
- (void)setPhase:(long long)arg1;
- (void)setSentTouchesEnded:(bool)arg1;
- (void)setTapCount:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (void)setWarpedIntoView:(id)arg1;
- (void)setWindow:(id)arg1;
- (unsigned long long)tapCount;
- (double)timestamp;
- (long long)type;
- (id)view;
- (id)warpedIntoView;
- (id)window;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (struct CGPoint { double x1; double x2; })pu_locationInPresentationLayerOfView:(id)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (struct CGPoint { double x1; double x2; })locationInNode:(id)arg1;
- (struct CGPoint { double x1; double x2; })previousLocationInNode:(id)arg1;

@end
