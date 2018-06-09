/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying> {
    NSOrderedSet * _articleIDs;
    NSObject<NSCopying><NSSecureCoding> * _identifier;
    NSDictionary * _overrideHeadlineMetadataByArticleID;
}

@property (nonatomic, copy) NSOrderedSet *articleIDs;
@property (nonatomic, copy) NSObject<NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, copy) NSDictionary *overrideHeadlineMetadataByArticleID;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)init;
- (id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2;
- (id)overrideHeadlineMetadataByArticleID;
- (void)setArticleIDs:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOverrideHeadlineMetadataByArticleID:(id)arg1;

@end
