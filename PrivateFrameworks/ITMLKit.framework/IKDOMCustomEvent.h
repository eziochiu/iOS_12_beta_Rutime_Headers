/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent> {
    IKJSObject * _detail;
}

@property (nonatomic, readonly) bool bubbles;
@property (nonatomic, readonly) bool cancelable;
@property (nonatomic, readonly, retain) IKDOMNode *currentTarget;
@property (nonatomic, readonly) bool defaultPrevented;
@property (nonatomic, retain) IKJSObject *detail;
@property (nonatomic, readonly) long long eventPhase;
@property (nonatomic, readonly, retain) IKDOMNode *target;
@property (nonatomic, readonly) NSDate *timeStamp;
@property (nonatomic, readonly, retain) NSString *type;

- (void).cxx_destruct;
- (id)detail;
- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(bool)arg4 isCancelable:(bool)arg5 detail:(id)arg6;
- (id)initWithType:(id)arg1 eventInit:(id)arg2;
- (void)setDetail:(id)arg1;

@end
