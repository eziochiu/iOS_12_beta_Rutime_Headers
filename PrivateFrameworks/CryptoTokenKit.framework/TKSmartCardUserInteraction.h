/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding> {
    <TKSmartCardUserInteractionDelegate> * _delegate;
    double  _initialTimeout;
    double  _interactionTimeout;
}

@property <TKSmartCardUserInteractionDelegate> *delegate;
@property double initialTimeout;
@property double interactionTimeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cancel;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)initialTimeout;
- (double)interactionTimeout;
- (void)runWithReply:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialTimeout:(double)arg1;
- (void)setInteractionTimeout:(double)arg1;

@end
