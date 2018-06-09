/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INAppInfo : NSObject <NSSecureCoding> {
    NSSet * _actionsRestrictedWhileLocked;
    NSSet * _actionsRestrictedWhileProtectedDataUnavailable;
    NSString * _applicationIdentifier;
    NSString * _companionApplicationIdentifier;
    NSSet * _supportedActions;
    NSSet * _supportedActionsByExtensions;
}

@property (nonatomic, copy) NSSet *actionsRestrictedWhileLocked;
@property (nonatomic, copy) NSSet *actionsRestrictedWhileProtectedDataUnavailable;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *companionApplicationIdentifier;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, copy) NSSet *supportedActions;
@property (nonatomic, copy) NSSet *supportedActionsByExtensions;

+ (id)appInfoWithAppProxy:(id)arg1;
+ (id)appInfoWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionsRestrictedWhileLocked;
- (id)actionsRestrictedWhileProtectedDataUnavailable;
- (id)applicationIdentifier;
- (id)companionApplicationIdentifier;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActionsRestrictedWhileLocked:(id)arg1;
- (void)setActionsRestrictedWhileProtectedDataUnavailable:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCompanionApplicationIdentifier:(id)arg1;
- (void)setSupportedActions:(id)arg1;
- (void)setSupportedActionsByExtensions:(id)arg1;
- (id)supportedActions;
- (id)supportedActionsByExtensions;

@end
