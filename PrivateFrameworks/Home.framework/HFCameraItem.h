/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraItem : HFItem <HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMCameraProfile * _cameraProfile;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)cameraDemoURLWithName:(id)arg1 extension:(id)arg2;
+ (void)getErrorDescription:(out id*)arg1 detailedErrorDescription:(out id*)arg2 forCameraStreamError:(id)arg3;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)cameraProfile;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)demoMovieURL;
- (id)demoSnapshotURL;
- (id)description;
- (id)homeKitObject;
- (id)init;
- (id)initWithValueSource:(id)arg1 cameraProfile:(id)arg2;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)valueSource;

@end
