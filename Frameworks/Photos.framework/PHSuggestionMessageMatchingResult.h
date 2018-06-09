/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSuggestionMessageMatchingResult : NSObject {
    PHSuggestionMessageContext * _messageContext;
    NSMutableDictionary * _scoreByCMMSuggestionMatchingType;
    PHSuggestion * _suggestion;
}

@property (nonatomic, retain) PHSuggestionMessageContext *messageContext;
@property (nonatomic, retain) NSMutableDictionary *scoreByCMMSuggestionMatchingType;
@property (nonatomic, retain) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)initWithSuggestion:(id)arg1 messageContext:(id)arg2;
- (id)messageContext;
- (void)registerMatchingType:(long long)arg1;
- (id)scoreByCMMSuggestionMatchingType;
- (double)scoreForSuggestionMatchingType:(long long)arg1;
- (void)setMessageContext:(id)arg1;
- (void)setScoreByCMMSuggestionMatchingType:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end