/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying> {
    NSURLRequest * _request;
}

@property (nonatomic, retain) NSURLRequest *request;

+ (id)keyWithRequest:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;

@end
