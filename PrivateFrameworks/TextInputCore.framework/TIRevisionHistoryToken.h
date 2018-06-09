/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIRevisionHistoryToken : NSObject {
    bool  _accepted;
    unsigned long long  _offset;
    NSString * _tokenDictionaryString;
    struct TITokenID { 
        unsigned int lexicon_id; 
        unsigned int word_id; 
    }  _tokenID;
    NSString * _tokenInputString;
    unsigned int  _usageLearningMask;
    unsigned int  _usageTrackingMask;
    NSString * _userTyping;
}

@property (getter=isAccepted, nonatomic) bool accepted;
@property (nonatomic) unsigned long long offset;
@property (nonatomic, copy) NSString *tokenDictionaryString;
@property (nonatomic) struct TITokenID { unsigned int x1; unsigned int x2; } tokenID;
@property (nonatomic, copy) NSString *tokenInputString;
@property (nonatomic) unsigned int usageLearningMask;
@property (nonatomic) unsigned int usageTrackingMask;
@property (nonatomic, copy) NSString *userTyping;

- (void).cxx_destruct;
- (id)description;
- (bool)isAccepted;
- (unsigned long long)offset;
- (void)setAccepted:(bool)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setTokenDictionaryString:(id)arg1;
- (void)setTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg1;
- (void)setTokenInputString:(id)arg1;
- (void)setUsageLearningMask:(unsigned int)arg1;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (void)setUserTyping:(id)arg1;
- (id)tokenDictionaryString;
- (struct TITokenID { unsigned int x1; unsigned int x2; })tokenID;
- (id)tokenInputString;
- (unsigned int)usageLearningMask;
- (unsigned int)usageTrackingMask;
- (id)userTyping;

@end
