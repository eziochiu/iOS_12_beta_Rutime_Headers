/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCRequestInfo : NSObject {
    NSArray * _additionalChangeTags;
    NSURL * _fallbackURL;
    NSString * _requestKey;
    unsigned long long  _requestType;
    NSString * _responseKey;
}

@property (nonatomic, readonly) NSArray *additionalChangeTags;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly, copy) NSString *requestKey;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly, copy) NSString *responseKey;

- (void).cxx_destruct;
- (id)additionalChangeTags;
- (id)description;
- (id)fallbackURL;
- (unsigned long long)hash;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)requestKey;
- (unsigned long long)requestType;
- (id)responseKey;

@end
