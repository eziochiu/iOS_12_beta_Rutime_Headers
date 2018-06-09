/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) bool altKey;
@property (readonly) unsigned short button;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) bool ctrlKey;
@property (readonly) DOMNode *fromElement;
@property (readonly) bool metaKey;
@property (readonly) int offsetX;
@property (readonly) int offsetY;
@property (readonly) <DOMEventTarget> *relatedTarget;
@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) bool shiftKey;
@property (readonly) DOMNode *toElement;
@property (readonly) int x;
@property (readonly) int y;

- (bool)altKey;
- (unsigned short)button;
- (int)clientX;
- (int)clientY;
- (bool)ctrlKey;
- (id)fromElement;
- (void)initMouseEvent:(id)arg1 :(bool)arg2 :(bool)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(bool)arg10 :(bool)arg11 :(bool)arg12 :(bool)arg13 :(unsigned short)arg14 :(id)arg15;
- (void)initMouseEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(bool)arg10 altKey:(bool)arg11 shiftKey:(bool)arg12 metaKey:(bool)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15;
- (bool)metaKey;
- (int)offsetX;
- (int)offsetY;
- (id)relatedTarget;
- (int)screenX;
- (int)screenY;
- (bool)shiftKey;
- (id)toElement;
- (int)x;
- (int)y;

@end
