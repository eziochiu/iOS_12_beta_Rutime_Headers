/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding> {
    bool  _applePaySupported;
    NSString * _name;
    NSString * _planPurchaseEndpointType;
    NSString * _websheetURL;
}

@property (nonatomic) bool applePaySupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *planPurchaseEndpointType;
@property (nonatomic, readonly) NSString *websheetURL;

+ (bool)supportsSecureCoding;

- (bool)applePaySupported;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 applePaySupported:(bool)arg3 responseType:(id)arg4;
- (id)name;
- (id)planPurchaseEndpointType;
- (void)setApplePaySupported:(bool)arg1;
- (id)websheetURL;

@end
