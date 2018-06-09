/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMManagementState : NSObject {
    RMAskForTimeClient * _askForTimeClient;
}

@property (nonatomic, readonly) RMAskForTimeClient *askForTimeClient;
@property (nonatomic, readonly) bool isRestrictionsPasscodeSet;
@property (nonatomic, readonly) bool shouldRequestMoreTime;

- (void).cxx_destruct;
- (id)askForTimeClient;
- (id)init;
- (bool)isRestrictionsPasscodeSet;
- (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
- (bool)shouldRequestMoreTime;
- (void)shouldRequestMoreTime:(id /* block */)arg1;

@end
