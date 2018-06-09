/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMap_zh : TIKeyEventMap

+ (id)punctuationMap_zh_Hans;
+ (id)punctuationMap_zh_Hant;
+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (bool)isURLOrEmailKeyboardInKeyboardState:(id)arg1;
- (id)punctuationMap;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;

@end
