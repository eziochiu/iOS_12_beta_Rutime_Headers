/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryVisit : NSObject {
    unsigned long long  _attributes;
    long long  _databaseID;
    long long  _generation;
    bool  _httpNonGet;
    WBSHistoryItem * _item;
    bool  _loadSuccessful;
    long long  _origin;
    WBSHistoryVisit * _redirectDestination;
    long long  _redirectDestinationDatabaseID;
    WBSHistoryVisit * _redirectSource;
    long long  _redirectSourceDatabaseID;
    unsigned long long  _score;
    bool  _synthesized;
    NSString * _title;
    double  _visitTime;
}

@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long databaseID;
@property (nonatomic, readonly) WBSHistoryVisit *endOfRedirectChain;
@property (nonatomic) long long generation;
@property (getter=wasHTTPNonGet, nonatomic, readonly) bool httpNonGet;
@property (nonatomic) WBSHistoryItem *item;
@property (getter=loadWasSuccessful, nonatomic) bool loadSuccessful;
@property (nonatomic) long long origin;
@property (nonatomic, retain) WBSHistoryVisit *redirectDestination;
@property (nonatomic) long long redirectDestinationDatabaseID;
@property (nonatomic, retain) WBSHistoryVisit *redirectSource;
@property (nonatomic, readonly) unsigned long long redirectSourceChainLength;
@property (nonatomic) long long redirectSourceDatabaseID;
@property (nonatomic) unsigned long long score;
@property (getter=isSynthesized, nonatomic, readonly) bool synthesized;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) double visitTime;

+ (unsigned long long)scoreForWeightedVisitCount:(float)arg1;
+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;
+ (float)weightedVisitCountFromScore:(unsigned long long)arg1;

- (void).cxx_destruct;
- (double)_weight;
- (unsigned long long)attributes;
- (long long)databaseID;
- (id)endOfRedirectChain;
- (long long)generation;
- (bool)hasAttributes:(unsigned long long)arg1;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned long long)arg3;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(bool)arg3 wasHTTPNonGet:(bool)arg4 origin:(long long)arg5 attributes:(unsigned long long)arg6;
- (bool)isSynthesized;
- (id)item;
- (bool)loadWasSuccessful;
- (long long)origin;
- (void)recomputeScore;
- (id)redirectDestination;
- (long long)redirectDestinationDatabaseID;
- (id)redirectSource;
- (unsigned long long)redirectSourceChainLength;
- (long long)redirectSourceDatabaseID;
- (unsigned long long)score;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDatabaseID:(long long)arg1;
- (void)setGeneration:(long long)arg1;
- (void)setItem:(id)arg1;
- (void)setLoadSuccessful:(bool)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRedirectDestination:(id)arg1;
- (void)setRedirectDestinationDatabaseID:(long long)arg1;
- (void)setRedirectSource:(id)arg1;
- (void)setRedirectSourceDatabaseID:(long long)arg1;
- (void)setScore:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)visitTime;
- (bool)wasHTTPNonGet;

@end
