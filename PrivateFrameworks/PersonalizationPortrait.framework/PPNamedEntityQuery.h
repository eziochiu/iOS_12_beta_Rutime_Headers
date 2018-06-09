/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding> {
    double  _decayRate;
    unsigned long long  _deviceFilter;
    NSSet * _excludingAlgorithms;
    NSSet * _excludingSourceBundleIds;
    NSDate * _fromDate;
    unsigned long long  _limit;
    bool  _matchCategory;
    NSSet * _matchingCategories;
    NSString * _matchingName;
    NSSet * _matchingSourceBundleIds;
    bool  _overrideDecayRate;
    NSDate * _scoringDate;
    NSDate * _toDate;
}

@property (nonatomic) double decayRate;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic, retain) NSSet *excludingAlgorithms;
@property (nonatomic, retain) NSSet *excludingSourceBundleIds;
@property (nonatomic, retain) NSDate *fromDate;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) bool matchCategory;
@property (nonatomic, retain) NSSet *matchingCategories;
@property (nonatomic, copy) NSString *matchingName;
@property (nonatomic, retain) NSSet *matchingSourceBundleIds;
@property (nonatomic) bool overrideDecayRate;
@property (nonatomic, retain) NSDate *scoringDate;
@property (nonatomic, retain) NSDate *toDate;

+ (id)locationQueryWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (id)description;
- (unsigned long long)deviceFilter;
- (void)encodeWithCoder:(id)arg1;
- (id)excludingAlgorithms;
- (id)excludingSourceBundleIds;
- (id)fromDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntityQuery:(id)arg1;
- (unsigned long long)limit;
- (bool)matchCategory;
- (id)matchingCategories;
- (id)matchingName;
- (id)matchingSourceBundleIds;
- (bool)overrideDecayRate;
- (id)scoringDate;
- (void)setDecayRate:(double)arg1;
- (void)setDeviceFilter:(unsigned long long)arg1;
- (void)setExcludingAlgorithms:(id)arg1;
- (void)setExcludingSourceBundleIds:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setMatchCategory:(bool)arg1;
- (void)setMatchingCategories:(id)arg1;
- (void)setMatchingName:(id)arg1;
- (void)setMatchingSourceBundleIds:(id)arg1;
- (void)setOverrideDecayRate:(bool)arg1;
- (void)setScoringDate:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end
