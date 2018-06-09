/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface URLTarget : NSObject {
    unsigned int  _applicationState;
    NSString * _bundleId;
    long long  _defaultIndex;
    NSString * _normalScheme;
    NSString * _secureScheme;
}

@property (nonatomic) unsigned int applicationState;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) long long defaultIndex;
@property (nonatomic, retain) NSString *normalScheme;
@property (nonatomic, retain) NSString *secureScheme;

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

- (void).cxx_destruct;
- (unsigned int)applicationState;
- (id)bundleId;
- (long long)defaultIndex;
- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;
- (id)normalScheme;
- (id)secureScheme;
- (void)setApplicationState:(unsigned int)arg1;
- (void)setBundleId:(id)arg1;
- (void)setDefaultIndex:(long long)arg1;
- (void)setNormalScheme:(id)arg1;
- (void)setSecureScheme:(id)arg1;

@end
