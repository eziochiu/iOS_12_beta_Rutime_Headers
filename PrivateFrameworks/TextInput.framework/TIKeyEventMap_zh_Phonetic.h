/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMap_zh_Phonetic : TIKeyEventMap_zh

+ (id)inlineNumbersAndPunctuationSet;
+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;

@end
