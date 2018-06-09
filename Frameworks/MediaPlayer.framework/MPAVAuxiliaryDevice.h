/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVAuxiliaryDevice : NSObject {
    NSString * _deviceName;
    NSString * _modelIdentifier;
    bool  _playing;
    NSString * _productName;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *modelIdentifier;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)otherConnectedDevicesFromRouteDescription:(id)arg1;

- (void).cxx_destruct;
- (id)deviceName;
- (id)initWithDictionary:(id)arg1;
- (bool)isPlaying;
- (id)modelIdentifier;
- (id)productName;
- (id)uniqueID;

@end
