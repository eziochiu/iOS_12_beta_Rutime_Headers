/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLockScreenContentAction : BSAction {
    unsigned long long  _secureAppType;
    NSString * _slot;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long secureAppType;
@property (nonatomic, retain) NSString *slot;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;
- (unsigned long long)secureAppType;
- (void)setSecureAppType:(unsigned long long)arg1;
- (void)setSlot:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)slot;
- (unsigned long long)type;

@end
