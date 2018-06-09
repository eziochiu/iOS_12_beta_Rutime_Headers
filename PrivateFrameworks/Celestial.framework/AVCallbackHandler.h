/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVCallbackHandler : NSObject {
    SEL  _action;
    NSCondition * _condition;
    SEL  _mainThreadAction;
    id  _params;
    id  _target;
}

@property SEL action;
@property SEL mainThreadAction;
@property id target;

- (SEL)action;
- (void)dealloc;
- (bool)hasParams;
- (id)init;
- (SEL)mainThreadAction;
- (void)setAction:(SEL)arg1;
- (void)setCallbackParams:(id)arg1;
- (void)setMainThreadAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)waitForCallbackParams;

@end
