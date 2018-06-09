/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {
    NSTextAlternatives * _alternatives;
}

@property (nonatomic, readonly) NSTextAlternatives *alternatives;

- (void).cxx_destruct;
- (id)alternatives;
- (id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3;
- (id)replacements;

@end
