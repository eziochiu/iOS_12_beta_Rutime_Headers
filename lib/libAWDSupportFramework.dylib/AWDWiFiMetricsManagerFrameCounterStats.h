/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDControlFrames * _rxControl;
    AWDDataFrames * _rxData;
    AWDManagementFrames * _rxManagement;
    unsigned long long  _timestamp;
    AWDControlFrames * _txControl;
    AWDDataFrames * _txData;
    AWDManagementFrames * _txManagement;
}

@property (nonatomic, readonly) bool hasRxControl;
@property (nonatomic, readonly) bool hasRxData;
@property (nonatomic, readonly) bool hasRxManagement;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTxControl;
@property (nonatomic, readonly) bool hasTxData;
@property (nonatomic, readonly) bool hasTxManagement;
@property (nonatomic, retain) AWDControlFrames *rxControl;
@property (nonatomic, retain) AWDDataFrames *rxData;
@property (nonatomic, retain) AWDManagementFrames *rxManagement;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDControlFrames *txControl;
@property (nonatomic, retain) AWDDataFrames *txData;
@property (nonatomic, retain) AWDManagementFrames *txManagement;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRxControl;
- (bool)hasRxData;
- (bool)hasRxManagement;
- (bool)hasTimestamp;
- (bool)hasTxControl;
- (bool)hasTxData;
- (bool)hasTxManagement;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rxControl;
- (id)rxData;
- (id)rxManagement;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRxControl:(id)arg1;
- (void)setRxData:(id)arg1;
- (void)setRxManagement:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxControl:(id)arg1;
- (void)setTxData:(id)arg1;
- (void)setTxManagement:(id)arg1;
- (unsigned long long)timestamp;
- (id)txControl;
- (id)txData;
- (id)txManagement;
- (void)writeTo:(id)arg1;

@end
