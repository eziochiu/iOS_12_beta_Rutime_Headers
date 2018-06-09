/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DASearchQuery : NSObject {
    <DASearchQueryConsumer> * _consumer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _searchID;
    NSPredicate * _searchPredicate;
    NSString * _searchString;
    unsigned long long  _state;
    int  _timeLimit;
}

@property (nonatomic) <DASearchQueryConsumer> *consumer;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSString *searchID;
@property (nonatomic, copy) NSPredicate *searchPredicate;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic) unsigned long long state;
@property (nonatomic) int timeLimit;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (void).cxx_destruct;
- (id)consumer;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
- (bool)isQueryRunning;
- (unsigned int)maxResults;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)searchID;
- (id)searchPredicate;
- (id)searchString;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (void)setConsumer:(id)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSearchID:(id)arg1;
- (void)setSearchPredicate:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimeLimit:(int)arg1;
- (unsigned long long)state;
- (int)timeLimit;

@end
