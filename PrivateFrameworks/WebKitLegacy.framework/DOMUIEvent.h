/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMUIEvent : DOMEvent

@property (readonly) int charCode;
@property (readonly) int detail;
@property (readonly) int keyCode;
@property (readonly) int layerX;
@property (readonly) int layerY;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) DOMAbstractView *view;
@property (readonly) int which;

- (int)charCode;
- (int)detail;
- (void)initUIEvent:(id)arg1 :(bool)arg2 :(bool)arg3 :(id)arg4 :(int)arg5;
- (void)initUIEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 detail:(int)arg5;
- (int)keyCode;
- (int)layerX;
- (int)layerY;
- (int)pageX;
- (int)pageY;
- (id)view;
- (int)which;

@end
