/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantCreateResponse : AAResponse

@property (nonatomic, readonly) NSString *HSAAction;
@property (nonatomic, readonly) NSString *HSAData;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;

- (id)HSAAction;
- (id)HSAData;
- (id)appleID;
- (id)personID;
- (id)status;
- (id)statusMessage;

@end
