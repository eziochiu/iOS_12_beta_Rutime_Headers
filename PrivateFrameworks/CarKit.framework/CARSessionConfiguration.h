/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSessionConfiguration : NSObject {
    NSString * _endpointIdentifier;
    unsigned long long  _limitableUserInterfaces;
    NSString * _manufacturerIconLabel;
    bool  _manufacturerIconVisible;
    NSArray * _manufacturerIcons;
    NSString * _modelName;
    NSString * _name;
    bool  _nightModeSupported;
    bool  _rightHandDrive;
    NSSet * _screens;
    bool  _supportsACBack;
    bool  _supportsElectronicTollCollection;
    unsigned long long  _transportType;
}

@property (nonatomic, readonly, copy) NSString *endpointIdentifier;
@property (nonatomic, readonly) unsigned long long limitableUserInterfaces;
@property (nonatomic, readonly, copy) NSString *manufacturerIconLabel;
@property (nonatomic, readonly) bool manufacturerIconVisible;
@property (nonatomic, readonly, copy) NSArray *manufacturerIcons;
@property (nonatomic, readonly, copy) NSString *modelName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool nightModeSupported;
@property (nonatomic, readonly) bool rightHandDrive;
@property (nonatomic, readonly, copy) NSSet *screens;
@property (nonatomic, readonly) bool supportsACBack;
@property (nonatomic, readonly) bool supportsElectronicTollCollection;
@property (nonatomic, readonly) unsigned long long transportType;

+ (id)_descriptionForTransportType:(unsigned long long)arg1;
+ (unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionForLimitableUserInterfaces;
- (id)descriptionForTransportType;
- (id)endpointIdentifier;
- (id)initWithPropertySupplier:(id /* block */)arg1;
- (unsigned long long)limitableUserInterfaces;
- (id)manufacturerIconLabel;
- (bool)manufacturerIconVisible;
- (id)manufacturerIcons;
- (id)modelName;
- (id)name;
- (bool)nightModeSupported;
- (bool)rightHandDrive;
- (id)screens;
- (bool)supportsACBack;
- (bool)supportsElectronicTollCollection;
- (unsigned long long)transportType;

@end