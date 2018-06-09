/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSProtobuf : NSObject <NSCoding> {
    NSMutableDictionary * _protoBufParams;
    NSData * _uncompressedData;
}

@property (nonatomic, retain) IDSMessageContext *context;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool isResponse;
@property (nonatomic) unsigned short type;
@property (nonatomic, retain) NSData *uncompressedData;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(bool)arg2;

- (void).cxx_destruct;
- (id)context;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithUncompressedData;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(bool)arg3;
- (bool)isResponse;
- (void)setContext:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setType:(unsigned short)arg1;
- (void)setUncompressedData:(id)arg1;
- (unsigned short)type;
- (id)uncompressedData;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)extendedDescription;

// Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash

- (id)nfmDescription;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDescription;

// Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport

- (id)pbDescription;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pkDescription;

@end
