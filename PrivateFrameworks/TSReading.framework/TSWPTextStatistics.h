/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTextStatistics : NSObject <NSCopying> {
    unsigned long long  _charactersNoWhiteSpace;
    bool  _isAccurate;
    unsigned long long  _paragraphCount;
    unsigned long long  _wordCount;
}

@property (nonatomic) unsigned long long charactersNoWhiteSpace;
@property (nonatomic) bool isAccurate;
@property (nonatomic) unsigned long long paragraphCount;
@property (nonatomic) unsigned long long wordCount;

- (void)addTextStatistics:(id)arg1;
- (unsigned long long)charactersNoWhiteSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isAccurate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)paragraphCount;
- (void)removeTextStatistics:(id)arg1;
- (void)resetStatistics;
- (void)setCharactersNoWhiteSpace:(unsigned long long)arg1;
- (void)setIsAccurate:(bool)arg1;
- (void)setParagraphCount:(unsigned long long)arg1;
- (void)setTextStatistics:(id)arg1;
- (void)setWordCount:(unsigned long long)arg1;
- (unsigned long long)wordCount;

@end
