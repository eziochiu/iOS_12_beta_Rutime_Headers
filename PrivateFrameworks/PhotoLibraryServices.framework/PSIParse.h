/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIParse : NSObject {
    PSIQueryToken * _dateToken;
    NSString * _string;
    NSArray * _tokens;
}

@property (nonatomic, retain) PSIQueryToken *dateToken;
@property (nonatomic, readonly) unsigned long long numberOfTokens;

- (void).cxx_destruct;
- (id)dateToken;
- (id)description;
- (id)descriptionWithToken:(id)arg1;
- (void)enumerateTokensUsingBlock:(id /* block */)arg1;
- (id)initWithToken:(id)arg1;
- (id)initWithTokens:(id)arg1 fromString:(id)arg2;
- (unsigned long long)numberOfTokens;
- (id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2;
- (id)parseByReplacingTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTokens:(id)arg2;
- (void)setDateToken:(id)arg1;

@end
