/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLTagger : NSObject {
    NSMutableDictionary * _classifierCaches;
    NSMutableDictionary * _customModelDictionaries;
    NSMutableDictionary * _customModels;
    NSArray * _schemes;
    NSMutableDictionary * _sequenceCaches;
    NSString * _string;
    void * _tagger;
}

@property (nonatomic, readonly, copy) NSString *dominantLanguage;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, readonly, copy) NSArray *tagSchemes;

+ (id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2;

- (void).cxx_destruct;
- (id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3;
- (id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2;
- (id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 modelDictionary:(id)arg4;
- (id)_customTagDictionaryForSentence:(id)arg1 model:(id)arg2;
- (id)_tagSchemeForScheme:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dominantLanguage;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(id /* block */)arg5;
- (id)initWithTagSchemes:(id)arg1;
- (id)modelsForTagScheme:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sentenceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLanguage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setModels:(id)arg1 forTagScheme:(id)arg2;
- (void)setOrthography:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setString:(id)arg1;
- (id)string;
- (void)stringEditedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)tagSchemes;
- (id)tagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2;

@end
