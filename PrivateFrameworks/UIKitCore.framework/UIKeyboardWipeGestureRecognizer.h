/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {
    NSMutableArray * _endPoints;
    UITouch * candidateEndpoint;
}

@property (nonatomic, retain) UITouch *candidateEndpoint;

- (id)candidateEndpoint;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (bool)segmentsLookLikeAWipe:(id)arg1;
- (void)setCandidateEndpoint:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
