/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDDragInsertionContext : TSDInsertionContext {
    bool  mFromDragToInsertController;
    bool  mInsertWillBeDiscarded;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPreferredCenter;
    bool  mPreferredCenterRequired;
    bool  mShouldEndEditing;
}

- (bool)fromDragToInsertController;
- (bool)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(struct CGPoint { double x1; double x2; })arg1 required:(bool)arg2 shouldEndEditing:(bool)arg3 fromDragToInsertController:(bool)arg4 insertWillBeDiscarded:(bool)arg5;
- (bool)insertFloating;
- (bool)insertFromDrag;
- (bool)insertWillBeDiscarded;
- (bool)isInteractive;
- (bool)isPreferredCenterRequired;
- (struct CGPoint { double x1; double x2; })preferredCenter;
- (bool)shouldEndEditing;

@end