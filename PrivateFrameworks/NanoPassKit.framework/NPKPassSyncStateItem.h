/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassSyncStateItem : NSObject <NSSecureCoding> {
    NSData * _manifestHash;
    NSString * _passTypeIdentifier;
    NSNumber * _sequenceCounter;
    NSString * _serialNumber;
}

@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSNumber *sequenceCounter;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, readonly) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 sequenceCounter:(id)arg3 manifestHash:(id)arg4;
- (id)initWithProtoSyncStateItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassSyncStateItem:(id)arg1;
- (id)manifestHash;
- (id)passTypeIdentifier;
- (id)protoSyncStateItem;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setManifestHash:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setSequenceCounter:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (id)uniqueID;

@end
