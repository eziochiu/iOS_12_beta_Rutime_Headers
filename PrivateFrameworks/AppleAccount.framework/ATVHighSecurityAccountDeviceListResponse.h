/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *errorTitle;
@property (nonatomic, readonly) NSDictionary *userDisplayStrings;

- (id)devices;
- (long long)errorCode;
- (id)errorMessage;
- (id)errorTitle;
- (id)userDisplayStrings;

@end
