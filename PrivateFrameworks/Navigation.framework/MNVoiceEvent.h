/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNVoiceEvent : NSObject {
    id /* block */  _completion;
    unsigned long long  _options;
    unsigned long long  _shortPromptType;
    NSString * _textToSpeak;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long shortPromptType;
@property (nonatomic, readonly, copy) NSString *textToSpeak;

+ (id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (bool)isValidShortPromptType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)initWithPrompt:(unsigned long long)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)isEqualToEvent:(id)arg1;
- (unsigned long long)options;
- (unsigned long long)shortPromptType;
- (id)textToSpeak;

@end
