/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDDeviceRegistrationTask : NSObject {
    NSMutableArray * _completionHandlers;
    NSString * _reason;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (id)completionHandlers;
- (id)init;
- (id)reason;
- (void)setCompletionHandlers:(id)arg1;
- (void)setReason:(id)arg1;

@end
