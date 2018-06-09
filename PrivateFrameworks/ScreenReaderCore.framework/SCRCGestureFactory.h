/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureFactory : NSObject {
    unsigned long long  _absoluteFingerCount;
    struct { 
        double horizontal; 
        double vertical; 
    }  _axisFlipper;
    <SCRCGestureFactoryCallback> * _canSplitTapDelegate;
    int  _direction;
    double  _directionalSlope;
    int  _directions;
    double  _distance;
    double  _echoWaitTime;
    struct SCRCFingerState { 
        unsigned long long identifier; 
        int xDirection; 
        int yDirection; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            double fifo[50]; 
            int fifoIndex; 
            double sum; 
            double average; 
            double current; 
        } normalizedVelocityPerSample; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            double fifo[50]; 
            int fifoIndex; 
            double sum; 
            double average; 
            double current; 
        } deltaXPerSample; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            double fifo[50]; 
            int fifoIndex; 
            double sum; 
            double average; 
            double current; 
        } deltaYPerSample; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            double fifo[50]; 
            int fifoIndex; 
            double sum; 
            double average; 
            double current; 
        } distancePerSample; 
        double distanceTraveledWithInertiaApplied; 
        bool dragStalled; 
        unsigned long long type; 
        struct CGPoint { 
            double x; 
            double y; 
        } startTouchPoint; 
        struct CGPoint { 
            double x; 
            double y; 
        } mostRecentTouchPoint; 
        struct CGPoint { 
            double x; 
            double y; 
        } lastDownPoint; 
        double pressure; 
        double altitude; 
        double azimuth; 
    }  _finger;
    unsigned short  _fingerCount;
    double  _flickVelocityThreshold;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gutterFrame;
    <SCRCGestureFactoryCallback> * _gutterUpDelegate;
    SCRCTargetSelectorTimer * _gutterUpTimer;
    bool  _inTapSpeedRegionForDownEvent;
    double  _lastDegrees;
    double  _lastDownTime;
    unsigned short  _lastFingerCount;
    double  _lastGutterDownTime;
    double  _lastTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mainFrame;
    double  _maxDimension;
    int  _orientation;
    double  _potentialTrackingStartTimestamp;
    bool  _requireUp;
    double  _scaledTrackingDistance;
    bool  _setTrackingTimer;
    struct { 
        bool isSplitting; 
        bool isTapping; 
        bool fastTrack; 
        bool tapDead; 
        bool timedOut; 
        bool active; 
        unsigned long long fingerIdentifier; 
        double fingerDownTime; 
        struct CGPoint { 
            double x; 
            double y; 
        } startTapLocation; 
        struct CGPoint { 
            double x; 
            double y; 
        } lastTapLocation; 
        struct CGPoint { 
            double x; 
            double y; 
        } primaryFingerLocation; 
        double tapDistance; 
        int state; 
    }  _split;
    SCRCGestureFactory * _splitFactory;
    <SCRCGestureFactoryCallback> * _splitTapDelegate;
    double  _stallDistance;
    double  _startDegrees;
    double  _startDistance;
    int  _state;
    struct { 
        bool isFingerCurrentlyDown; 
        bool dead; 
        bool gutterHasBeenTouched; 
        unsigned long long numFingersInCurrentGestureEvent; 
        unsigned long long totalNumFingersInGesture; 
        unsigned long long count; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } frame; 
        struct CGPoint { 
            double x; 
            double y; 
        } location[8]; 
        struct CGPoint { 
            double x; 
            double y; 
        } locationPerTap[8]; 
        double thisTime; 
        double lastTime; 
    }  _tap;
    unsigned long long  _tapCount;
    <SCRCGestureFactoryCallback> * _tapDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tapFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tapMultiFrame;
    long long  _tapSpeedFingerCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tapSpeedRegion;
    SCRCTargetSelectorTimer * _tapTimer;
    double  _tapVelocityThreshold;
    double  _tapVelocityThresholdForRegion;
    double  _thumbRegion;
    bool  _thumbRejectionEnabled;
    <SCRCGestureFactoryCallback> * _trackDelegate;
    SCRCTargetSelectorTimer * _trackingTimer;
}

@property (nonatomic) bool thumbRejectionEnabled;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_currentTapRect;
- (void)_down:(id)arg1;
- (void)_drag:(id)arg1;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleGutterUp;
- (bool)_handleSplitEvent:(id)arg1;
- (bool)_handleSplitTap;
- (void)_handleTap;
- (void)_processUpAndPost:(bool)arg1;
- (void)_up;
- (void)_updateMultiTapFrame;
- (void)_updateStartWithPoint:(struct CGPoint { double x1; double x2; })arg1 time:(double)arg2;
- (void)_updateTapState;
- (unsigned long long)absoluteFingerCount;
- (struct { int x1; int x2; double x3; double x4; double x5; double x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; struct CGPoint { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; struct CGPoint { double x_15_1_1; double x_15_1_2; } x15; struct CGPoint { double x_16_1_1; double x_16_1_2; } x16; struct CGPoint { double x_17_1_1; double x_17_1_2; } x17; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_18_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_18_1_2; } x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; struct CGPoint { double x_20_1_1; double x_20_1_2; } x20; struct CGPoint { double x_21_1_1; double x_21_1_2; } x21; double x22; })captureCurrentState;
- (void)dealloc;
- (int)direction;
- (double)directionalSlope;
- (double)distance;
- (struct CGPoint { double x1; double x2; })endLocation;
- (unsigned long long)fingerCount;
- (double)firstFingerAltitude;
- (double)firstFingerAzimuth;
- (double)firstFingerPressure;
- (double)flickSpeed;
- (int)gestureState;
- (id)gestureStateString;
- (struct { int x1; int x2; double x3; double x4; double x5; double x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; struct CGPoint { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; struct CGPoint { double x_15_1_1; double x_15_1_2; } x15; struct CGPoint { double x_16_1_1; double x_16_1_2; } x16; struct CGPoint { double x_17_1_1; double x_17_1_2; } x17; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_18_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_18_1_2; } x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; struct CGPoint { double x_20_1_1; double x_20_1_2; } x20; struct CGPoint { double x_21_1_1; double x_21_1_2; } x21; double x22; })handleGestureEvent:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 delegate:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mainFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })multiTapFrame;
- (int)orientation;
- (struct CGPoint { double x1; double x2; })rawAverageLocation;
- (struct CGPoint { double x1; double x2; })rawLocation;
- (void)reset;
- (void)setFlickSpeed:(double)arg1;
- (void)setOrientation:(int)arg1;
- (void)setTapSpeed:(double)arg1;
- (void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fingerCount:(long long)arg3;
- (void)setThumbRejectionEnabled:(bool)arg1;
- (struct CGPoint { double x1; double x2; })startLocation;
- (unsigned long long)tapCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tapFrame;
- (double)tapInterval;
- (bool)tapIsDown;
- (struct CGPoint { double x1; double x2; })tapPoint;
- (struct CGPoint { double x1; double x2; })tapPointWeightedToSides;
- (double)tapSpeed;
- (bool)thumbRejectionEnabled;
- (double)vector;
- (double)velocity;

@end
