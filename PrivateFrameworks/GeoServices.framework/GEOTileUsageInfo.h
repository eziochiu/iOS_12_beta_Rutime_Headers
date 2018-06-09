/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileUsageInfo : NSObject {
    double  _decodingTime;
    double  _endTime;
    bool  _hasTileStyle;
    int  _httpResponseStatusCode;
    GEOClientMetrics * _metrics;
    double  _queuedTime;
    unsigned long long  _requestSize;
    double  _startTime;
    unsigned long long  _tileSize;
    int  _tileStyle;
}

@property (nonatomic) double decodingTime;
@property (nonatomic) double endTime;
@property (nonatomic, readonly) bool hasTileStyle;
@property (nonatomic) int httpResponseStatusCode;
@property (nonatomic, readonly) GEOClientMetrics *metrics;
@property (nonatomic) double queuedTime;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long tileSize;
@property (nonatomic, readonly) int tileStyle;

- (void).cxx_destruct;
- (double)decodingTime;
- (id)description;
- (double)endTime;
- (bool)hasTileStyle;
- (int)httpResponseStatusCode;
- (id)initWithTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 withTileUsageData:(id)arg2 andMetrics:(id)arg3;
- (id)metrics;
- (int)protocolType;
- (double)queuedTime;
- (unsigned long long)requestSize;
- (int)resourceFetchType;
- (void)setDecodingTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHttpResponseStatusCode:(int)arg1;
- (void)setQueuedTime:(double)arg1;
- (void)setRequestSize:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTileSize:(unsigned long long)arg1;
- (double)startTime;
- (unsigned long long)tileSize;
- (int)tileStyle;
- (id)transactionMetrics;

@end
