/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloProxyToRecipient : CLIntersiloProxy {
    CLIntersiloProxy * _peer;
}

@property (nonatomic, readonly) CLIntersiloProxy *peer;

- (void).cxx_destruct;
- (id)initWithProxiedInterface:(id)arg1 andUninitializedPeer:(id)arg2;
- (id)peer;

@end
