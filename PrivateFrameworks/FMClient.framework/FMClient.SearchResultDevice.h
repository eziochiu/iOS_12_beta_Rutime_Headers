/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.SearchResultDevice : NSObject <NSSecureCoding> {
    void deviceClass;
    void deviceName;
    void discoveryId;
    void needsSafety;
    void ownerName;
    void pairedDevices;
    void productName;
    void productType;
    void serverId;
    void thisDevice;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) bool needsSafety;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) bool thisDevice;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)description;
- (id)deviceClass;
- (id)deviceName;
- (id)discoveryId;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerName:(id)arg1 serverId:(id)arg2 deviceName:(id)arg3 deviceClass:(id)arg4 productName:(id)arg5 discoveryId:(id)arg6 productType:(id)arg7 thisDevice:(bool)arg8 needsSafety:(bool)arg9 pairedDevices:(id)arg10;
- (bool)needsSafety;
- (id)ownerName;
- (id)pairedDevices;
- (id)productName;
- (id)productType;
- (id)serverId;
- (bool)thisDevice;

@end
