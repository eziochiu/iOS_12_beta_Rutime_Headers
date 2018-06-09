/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.SearchFilterDevice : NSObject <NSSecureCoding> {
    void deviceClass;
    void deviceName;
    void ownerName;
    void productName;
    void productType;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)description;
- (id)deviceClass;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerName:(id)arg1 deviceName:(id)arg2 deviceClass:(id)arg3 productName:(id)arg4 productType:(id)arg5;
- (id)ownerName;
- (id)productName;
- (id)productType;

@end
