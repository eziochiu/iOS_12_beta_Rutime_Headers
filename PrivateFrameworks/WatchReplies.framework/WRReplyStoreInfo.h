/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
 */

@interface WRReplyStoreInfo : NSObject {
    unsigned long long  _defaultCount;
    NSString * _defaultsChangedNotificationName;
    NSString * _defaultsDomain;
    NSString * _defaultsKey;
    bool  _supportsSmartReplies;
}

@property (nonatomic, readonly) unsigned long long defaultCount;
@property (nonatomic, readonly) NSString *defaultsChangedNotificationName;
@property (nonatomic, readonly) NSString *defaultsDomain;
@property (nonatomic, readonly) NSString *defaultsKey;
@property (nonatomic, readonly) bool supportsSmartReplies;

+ (id)infoForCategory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)defaultCount;
- (id)defaultsChangedNotificationName;
- (id)defaultsDomain;
- (id)defaultsKey;
- (bool)supportsSmartReplies;

@end
