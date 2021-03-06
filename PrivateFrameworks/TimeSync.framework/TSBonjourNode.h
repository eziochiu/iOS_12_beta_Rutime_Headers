/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSBonjourNode : NSObject {
    NSDictionary * _addresses;
    NSString * _domain;
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, copy) NSDictionary *addresses;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *type;

- (void)addedOnInterface:(unsigned int)arg1 named:(id)arg2;
- (id)addresses;
- (void)dealloc;
- (id)domain;
- (id)init;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3;
- (id)name;
- (void)removedFromInterface:(unsigned int)arg1 named:(id)arg2;
- (void)setAddresses:(id)arg1;
- (id)type;

@end
