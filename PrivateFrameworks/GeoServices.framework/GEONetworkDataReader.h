/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkDataReader : NSObject {
    unsigned long long  _bookmarkOffset;
    const void * _bytes;
    NSMutableData * _data;
    unsigned long long  _dataLength;
    unsigned long long  _offset;
}

- (void).cxx_destruct;
- (id)allData;
- (void)appendNetworkData:(id)arg1;
- (void)dealloc;
- (bool)hasUnreadData;
- (id)initWithData:(id)arg1;
- (void)markOffset;
- (id)readData:(unsigned int)arg1;
- (id)readString;
- (bool)readUnsignedInt:(unsigned int*)arg1;
- (bool)readUnsignedShort:(unsigned short*)arg1;
- (void)seekToMarkedOffset;

@end
