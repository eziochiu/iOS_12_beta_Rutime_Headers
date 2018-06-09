/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationPhrase : NSObject {
    NSArray * _alternativeInterpretations;
    NSString * _text;
}

@property (nonatomic, readonly) NSArray *alternativeInterpretations;
@property (nonatomic, readonly) NSString *text;

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;

- (id)alternativeInterpretations;
- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2;
- (id)text;

@end
