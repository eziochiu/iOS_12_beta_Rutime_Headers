/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultSection : NSObject <NSCopying, NSSecureCoding, SFJSONSerializable> {
    NSString * _bundleIdentifier;
    NSString * _identifier;
    unsigned long long  _maxInitiallyVisibleResults;
    NSString * _moreText;
    double  _rankingScore;
    NSArray * _results;
    NSString * _title;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults;
@property (nonatomic, copy) NSString *moreText;
@property (nonatomic) double rankingScore;
@property (nonatomic, retain) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jsonData;
- (unsigned long long)maxInitiallyVisibleResults;
- (id)moreText;
- (double)rankingScore;
- (id)results;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxInitiallyVisibleResults:(unsigned long long)arg1;
- (void)setMoreText:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

- (id)objectForFeedback;
- (id)objectForFeedbackWithResultsArray:(id)arg1;

@end
