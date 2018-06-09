/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCQueuedMessage : NSObject {
    id /* block */  _completionHandler;
    NSDate * _creationDate;
    WCMessage * _message;
    long long  _retryCount;
}

@property (copy) id /* block */ completionHandler;
@property (readonly) NSDate *creationDate;
@property (retain) WCMessage *message;
@property long long retryCount;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id /* block */)completionHandler;
- (id)creationDate;
- (id)description;
- (id)initWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)message;
- (long long)retryCount;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setRetryCount:(long long)arg1;

@end
