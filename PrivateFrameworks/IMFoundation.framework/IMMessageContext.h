/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMessageContext : NSObject {
    bool  _boost;
    id  _context;
    IMLocalObject * _localObject;
    NSObject<OS_voucher> * _voucher;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (retain) id context;
@property (retain) IMLocalObject *localObject;
@property bool shouldBoost;
@property (retain) NSObject<OS_voucher> *voucher;
@property (retain) NSObject<OS_xpc_object> *xpcMessage;

- (id)context;
- (void)dealloc;
- (id)init;
- (id)localObject;
- (void)setContext:(id)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setShouldBoost:(bool)arg1;
- (void)setVoucher:(id)arg1;
- (void)setXpcMessage:(id)arg1;
- (bool)shouldBoost;
- (id)voucher;
- (id)xpcMessage;

@end
