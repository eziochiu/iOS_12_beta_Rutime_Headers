/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMMutationEvent : DOMEvent

@property (readonly) unsigned short attrChange;
@property (readonly, copy) NSString *attrName;
@property (readonly, copy) NSString *newValue;
@property (readonly, copy) NSString *prevValue;
@property (readonly) DOMNode *relatedNode;

- (unsigned short)attrChange;
- (id)attrName;
- (void)initMutationEvent:(id)arg1 :(bool)arg2 :(bool)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(id)arg7 :(unsigned short)arg8;
- (void)initMutationEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8;
- (id)newValue;
- (id)prevValue;
- (id)relatedNode;

@end
