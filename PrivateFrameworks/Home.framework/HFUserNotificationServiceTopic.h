/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable> {
    NSSet * _accessoryCategoryTypes;
    <HFIconDescriptor> * _iconDescriptor;
    NSSet * _serviceTypes;
    NSString * _topicName;
}

@property (nonatomic, readonly, copy) NSSet *accessoryCategoryTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSSet *serviceTypes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *topicName;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)accessoryCategoryTypes;
- (unsigned long long)hash;
- (id)iconDescriptor;
- (id)identifier;
- (id)init;
- (id)initWithServiceType:(id)arg1 topicName:(id)arg2;
- (id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)serviceTypes;
- (id)topicName;

@end
