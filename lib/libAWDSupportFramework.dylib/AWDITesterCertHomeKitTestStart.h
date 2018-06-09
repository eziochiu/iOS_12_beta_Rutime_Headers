/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDITesterCertHomeKitTestStart : PBCodable <NSCopying> {
    NSString * _accessoryManufacturer;
    NSString * _accessoryName;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _testName;
    NSString * _testUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *accessoryManufacturer;
@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, readonly) bool hasAccessoryManufacturer;
@property (nonatomic, readonly) bool hasAccessoryName;
@property (nonatomic, readonly) bool hasTestName;
@property (nonatomic, readonly) bool hasTestUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *testName;
@property (nonatomic, retain) NSString *testUUID;
@property (nonatomic) unsigned long long timestamp;

- (id)accessoryManufacturer;
- (id)accessoryName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryManufacturer;
- (bool)hasAccessoryName;
- (bool)hasTestName;
- (bool)hasTestUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryManufacturer:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTestName:(id)arg1;
- (void)setTestUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)testName;
- (id)testUUID;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
