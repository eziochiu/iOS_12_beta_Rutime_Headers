/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaApplicationBannerSyncCommand : NSObject <NSCopying> {
    ICMediaApplicationBanner * _banner;
    long long  _commandType;
    NSDictionary * _responseDictionary;
    unsigned long long  _serialNumber;
}

@property (nonatomic, readonly) ICMediaApplicationBanner *banner;
@property (nonatomic, readonly) long long commandType;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) unsigned long long serialNumber;

- (void).cxx_destruct;
- (id)_nameForCommandType:(long long)arg1;
- (id)banner;
- (long long)commandType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (unsigned long long)serialNumber;

@end
