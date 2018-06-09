/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingAdapterManager : NSObject {
    NSMutableDictionary * _adaptersByID;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) NSMutableDictionary *adaptersByID;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)adaptersByID;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)mediaProfileContainer;

@end
