/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAutoscroll : NSObject {
    id  _target;
    bool  m_active;
    unsigned long long  m_count;
    int  m_directions;
    bool  m_disabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_point;
    double  m_repeatInterval;
    UIView<UIAutoscrollContainer> * m_scrollContainer;
    id  m_target;
    NSTimer * m_timer;
}

@property (nonatomic) bool active;
@property (nonatomic) unsigned long long count;
@property (nonatomic) int directions;
@property (nonatomic) bool disabled;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) double repeatInterval;
@property (nonatomic, retain) UIView<UIAutoscrollContainer> *scrollContainer;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (bool)active;
- (unsigned long long)count;
- (void)dealloc;
- (int)directions;
- (bool)disabled;
- (void)invalidate;
- (struct CGPoint { double x1; double x2; })point;
- (double)repeatInterval;
- (id)scrollContainer;
- (void)setActive:(bool)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDirections:(int)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRepeatInterval:(double)arg1;
- (void)setScrollContainer:(id)arg1;
- (void)setTarget:(id)arg1;
- (bool)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 directions:(int)arg4 repeatInterval:(double)arg5;
- (id)target;
- (void)timerFired:(id)arg1;

@end
