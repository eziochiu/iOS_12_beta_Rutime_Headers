/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
 */

@interface NNCLastNewsStoryResult : NSObject {
    NSString * _excerpt;
    long long  _family;
    NSString * _headlineIdentifier;
    unsigned long long  _headlineIndex;
    NSString * _headlineTitle;
    NSString * _sectionIdentifier;
    NSString * _sectionName;
    NSString * _sourceIdentifier;
    NSString * _sourceName;
    unsigned long long  _totalHeadlineCount;
}

@property (nonatomic, copy) NSString *excerpt;
@property (nonatomic) long long family;
@property (nonatomic, copy) NSString *headlineIdentifier;
@property (nonatomic) unsigned long long headlineIndex;
@property (nonatomic, copy) NSString *headlineTitle;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, copy) NSString *sectionName;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic) unsigned long long totalHeadlineCount;

- (void).cxx_destruct;
- (id)excerpt;
- (long long)family;
- (unsigned long long)hash;
- (id)headlineIdentifier;
- (unsigned long long)headlineIndex;
- (id)headlineTitle;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sectionIdentifier;
- (id)sectionName;
- (void)setExcerpt:(id)arg1;
- (void)setFamily:(long long)arg1;
- (void)setHeadlineIdentifier:(id)arg1;
- (void)setHeadlineIndex:(unsigned long long)arg1;
- (void)setHeadlineTitle:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionName:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setTotalHeadlineCount:(unsigned long long)arg1;
- (id)sourceIdentifier;
- (id)sourceName;
- (unsigned long long)totalHeadlineCount;

@end
