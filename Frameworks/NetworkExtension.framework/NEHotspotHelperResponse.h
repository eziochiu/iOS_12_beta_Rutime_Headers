/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotHelperResponse : NSObject {
    struct __CNPluginResponse { } * _response;
}

@property struct __CNPluginResponse { }*response;

- (void)dealloc;
- (void)deliver;
- (id)description;
- (id)initWithResponse:(struct __CNPluginResponse { }*)arg1;
- (struct __CNPluginResponse { }*)response;
- (void)setNetwork:(id)arg1;
- (void)setNetworkList:(id)arg1;
- (void)setResponse:(struct __CNPluginResponse { }*)arg1;

@end
