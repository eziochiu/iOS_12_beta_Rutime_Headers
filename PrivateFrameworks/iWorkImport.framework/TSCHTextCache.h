/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTextCache : NSObject {
    TSUCache * mEqualDigitWidthFont;
    TSUCache * mNumberWidthCache;
    TSUCache * mTSWPColumnCache;
    TSUCache * mTSWPTextCache;
}

- (void).cxx_destruct;
- (void)clear;
- (id)columnForKey:(id)arg1;
- (id)equalDigitWidthForFontName:(id)arg1;
- (id)init;
- (id)numberStringSizeForKey:(id)arg1;
- (void)setColumn:(id)arg1 forKey:(id)arg2;
- (void)setEqualDigitWidth:(id)arg1 forFontName:(id)arg2;
- (void)setNumberStringSize:(id)arg1 forKey:(id)arg2;
- (void)setText:(id)arg1 forKey:(id)arg2;
- (id)textForKey:(id)arg1;

@end