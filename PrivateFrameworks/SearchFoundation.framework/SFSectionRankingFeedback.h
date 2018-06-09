/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSectionRankingFeedback : SFFeedback <NSCopying> {
    unsigned long long  _localSectionPosition;
    double  _personalizationScore;
    NSArray * _results;
    SFResultSection * _section;
}

@property (nonatomic) unsigned long long localSectionPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, copy) SFResultSection *section;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned long long)arg3 personalizationScore:(double)arg4;
- (unsigned long long)localSectionPosition;
- (double)personalizationScore;
- (id)results;
- (id)section;
- (void)setLocalSectionPosition:(unsigned long long)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setSection:(id)arg1;

@end
