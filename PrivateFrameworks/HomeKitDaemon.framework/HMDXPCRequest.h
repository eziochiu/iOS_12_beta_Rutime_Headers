/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDXPCRequest : HMFObject {
    NSString * _messageName;
    id /* block */  _responseHandler;
    NSDate * _startTime;
}

@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;
@property (nonatomic, readonly) NSDate *startTime;

- (void).cxx_destruct;
- (id)initWithMessageName:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)messageName;
- (id /* block */)responseHandler;
- (id)startTime;

@end
