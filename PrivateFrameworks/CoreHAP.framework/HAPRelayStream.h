/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayStream : HMFObject {
    <HAPStreamDelegate> * _delegate;
    unsigned long long  _mtu;
}

@property <HAPStreamDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long mtu;

- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (unsigned long long)mtu;
- (void)open;
- (void)setDelegate:(id)arg1;
- (id)writeData:(id)arg1 error:(id*)arg2;

@end
