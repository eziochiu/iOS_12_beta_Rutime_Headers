/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SFMutableResultSection : SFResultSection <NSCopying> {
    bool  _doNotFold;
    unsigned int  _domain;
    NSArray * _hiddenExtResults;
    bool  _isGlanceCategory;
    NSMutableOrderedSet * _resultSet;
    NSString * _resultSetIdentifier;
    bool  _serialized;
    int  _source;
    NSString * _sourceDomain;
}

@property bool doNotFold;
@property (nonatomic) unsigned int domain;
@property (nonatomic, retain) NSArray *hiddenExtResults;
@property (nonatomic) bool isGlanceCategory;
@property (nonatomic, retain) NSMutableOrderedSet *resultSet;
@property (nonatomic, retain) NSString *resultSetIdentifier;
@property (nonatomic) bool serialized;
@property int source;
@property (nonatomic, retain) NSString *sourceDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addHiddenExtResult:(id)arg1;
- (void)addResults:(id)arg1;
- (void)addResults:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addResultsFromArray:(id)arg1;
- (void)clearResults;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)doNotFold;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddenExtResults;
- (unsigned long long)indexOfResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultSection:(id)arg1;
- (bool)isGlanceCategory;
- (id)objectForFeedback;
- (id)objectForFeedbackWithResultsArray:(id)arg1;
- (void)removeResults:(id)arg1;
- (void)removeResultsAtIndex:(unsigned long long)arg1;
- (void)removeResultsInArray:(id)arg1;
- (void)replaceResultsAtIndex:(unsigned long long)arg1 withResults:(id)arg2;
- (id)resultSet;
- (id)resultSetIdentifier;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (bool)serialized;
- (void)setDoNotFold:(bool)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setHiddenExtResults:(id)arg1;
- (void)setIsGlanceCategory:(bool)arg1;
- (void)setResultSet:(id)arg1;
- (void)setResultSetIdentifier:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSerialized:(bool)arg1;
- (void)setSource:(int)arg1;
- (void)setSourceDomain:(id)arg1;
- (void)sortUsingComparator:(id /* block */)arg1;
- (int)source;
- (id)sourceDomain;

@end
