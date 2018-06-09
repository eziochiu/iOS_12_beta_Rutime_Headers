/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase {
    NSString * _statusContainerDisplayName;
    NSString * _statusContainerIdentifier;
    NSString * _statusDisplayName;
    NSString * _statusExtensionPoint;
    NSString * _statusIdentifier;
    NSString * _statusPath;
    NSString * _statusUserElection;
    NSString * _statusVersion;
}

@property (nonatomic, copy) NSString *statusContainerDisplayName;
@property (nonatomic, copy) NSString *statusContainerIdentifier;
@property (nonatomic, copy) NSString *statusDisplayName;
@property (nonatomic, copy) NSString *statusExtensionPoint;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSString *statusPath;
@property (nonatomic, copy) NSString *statusUserElection;
@property (nonatomic, copy) NSString *statusVersion;

+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withContainerDisplayName:(id)arg4 withContainerIdentifier:(id)arg5 withPath:(id)arg6 withVersion:(id)arg7 withUserElection:(id)arg8;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusContainerDisplayName:(id)arg1;
- (void)setStatusContainerIdentifier:(id)arg1;
- (void)setStatusDisplayName:(id)arg1;
- (void)setStatusExtensionPoint:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusPath:(id)arg1;
- (void)setStatusUserElection:(id)arg1;
- (void)setStatusVersion:(id)arg1;
- (id)statusContainerDisplayName;
- (id)statusContainerIdentifier;
- (id)statusDisplayName;
- (id)statusExtensionPoint;
- (id)statusIdentifier;
- (id)statusPath;
- (id)statusUserElection;
- (id)statusVersion;

@end
