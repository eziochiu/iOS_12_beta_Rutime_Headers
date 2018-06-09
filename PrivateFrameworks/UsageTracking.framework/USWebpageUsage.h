/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USWebpageUsage : NSObject {
    NSURL * _URL;
    NSDate * _inFocusStartDate;
    NSDate * _inUseStartDate;
    long long  _state;
    NSObject * _stateLock;
}

@property (readonly) NSURL *URL;
@property (retain) NSDate *inFocusStartDate;
@property (retain) NSDate *inUseStartDate;

+ (id)_xpcConnection;
+ (void)deleteAllHistoryWithCompletionHandler:(id /* block */)arg1;
+ (void)deleteHistoryDuringInterval:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)deleteHistoryForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)deleteHistoryForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)deleteHistoryFromDate:(id)arg1 toDate:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)URL;
- (void)_updateStorageWithDomain:(id)arg1 inUseStartDate:(id)arg2 inFocusStartDate:(id)arg3 endDate:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)changeState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)inFocusStartDate;
- (id)inUseStartDate;
- (id)initWithURL:(id)arg1;
- (void)setInFocusStartDate:(id)arg1;
- (void)setInUseStartDate:(id)arg1;

@end
