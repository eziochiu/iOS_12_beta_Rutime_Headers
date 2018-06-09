/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface DADeliveryAccount : DeliveryAccount {
    DAMailAccount * _DAMailAccount;
}

- (void)dealloc;
- (Class)deliveryClass;
- (id)initWithDAMailAccount:(id)arg1;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)newDeliveryWithMessage:(id)arg1;

@end
