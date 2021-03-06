/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSIdentityWrapper : NSObject {
    NSString * _dsid;
    struct _PCSIdentitySetData { } * _identitySet;
    NSString * _identityString;
    NSString * _primaryServiceName;
}

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) struct _PCSIdentitySetData { }*identitySet;
@property (nonatomic, readonly) NSString *identityString;
@property (nonatomic, readonly) NSString *primaryServiceName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dsid;
- (struct _PCSIdentitySetData { }*)identitySet;
- (id)identityString;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { }*)arg1 withPrimaryServiceName:(id)arg2 dsid:(id)arg3;
- (id)primaryServiceName;

@end
