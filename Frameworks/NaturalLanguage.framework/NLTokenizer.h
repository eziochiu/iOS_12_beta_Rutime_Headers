/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLTokenizer : NSObject {
    NSString * _language;
    NSString * _string;
    struct __NLTokenizer { } * _tokenizer;
    long long  _unit;
}

@property (nonatomic, retain) NSString *string;
@property (nonatomic, readonly) long long unit;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)initWithUnit:(long long)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeAtIndex:(unsigned long long)arg1;
- (id)tokensForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)unit;

@end
