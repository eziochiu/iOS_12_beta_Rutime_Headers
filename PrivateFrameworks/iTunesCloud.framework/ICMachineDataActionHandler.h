/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMachineDataActionHandler : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _operationQueue;
}

+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)init;
- (void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
