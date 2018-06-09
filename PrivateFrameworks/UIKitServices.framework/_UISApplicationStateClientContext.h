/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface _UISApplicationStateClientContext : NSObject <FBSServiceFacilityClientContext> {
    NSString * _bundleIdentifier;
    <FBSServiceFacilityClientHandle> * _clientHandle;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) <FBSServiceFacilityClientHandle> *clientHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)clientHandle;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClientHandle:(id)arg1;

@end
