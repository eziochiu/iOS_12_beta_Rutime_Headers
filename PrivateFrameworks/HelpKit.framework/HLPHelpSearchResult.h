/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpSearchResult : NSObject {
    NSString * _identifier;
    long long  _matchCount;
    long long  _weight;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long matchCount;
@property (nonatomic) long long weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)identifier;
- (long long)matchCount;
- (void)setIdentifier:(id)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setWeight:(long long)arg1;
- (long long)weight;

@end
