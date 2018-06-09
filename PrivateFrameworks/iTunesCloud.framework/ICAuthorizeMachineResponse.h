/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICAuthorizeMachineResponse : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSData *keybagData;
@property (nonatomic, readonly, copy) NSData *tokenData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)keybagData;
- (id)tokenData;

@end
