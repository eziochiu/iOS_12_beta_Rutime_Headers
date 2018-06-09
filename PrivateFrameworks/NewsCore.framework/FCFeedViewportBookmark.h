/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSString * _articleID;
    NSString * _externalGroupID;
    NSString * _internalGroupID;
}

@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly, copy) NSString *externalGroupID;
@property (nonatomic, readonly, copy) NSString *internalGroupID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalGroupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3;
- (id)internalGroupID;
- (bool)isEqual:(id)arg1;

@end
