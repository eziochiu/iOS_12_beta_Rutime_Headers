/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMessage : IDSBaseMessage <NSCopying> {
    NSDictionary * _deliveryStatusContext;
    NSNumber * _version;
    NSNumber * _wantsDeliveryStatus;
}

@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;
@property (copy) NSNumber *wantsDeliveryStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryStatusContext;
- (id)init;
- (id)messageBody;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWantsDeliveryStatus:(id)arg1;
- (id)userAgentHeaderString;
- (id)version;
- (bool)wantsAPSRetries;
- (id)wantsDeliveryStatus;
- (bool)wantsHTTPHeaders;
- (bool)wantsUserAgentInHeaders;

@end
