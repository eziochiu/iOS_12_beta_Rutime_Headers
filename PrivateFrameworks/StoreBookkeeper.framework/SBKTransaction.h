/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKTransaction : NSObject {
    SBKRequest * _activeRequest;
    NSString * _domain;
    NSURL * _requestURL;
    NSMutableDictionary * _userInfo;
}

@property (retain) SBKRequest *activeRequest;
@property (readonly, copy) NSString *domain;
@property (retain) NSURL *requestURL;
@property (retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)activeRequest;
- (id)clampsKey;
- (id)domain;
- (id)init;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requestURL;
- (void)setActiveRequest:(id)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (id)transactionContextForKey:(id)arg1;
- (id)userInfo;

@end
