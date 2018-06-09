/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSendEmail : MSMailDefaultService

+ (id)sendEmail:(id)arg1 playSound:(bool)arg2 completionBlock:(id /* block */)arg3;
+ (id)sendEmail:(id)arg1 playSound:(bool)arg2 timeout:(double)arg3 error:(id*)arg4;
+ (id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;

- (void)_sendEmail:(id)arg1 playSound:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;

@end