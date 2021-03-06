/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPHardPressGestureRecognizer : _UINonEditableTextSelectionForceGesture {
    unsigned long long  _previousPressCount;
    TSWPRep * _targetRep;
}

@property (nonatomic, readonly) unsigned long long currentPressCount;
@property (nonatomic) unsigned long long previousPressCount;
@property (nonatomic, retain) TSWPRep *targetRep;

- (unsigned long long)currentPressCount;
- (void)dealloc;
- (unsigned long long)previousPressCount;
- (void)setPreviousPressCount:(unsigned long long)arg1;
- (void)setTargetRep:(id)arg1;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (id)targetRep;

@end
