/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate> {
    id /* block */  _outsideTapBlock;
    UITapGestureRecognizer * _recognizer;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ outsideTapBlock;
@property (nonatomic, retain) UITapGestureRecognizer *recognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (id)initWithView:(id)arg1 outsideTapBlock:(id /* block */)arg2;
- (id /* block */)outsideTapBlock;
- (id)recognizer;
- (void)setOutsideTapBlock:(id /* block */)arg1;
- (void)setRecognizer:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
