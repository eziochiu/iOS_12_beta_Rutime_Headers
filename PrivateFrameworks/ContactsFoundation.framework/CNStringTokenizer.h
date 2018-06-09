/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNStringTokenizer : NSObject {
    NSObject<OS_dispatch_queue> * _syncQueue;
    struct __CFStringTokenizer { } * _tokenizer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) struct __CFStringTokenizer { }*tokenizer;

+ (id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2;
+ (bool)isCharacterNonBreaking:(unsigned short)arg1;
+ (id)tokenizeString:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)rangesOfWordTokensInString:(id)arg1;
- (id)rangesOfWordUnitTokensInString:(id)arg1;
- (id)syncQueue;
- (id)tokenizeString:(id)arg1;
- (struct __CFStringTokenizer { }*)tokenizer;

@end
