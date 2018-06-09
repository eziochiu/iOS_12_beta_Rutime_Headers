/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecommendedCategory : NSObject {
    NSArray * _channelTagIDs;
    NSArray * _curatedTagIDs;
    NSString * _identifier;
    NSString * _name;
    NSArray * _subcategories;
    NSArray * _topicTagIDs;
}

@property (nonatomic, readonly) NSArray *channelTagIDs;
@property (nonatomic, readonly) NSArray *curatedTagIDs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *subcategories;
@property (nonatomic, readonly) NSArray *topicTagIDs;

- (void).cxx_destruct;
- (id)channelTagIDs;
- (id)curatedTagIDs;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 curatedTagIDs:(id)arg3 recommendedTopicTagIDs:(id)arg4 recommendedChannelTagIDs:(id)arg5 subcategories:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)subcategories;
- (id)topicTagIDs;

@end
