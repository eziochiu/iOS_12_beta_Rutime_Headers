/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPKeyBag : NSObject {
    unsigned int  _error;
    unsigned int  _generation;
    unsigned int  _index;
    NSArray * _keys;
    double  _lastUsedTimestamp;
    unsigned int  _timestamp;
    NSData * _updateHash;
}

@property unsigned int error;
@property unsigned int generation;
@property unsigned int index;
@property (retain) NSArray *keys;
@property double lastUsedTimestamp;
@property unsigned int timestamp;
@property (retain) NSData *updateHash;

- (void).cxx_destruct;
- (id)data;
- (unsigned int)error;
- (unsigned int)generation;
- (unsigned int)index;
- (id)initWithData:(id)arg1;
- (id)keys;
- (double)lastUsedTimestamp;
- (void)setError:(unsigned int)arg1;
- (void)setGeneration:(unsigned int)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setKeys:(id)arg1;
- (void)setLastUsedTimestamp:(double)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setUpdateHash:(id)arg1;
- (unsigned int)timestamp;
- (id)updateHash;

@end
