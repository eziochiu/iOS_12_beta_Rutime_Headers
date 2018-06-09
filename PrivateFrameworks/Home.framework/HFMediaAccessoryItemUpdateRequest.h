/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaAccessoryItemUpdateRequest : NSObject {
    HMHome * _home;
    <HFMediaProfileContainer> * _mediaProfile;
    <HFMediaValueSource> * _mediaValueSource;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfile;
@property (nonatomic, readonly) <HFMediaValueSource> *mediaValueSource;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_disambiguateMultipleAccessoryResponses:(id)arg1 forMediaSystem:(id)arg2;
- (id)_parentMediaSystem;
- (id)accessories;
- (id)home;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 valueSource:(id)arg2;
- (id)mediaProfile;
- (id)mediaValueSource;
- (id)updateWithOptions:(id)arg1;
- (id)valueSource;

@end
