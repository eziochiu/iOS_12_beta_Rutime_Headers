/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceDescriptor : NSObject <NAIdentifiable> {
    HFServiceDescriptor * _parentServiceDescriptor;
    id /* block */  _parentServiceDescriptorGenerator;
    NSString * _serviceSubtype;
    NSString * _serviceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFServiceDescriptor *parentServiceDescriptor;
@property (nonatomic, readonly, copy) id /* block */ parentServiceDescriptorGenerator;
@property (nonatomic, readonly, copy) NSString *serviceSubtype;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptor:(id)arg3;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptorGenerator:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (id)parentServiceDescriptor;
- (id /* block */)parentServiceDescriptorGenerator;
- (id)serviceSubtype;
- (id)serviceType;

@end
