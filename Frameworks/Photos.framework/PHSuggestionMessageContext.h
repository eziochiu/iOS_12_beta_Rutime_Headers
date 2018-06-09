/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSuggestionMessageContext : NSObject {
    NSArray * _cnParticipants;
    NSDateInterval * _dateInterval;
    NSArray * _messageTokens;
    NSArray * _messages;
    unsigned long long  _numberOfParticipants;
    NSArray * _phParticipants;
    NSArray * _resolvedParticipants;
    NSMutableSet * _suggestionMatchingResults;
}

@property (nonatomic, readonly) NSArray *cnParticipants;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSArray *messageTokens;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) unsigned long long numberOfParticipants;
@property (nonatomic, readonly) NSArray *phParticipants;
@property (nonatomic, readonly) NSArray *resolvedParticipants;
@property (nonatomic, readonly) NSMutableSet *suggestionMatchingResults;

- (void).cxx_destruct;
- (id)_mostRecentSuggestionFromSuggestions:(id)arg1;
- (id)_suggestionsMatchingType:(long long)arg1;
- (id)cnParticipants;
- (id)confidentMatchSuggestionUsingStrategy:(unsigned long long)arg1;
- (id)dateInterval;
- (id)description;
- (id)detailedDescription;
- (id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2;
- (id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2;
- (void)matchWithSuggestion:(id)arg1;
- (id)messageTokens;
- (id)messages;
- (unsigned long long)numberOfParticipants;
- (id)phParticipants;
- (id)resolvedParticipants;
- (void)setCnParticipants:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)setPhParticipants:(id)arg1;
- (id)suggestionMatchingResults;

@end
