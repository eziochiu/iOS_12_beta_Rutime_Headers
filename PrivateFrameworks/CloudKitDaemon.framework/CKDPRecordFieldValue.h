/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {
    CKDPAsset * _assetValue;
    NSData * _bytesValue;
    CKDPDate * _dateValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int signedValue : 1; 
        unsigned int type : 1; 
        unsigned int isEncrypted : 1; 
    }  _has;
    bool  _isEncrypted;
    NSMutableArray * _listValues;
    CKDPLocationCoordinate * _locationValue;
    CKDPPackage * _packageValue;
    CKDPRecordReference * _referenceValue;
    long long  _signedValue;
    NSString * _stringValue;
    int  _type;
}

@property (nonatomic, retain) CKDPAsset *assetValue;
@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic, retain) CKDPDate *dateValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasAssetValue;
@property (nonatomic, readonly) bool hasBytesValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIsEncrypted;
@property (nonatomic, readonly) bool hasLocationValue;
@property (nonatomic, readonly) bool hasPackageValue;
@property (nonatomic, readonly) bool hasReferenceValue;
@property (nonatomic) bool hasSignedValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isEncrypted;
@property (nonatomic, retain) NSMutableArray *listValues;
@property (nonatomic, retain) CKDPLocationCoordinate *locationValue;
@property (nonatomic, retain) CKDPPackage *packageValue;
@property (nonatomic, retain) CKDPRecordReference *referenceValue;
@property (nonatomic) long long signedValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int type;

+ (Class)listValueType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)addListValue:(id)arg1;
- (id)assetValue;
- (id)bytesValue;
- (void)clearListValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasAssetValue;
- (bool)hasBytesValue;
- (bool)hasDateValue;
- (bool)hasDoubleValue;
- (bool)hasIsEncrypted;
- (bool)hasLocationValue;
- (bool)hasPackageValue;
- (bool)hasReferenceValue;
- (bool)hasSignedValue;
- (bool)hasStringValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (id)listValues;
- (unsigned long long)listValuesCount;
- (id)locationValue;
- (void)mergeFrom:(id)arg1;
- (id)packageValue;
- (bool)readFrom:(id)arg1;
- (id)referenceValue;
- (void)setAssetValue:(id)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIsEncrypted:(bool)arg1;
- (void)setHasSignedValue:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsEncrypted:(bool)arg1;
- (void)setListValues:(id)arg1;
- (void)setLocationValue:(id)arg1;
- (void)setPackageValue:(id)arg1;
- (void)setReferenceValue:(id)arg1;
- (void)setSignedValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(int)arg1;
- (long long)signedValue;
- (id)stringValue;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
