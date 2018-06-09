/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceIconItemProvider : HFItemProvider {
    HMHome * _home;
    NSSet * _iconItems;
    NSString * _serviceSubtype;
    NSString * _serviceType;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSSet *iconItems;
@property (nonatomic, copy) NSString *serviceSubtype;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)iconItems;
- (id)init;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3;
- (id)items;
- (id)reloadItems;
- (id)serviceSubtype;
- (id)serviceType;
- (void)setIconItems:(id)arg1;
- (void)setServiceSubtype:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
