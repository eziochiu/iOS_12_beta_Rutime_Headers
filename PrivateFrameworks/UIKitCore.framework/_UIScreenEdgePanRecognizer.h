/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
    <_UIScreenEdgePanRecognizerDelegate> * _delegate;
    double  _gestureRestrictionFactor;
    bool  _hasDoneInitialBackProjectionTest;
    bool  _hasRecordedData;
    long long  _initialInterfaceOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    double  _initialTouchTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    long long  _lastTouchModifier;
    double  _lastTouchTimestamp;
    UIDelayedAction * _recognitionTimer;
    bool  _recognizeAlongEdge;
    bool  _recognizeImmediatelyFromEdgeLocked;
    unsigned long long  _recognizedRegion;
    bool  _requiresFlatThumb;
    bool  _requiresLongPress;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenBounds;
    _UIScreenEdgePanRecognizerSettings * _settings;
    bool  _shouldUseGrapeFlags;
    long long  _state;
    unsigned long long  _targetEdges;
    unsigned long long  _touchedRegion;
    long long  _type;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _lastTouchLocation;
@property (readonly, copy) NSString *debugDescription;
@property <_UIScreenEdgePanRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRecordedData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recognizeAlongEdge;
@property (nonatomic) bool recognizeImmediatelyFromEdgeLocked;
@property (nonatomic, readonly) unsigned long long recognizedRegion;
@property (nonatomic) bool requiresFlatThumb;
@property (getter=isRequiringLongPress, nonatomic, readonly) bool requiringLongPress;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerSettings *settings;
@property (nonatomic) bool shouldUseGrapeFlags;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetEdges;
@property (nonatomic, readonly) bool useGrapeFlags;

+ (bool)_edgeSwipeNavigationGestureEnabled;

- (void).cxx_destruct;
- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (struct CGPoint { double x1; double x2; })_lastTouchLocation;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_setState:(long long)arg1;
- (unsigned long long)_targetEdges;
- (long long)_type;
- (void)dealloc;
- (id)delegate;
- (bool)hasRecordedData;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4 forceState:(long long)arg5;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 settings:(id)arg2;
- (bool)isRequiringLongPress;
- (bool)recognizeAlongEdge;
- (bool)recognizeImmediatelyFromEdgeLocked;
- (unsigned long long)recognizedRegion;
- (bool)requiresFlatThumb;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setDelegate:(id)arg1;
- (void)setRecognizeAlongEdge:(bool)arg1;
- (void)setRecognizeImmediatelyFromEdgeLocked:(bool)arg1;
- (void)setRequiresFlatThumb:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSettings:(id)arg1;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldUseGrapeFlags;
- (long long)state;
- (unsigned long long)targetEdges;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
- (bool)useGrapeFlags;

@end
