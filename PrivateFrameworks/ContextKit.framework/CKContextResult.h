/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _category;
    NSString * _debug;
    long long  _minPrefix;
    NSString * _portraitId;
    NSString * _query;
    NSOrderedSet * _relatedItems;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *debug;
@property (nonatomic) long long minPrefix;
@property (nonatomic, copy) NSString *portraitId;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSOrderedSet *relatedItems;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debug;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4;
- (bool)isEqual:(id)arg1;
- (long long)minPrefix;
- (id)portraitId;
- (id)query;
- (id)relatedItems;
- (void)setCategory:(id)arg1;
- (void)setDebug:(id)arg1;
- (void)setMinPrefix:(long long)arg1;
- (void)setPortraitId:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRelatedItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
