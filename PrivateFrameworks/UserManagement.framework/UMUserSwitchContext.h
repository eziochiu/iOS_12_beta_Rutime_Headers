/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUserSwitchContext : NSObject {
    NSDictionary * _environmentsByServices;
    bool  _secondaryActionRequired;
    NSData * _setupData;
    NSString * _shortLivedToken;
}

@property (nonatomic, copy) NSDictionary *environmentsByServices;
@property (nonatomic) bool secondaryActionRequired;
@property (nonatomic, copy) NSData *setupData;
@property (nonatomic, copy) NSString *shortLivedToken;

+ (bool)_isInternalBuild;
+ (void)_switchEnvironmentsByServices:(id)arg1;
+ (id)contextWithDataRepresentation:(id)arg1;
+ (id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(bool)arg3;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)dictRepresentation;
- (id)environmentsByServices;
- (bool)secondaryActionRequired;
- (void)setEnvironmentsByServices:(id)arg1;
- (void)setSecondaryActionRequired:(bool)arg1;
- (void)setSetupData:(id)arg1;
- (void)setShortLivedToken:(id)arg1;
- (id)setupData;
- (id)shortLivedToken;

@end
