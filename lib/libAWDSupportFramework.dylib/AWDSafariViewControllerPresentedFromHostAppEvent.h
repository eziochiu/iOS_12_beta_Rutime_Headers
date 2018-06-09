/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariViewControllerPresentedFromHostAppEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _hostAppBundleID;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasHostAppBundleID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *hostAppBundleID;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHostAppBundleID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hostAppBundleID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHostAppBundleID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
