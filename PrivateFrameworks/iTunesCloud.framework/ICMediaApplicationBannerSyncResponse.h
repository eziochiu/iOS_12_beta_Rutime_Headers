/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaApplicationBannerSyncResponse : NSObject {
    NSArray * _commands;
    NSDictionary * _responseDictionary;
    NSString * _status;
}

@property (nonatomic, readonly) NSArray *commands;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSString *status;

- (void).cxx_destruct;
- (id)commands;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (id)status;

@end
