/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RESectionDescriptor : NSObject {
    bool  _invertRanking;
    long long  _maxElementCount;
    NSString * _name;
    NSSet * _rules;
}

@property (nonatomic, readonly) bool invertRanking;
@property (nonatomic) long long maxElementCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSSet *rules;

- (void).cxx_destruct;
- (id)initWithHistoricSectionDescriptor:(id)arg1;
- (id)initWithSectionDescriptor:(id)arg1;
- (bool)invertRanking;
- (long long)maxElementCount;
- (id)name;
- (id)rules;
- (void)setMaxElementCount:(long long)arg1;
- (void)setRules:(id)arg1;

@end
