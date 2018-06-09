/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKClassification : NSObject {
    NSArray * _customResponses;
    unsigned long long  _gender;
    NSString * _language;
    NSArray * _matchedRanges;
    int  _sensitive;
    NSArray * _sentenceEntities;
    unsigned long long  _sentenceType;
    NSString * _taggedText;
}

@property (retain) NSArray *customResponses;
@property unsigned long long gender;
@property (retain) NSString *language;
@property (retain) NSArray *matchedRanges;
@property (getter=isSensitive) int sensitive;
@property (retain) NSArray *sentenceEntities;
@property unsigned long long sentenceType;
@property (retain) NSString *taggedText;

- (void).cxx_destruct;
- (id)customResponses;
- (unsigned long long)gender;
- (id)init;
- (int)isSensitive;
- (id)language;
- (id)matchedRanges;
- (id)sentenceEntities;
- (unsigned long long)sentenceType;
- (void)setCustomResponses:(id)arg1;
- (void)setGender:(unsigned long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMatchedRanges:(id)arg1;
- (void)setSensitive:(int)arg1;
- (void)setSentenceEntities:(id)arg1;
- (void)setSentenceType:(unsigned long long)arg1;
- (void)setTaggedText:(id)arg1;
- (id)taggedText;

@end
