/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKNLEventTokenizer : NSObject {
    NSString * _languageID;
    struct __CFStringTokenizer { } * _tokenizer;
}

@property (readonly) NSString *languageID;
@property struct __CFStringTokenizer { }*tokenizer;

+ (void)initialize;
+ (bool)isSpecialToken:(id)arg1;

- (void).cxx_destruct;
- (id)buildTokenSquence:(id)arg1 withOffset:(unsigned long long)arg2;
- (void)dealloc;
- (id)getTokens:(id)arg1;
- (bool)hasEmoticon:(id)arg1;
- (id)initWithLanguageID:(id)arg1;
- (id)languageID;
- (id)processForEmoticons:(id)arg1;
- (id)processForEmoticonsAndEmojis:(id)arg1;
- (id)processForHyphenation:(id)arg1;
- (void)setTokenizer:(struct __CFStringTokenizer { }*)arg1;
- (id)tokenizeWithDataDetectors:(id)arg1;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)transform:(id)arg1;

@end
