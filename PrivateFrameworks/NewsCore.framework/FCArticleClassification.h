/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleClassification : NSObject {
    NSString * _articleID;
    NSArray * _topics;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, copy) NSArray *topics;

- (void).cxx_destruct;
- (id)articleID;
- (unsigned long long)hash;
- (id)initWithArticleID:(id)arg1 topics:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
