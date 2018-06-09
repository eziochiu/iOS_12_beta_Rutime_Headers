/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAuthorizationRequest : NSObject {
    id /* block */  _completionHandler;
    NSUUID * _identifier;
    NSSet * _typesToRead;
    NSSet * _typesToWrite;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSSet *typesToRead;
@property (nonatomic, readonly, copy) NSSet *typesToWrite;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)invokeCompletionHandlerWithSuccess:(bool)arg1 error:(id)arg2;
- (id)typesToRead;
- (id)typesToWrite;

@end
