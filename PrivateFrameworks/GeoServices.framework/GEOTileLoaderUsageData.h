/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderUsageData : NSObject {
    double  _decodingTime;
    double  _endTime;
    int  _httpResponseStatusCode;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    }  _key;
    double  _queuedTime;
    unsigned long long  _requestSize;
    double  _startTime;
    unsigned long long  _tileSize;
}

@property (nonatomic) double decodingTime;
@property (nonatomic) double endTime;
@property (nonatomic) int httpResponseStatusCode;
@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } key;
@property (nonatomic) double queuedTime;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic, readonly) double startTime;
@property (nonatomic) unsigned long long tileSize;

- (double)decodingTime;
- (double)endTime;
- (int)httpResponseStatusCode;
- (id)initWithTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })key;
- (double)queuedTime;
- (unsigned long long)requestSize;
- (void)setDecodingTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHttpResponseStatusCode:(int)arg1;
- (void)setQueuedTime:(double)arg1;
- (void)setRequestSize:(unsigned long long)arg1;
- (void)setTileSize:(unsigned long long)arg1;
- (double)startTime;
- (unsigned long long)tileSize;

@end
