/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXContactSuggester : NSObject {
    CNContactStore * _contactStore;
    NSMutableArray * _predictedPeople;
    NSMutableDictionary * _rankMap;
    NSMutableDictionary * _searchMap;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, retain) NSMutableArray *predictedPeople;
@property (nonatomic, retain) NSMutableDictionary *rankMap;
@property (nonatomic, retain) NSMutableDictionary *searchMap;

- (void).cxx_destruct;
- (id)bestContactsWithLimit:(unsigned long long)arg1;
- (void)clearCaches;
- (id)contactStore;
- (id)init;
- (id)predictedPeople;
- (id)rankMap;
- (double)rankPercentageForContactIdentifier:(id)arg1;
- (id)searchMap;
- (void)setPredictedPeople:(id)arg1;
- (void)setRankMap:(id)arg1;
- (void)setSearchMap:(id)arg1;
- (id)suggestedContactForDetailString:(id)arg1;
- (id)suggestedContactsForPrefix:(id)arg1;
- (void)waitForData;

@end
