/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserModel : HMDBackingStoreModelObject

@property (nonatomic, retain) HMDAccountHandle *accountHandle;
@property (nonatomic, retain) HMDAccountIdentifier *accountIdentifier;
@property (nonatomic, retain) NSString *changeTag;
@property (nonatomic, retain) NSDictionary *pairingIdentity;
@property (nonatomic, retain) NSNumber *presenceAuthorizationStatus;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSArray *relayAccessTokens;
@property (nonatomic, retain) NSString *relayIdentifier;
@property (nonatomic, retain) NSNumber *remoteAccessAllowed;
@property (nonatomic, retain) NSString *userID;

+ (id)properties;

@end
